#include <iostream>
#include <string>
#include "flow/flow.h"

using namespace std;

ACTOR Future<Void> dummy() {
  state Future<Void> onChange = Void();
  // `dummy` creates a Future that is immediately ready (`Void()`).
  loop choose {
    when (wait(onChange)) {
      cout << "dummy onChange changed\n";
      break;
      // Waits for `onChange` to be ready, then breaks the loop.
    }
  }
  return Void();
  // Returns a completed future (`Void()`).
}

ACTOR Future<Void> foo() {
  state Future<Void> onChange = dummy();
  // `foo` initializes `onChange` with the result of `dummy`.
  loop choose {
    when (wait(onChange)) {
      cout << "foo onChange changed\n";
      break;
      // Waits for `onChange` to be ready, prints a message, and breaks the loop.
    }
  }
  cout << "foo returned.\n";
  return Void();
  // Returns a completed future.
}

ACTOR Future<Void> never() {
  wait(Future<Void>(Never()));
  // Waits on a future that never completes (`Never()`), effectively blocking indefinitely.
  cout << "never returned.\n";
  return Void();
  // This line is never reached.
}

ACTOR Future<Void> never2(int select) {
  loop {
    state Future<Void> reg = Never();
    // Initializes `reg` to a future that never completes.
    choose {
      when(wait(reg)) { break; }
      // Will never execute because `reg` does not complete.
    }
  }
  cout << "never2 returned.\n";
  return Void();
  // This line is never reached.
}

ACTOR Future<Void> throw1(bool b) {
  if (b)
    throw future_version();
    // Throws an exception if `b` is true.
  return Void();
  // Returns a completed future otherwise.
}

ACTOR void throw2(bool b) {
  if (b)
    throw future_version();
    // Throws an exception if `b` is true.
  // This is a `void` actor, so it does not return anything.
}

ACTOR Future<Void> throw3(bool b) {
  try {
    if (b)
      throw future_version();
      // Throws an exception if `b` is true.
  } catch (Error&) {
    return Void();
    // Catches the exception and returns a completed future.
  }
  printf("\nactorTest3 failed\n");
  return Void();
  // If no exception occurs, prints an error message and returns a completed future.
}

void test1() {
  Future<Void> f = Void(), n = Never();
  // `f` is a completed future, `n` never completes.
  cout << "f = Void(), f.isReady() = " << f.isReady() << endl;
  // Prints whether `f` is ready (should be true).
  cout << "n = Never(), n.isReady() = " << f.isReady() << endl;
  // Prints whether `n` is ready (should be false).
}

void test2() {
  Future<Void> result = dummy();
  // Calls `dummy` and assigns the result to `result`.
  cout << "result = dummy(), result.isReady() = " << result.isReady() << endl;
  // Prints whether `result` is ready (should be true because `dummy` completes).
}

void test3() {
  Future<Void> result = foo();
  // Calls `foo` and assigns the result to `result`.
  cout << "result = foo(), result.isReady() = " << result.isReady() << endl;
  // Prints whether `result` is ready (should be true because `foo` completes).
}

void test4() {
  Future<Void> result = never();
  // Calls `never` and assigns the result to `result`.
  cout << "result = never(), result.isReady() = " << result.isReady() << endl;
  // This will not be printed as `never` blocks indefinitely.
}

void test5() {
  const int not_used = 1;
  Future<Void> result = never2(not_used);
  // Calls `never2` and assigns the result to `result`.
  cout << "result = never2(), result.isReady() = " << result.isReady() << endl;
  // This will not be printed as `never2` blocks indefinitely.
}

void test_throw1() {
  Future<Void> result = throw1(true);
  // Calls `throw1` with `true`, which throws an exception.
  cout << "result = throw1(true), result.isReady() = " << result.isReady() << endl;
  // May terminate the program if the exception is unhandled.
}

void test_throw2() {
  throw2(true);
  // Calls `throw2` with `true`, which throws an exception.
  cout << "void throw2(true) returned" << endl;
  // This will not be printed because `throw2` throws an exception.
}

void test_throw3() {
  Future<Void> result = throw3(true);
  // Calls `throw3` with `true`, which catches and handles the exception.
  cout << "result = throw3(true), result.isReady() = " << result.isReady() << endl;
  // Prints whether `result` is ready (should be true because `throw3` catches the exception and completes).
}

int main() {
  cout << "Test 1" << endl;
  test1();
  cout << "Test 2" << endl;
  test2();
  cout << "Test 3" << endl;
  test3();
  cout << "Test 4" << endl;
  test4();
  cout << "Test 5" << endl;
  test5();
  cout << "Test Throw 1" << endl;
  test_throw1();
  cout << "Test Throw 2" << endl;
  test_throw2();
  cout << "Test Throw 3" << endl;
  test_throw3();
  return 0;
}
