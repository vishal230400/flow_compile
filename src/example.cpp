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
// 2. Waits for some time (delays).
// 3. Returns the new number after adding an offset.

ACTOR Future<int> asyncAdd(std::string tag, Future<int> f, int offset) {
  // Log the message received with the tag
  std::cout << "Message received: " << tag << std::endl;

  // Wait for the provided future `f` to complete, applying a delay of 0.5 seconds
  int value = wait(delayed(f, 0.5));

  // Log the message after the delay is complete
  std::cout << "Message delay complete: " << tag << std::endl;

  // Return the value obtained from the future, plus the offset
  return value + offset;
}

int main() {
  // Initialize TLS configuration, which might be used for secure connections (like SSL/TLS)
  auto tls = TLSConfig();

  // Create a new network instance with the TLS configuration
  g_network = newNet2(tls);

  // Compose a chain of asynchronous tasks (Futures). These will be executed in sequence.
  // In the first chain (result1), each asyncAdd is passed a tag, the previous future, and an offset.
  auto result1 = asyncAdd("r1-m3", asyncAdd("r1-m2", asyncAdd("r1-m1", Future<int>(10), 1), 20), 30);

  // In the second chain (result2), a similar sequence is constructed but with different offsets and tags.
  auto result2 = asyncAdd("r2-m3", asyncAdd("r2-m2", asyncAdd("r2-m1", Future<int>(10), 5), 30), 40);

  // Wait for both future chains (`result1` and `result2`) to complete using waitForAll, and then stop the network.
  // The stopAfter function ensures that the network will stop only after both chains finish.
  auto r = stopAfter(waitForAll(std::vector<Future<int>>({result1, result2})));

  // Check if an error occurred during the execution of the futures.
  if (r.isError()) {
    std::cout << "Something bad happened: " << r.getError().what() << std::endl;
  }

  // Start the network and wait for it to finish.
  g_network->run();

  // Once the network finishes, check if both futures are ready and print their results.
  if (result1.isReady() && result2.isReady()) {
    std::cout << "Result 1: " << result1.getValue() << std::endl;  // Output the result of the first chain
    std::cout << "Result 2: " << result2.getValue() << std::endl;  // Output the result of the second chain
  } else {
    std::cout << "Failed!" << std::endl;  // Output failure message if any of the futures did not complete
    return 1;  // Return non-zero to indicate failure
  }
}