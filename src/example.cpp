#include <iostream>
#include <vector>
#include "flow/flow.h"
#include "flow/network.h"
#include "flow/IConnection.h"
#include "fdbrpc/FlowTransport.h"
#include "fdbrpc/fdbrpc.h"
#include "flow/TLSConfig.actor.g.h"

// Simple counting actor that:
// 1. Logs a tag on start and finish.
// 2. Waits for some time.
// 3. Returns the new number.
ACTOR Future<int> asyncAdd(std::string tag, Future<int> f, int offset) {
  std::cout << "Message received: " << tag << std::endl;
  int value = wait(delayed(f, 0.5));
  std::cout << "Message delay complete: " << tag << std::endl;
  return value + offset;
}


int main() {
  auto tls = TLSConfig();
  g_network = newNet2(tls);

  // We compose our future chain.
  auto result1 = asyncAdd("r1-m3", asyncAdd("r1-m2", asyncAdd("r1-m1", Future<int>(10), 1), 20), 30);
  auto result2 = asyncAdd("r2-m3", asyncAdd("r2-m2", asyncAdd("r2-m1", Future<int>(10), 5), 30), 40);

  // Tell the network when it can stop: wait for both future chains to complete.
  auto r = stopAfter(waitForAll(std::vector<Future<int>>({result1, result2})));
  if (r.isError()) {
    std::cout << "Something bad happened: " << r.getError().what() << std::endl;
  }

  // Start the network and wait for it to stop.
  g_network->run();

  // Check and print the results.
  if (result1.isReady() && result2.isReady()) {
    std::cout << "Result 1: " << result1.getValue() << std::endl;
    std::cout << "Result 2: " << result2.getValue() << std::endl;
  } else {
    std::cout << "Failed!" << std::endl;
    return 1;
  }
}