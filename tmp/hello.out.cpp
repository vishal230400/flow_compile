#define POST_ACTOR_COMPILER 1
#line 1 "/flow_compile/src/hello.cpp"
#include <iostream>
#include <string>
#include "flow/flow.h"

using namespace std;

// Function that demonstrates checking the state of Promise and Future before and after sending data
void hello() {
  // Create a Promise object to store a string
  Promise<string> p;
  // Retrieve the Future object corresponding to the promise.
  Future<string> f = p.getFuture();

  // Output the state of the promise and future before sending data
  cout << "Before send: promise isSet = " << p.isSet() << ", future.isReady = "
       << f.isReady() << endl;

  // Send a value ("Hello, World!") through the promise
  p.send( "Hello, World!" );

  // Output the state of the promise and future after sending data
  cout << "After send: promise isSet = " << p.isSet() << ", future.isReady = "
       << f.isReady() << endl;

  // Output the value stored in the Future. This will block until the promise is fulfilled.
  cout<< f.get() << endl;  // f.get() will return the value sent through the promise
}

int main() {

  // Call the hello() function to demonstrate checking the state of Promise and Future before and after sending data
  hello();
  
  // Return 0 to indicate that the program executed successfully
  return 0;
}