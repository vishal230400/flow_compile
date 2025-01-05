#define POST_ACTOR_COMPILER 1
#line 1 "/flow_compile/src/example.cpp"
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

															#line 17 "/flow_compile/tmp/example.out.cpp"
namespace {
// This generated class is to be used only via asyncAdd()
															#line 15 "/flow_compile/src/example.cpp"
template <class AsyncAddActor>
															#line 15 "/flow_compile/src/example.cpp"
class AsyncAddActorState {
															#line 24 "/flow_compile/tmp/example.out.cpp"
public:
															#line 15 "/flow_compile/src/example.cpp"
	AsyncAddActorState(std::string const& tag,Future<int> const& f,int const& offset) 
															#line 15 "/flow_compile/src/example.cpp"
															#line 15 "/flow_compile/src/example.cpp"
		 : tag(tag),
															#line 15 "/flow_compile/src/example.cpp"
		   f(f),
															#line 15 "/flow_compile/src/example.cpp"
		   offset(offset)
															#line 35 "/flow_compile/tmp/example.out.cpp"
	{

	}
	~AsyncAddActorState() 
	{

	}
	int a_body1(int loopDepth=0) 
	{
		try {
															#line 17 "/flow_compile/src/example.cpp"
			std::cout << "Message received: " << tag << std::endl;
															#line 20 "/flow_compile/src/example.cpp"
			StrictFuture<int> __when_expr_0 = delayed(f, 0.5);
															#line 20 "/flow_compile/src/example.cpp"
			if (static_cast<AsyncAddActor*>(this)->actor_wait_state < 0) return a_body1Catch1(actor_cancelled(), loopDepth);
															#line 52 "/flow_compile/tmp/example.out.cpp"
			if (__when_expr_0.isReady()) { if (__when_expr_0.isError()) return a_body1Catch1(__when_expr_0.getError(), loopDepth); else return a_body1when1(__when_expr_0.get(), loopDepth); };
			static_cast<AsyncAddActor*>(this)->actor_wait_state = 1;
															#line 20 "/flow_compile/src/example.cpp"
			__when_expr_0.addCallbackAndClear(static_cast<ActorCallback< AsyncAddActor, 0, int >*>(static_cast<AsyncAddActor*>(this)));
															#line 57 "/flow_compile/tmp/example.out.cpp"
			loopDepth = 0;
		}
		catch (Error& error) {
			loopDepth = a_body1Catch1(error, loopDepth);
		} catch (...) {
			loopDepth = a_body1Catch1(unknown_error(), loopDepth);
		}

		return loopDepth;
	}
	int a_body1Catch1(Error error,int loopDepth=0) 
	{
		this->~AsyncAddActorState();
		static_cast<AsyncAddActor*>(this)->sendErrorAndDelPromiseRef(error);
		loopDepth = 0;

		return loopDepth;
	}
	int a_body1cont1(int const& value,int loopDepth) 
	{
															#line 23 "/flow_compile/src/example.cpp"
		std::cout << "Message delay complete: " << tag << std::endl;
															#line 26 "/flow_compile/src/example.cpp"
		if (!static_cast<AsyncAddActor*>(this)->SAV<int>::futures) { (void)(value + offset); this->~AsyncAddActorState(); static_cast<AsyncAddActor*>(this)->destroy(); return 0; }
															#line 82 "/flow_compile/tmp/example.out.cpp"
		new (&static_cast<AsyncAddActor*>(this)->SAV< int >::value()) int(value + offset);
		this->~AsyncAddActorState();
		static_cast<AsyncAddActor*>(this)->finishSendAndDelPromiseRef();
		return 0;

		return loopDepth;
	}
	int a_body1cont1(int && value,int loopDepth) 
	{
															#line 23 "/flow_compile/src/example.cpp"
		std::cout << "Message delay complete: " << tag << std::endl;
															#line 26 "/flow_compile/src/example.cpp"
		if (!static_cast<AsyncAddActor*>(this)->SAV<int>::futures) { (void)(value + offset); this->~AsyncAddActorState(); static_cast<AsyncAddActor*>(this)->destroy(); return 0; }
															#line 96 "/flow_compile/tmp/example.out.cpp"
		new (&static_cast<AsyncAddActor*>(this)->SAV< int >::value()) int(value + offset);
		this->~AsyncAddActorState();
		static_cast<AsyncAddActor*>(this)->finishSendAndDelPromiseRef();
		return 0;

		return loopDepth;
	}
	int a_body1when1(int const& value,int loopDepth) 
	{
		loopDepth = a_body1cont1(value, loopDepth);

		return loopDepth;
	}
	int a_body1when1(int && value,int loopDepth) 
	{
		loopDepth = a_body1cont1(std::move(value), loopDepth);

		return loopDepth;
	}
	void a_exitChoose1() 
	{
		if (static_cast<AsyncAddActor*>(this)->actor_wait_state > 0) static_cast<AsyncAddActor*>(this)->actor_wait_state = 0;
		static_cast<AsyncAddActor*>(this)->ActorCallback< AsyncAddActor, 0, int >::remove();

	}
	void a_callback_fire(ActorCallback< AsyncAddActor, 0, int >*,int const& value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<AsyncAddActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1when1(value, 0);
		}
		catch (Error& error) {
			a_body1Catch1(error, 0);
		} catch (...) {
			a_body1Catch1(unknown_error(), 0);
		}

	}
	void a_callback_fire(ActorCallback< AsyncAddActor, 0, int >*,int && value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<AsyncAddActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1when1(std::move(value), 0);
		}
		catch (Error& error) {
			a_body1Catch1(error, 0);
		} catch (...) {
			a_body1Catch1(unknown_error(), 0);
		}

	}
	void a_callback_error(ActorCallback< AsyncAddActor, 0, int >*,Error err) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(5187328219730237440UL, 3113259079076601088UL);
		ActorExecutionContextHelper __helper(static_cast<AsyncAddActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1Catch1(err, 0);
		}
		catch (Error& error) {
			a_body1Catch1(error, 0);
		} catch (...) {
			a_body1Catch1(unknown_error(), 0);
		}

	}
															#line 15 "/flow_compile/src/example.cpp"
	std::string tag;
															#line 15 "/flow_compile/src/example.cpp"
	Future<int> f;
															#line 15 "/flow_compile/src/example.cpp"
	int offset;
															#line 179 "/flow_compile/tmp/example.out.cpp"
};
// This generated class is to be used only via asyncAdd()
															#line 15 "/flow_compile/src/example.cpp"
class AsyncAddActor final : public Actor<int>, public ActorCallback< AsyncAddActor, 0, int >, public FastAllocated<AsyncAddActor>, public AsyncAddActorState<AsyncAddActor> {
															#line 184 "/flow_compile/tmp/example.out.cpp"
public:
	using FastAllocated<AsyncAddActor>::operator new;
	using FastAllocated<AsyncAddActor>::operator delete;
	static constexpr ActorIdentifier __actorIdentifier = UID(2788009014219099648UL, 9809678331844277248UL);
	ActiveActorHelper activeActorHelper;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdelete-non-virtual-dtor"
    void destroy() override {
        activeActorHelper.~ActiveActorHelper();
        static_cast<Actor<int>*>(this)->~Actor();
        operator delete(this);
    }
#pragma clang diagnostic pop
friend struct ActorCallback< AsyncAddActor, 0, int >;
															#line 15 "/flow_compile/src/example.cpp"
	AsyncAddActor(std::string const& tag,Future<int> const& f,int const& offset) 
															#line 201 "/flow_compile/tmp/example.out.cpp"
		 : Actor<int>(),
		   AsyncAddActorState<AsyncAddActor>(tag, f, offset),
		   activeActorHelper(__actorIdentifier)
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(15818138374523201280UL, 4572177028506300672UL);
		ActorExecutionContextHelper __helper(static_cast<AsyncAddActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		#ifdef ENABLE_SAMPLING
		this->lineage.setActorName("asyncAdd");
		LineageScope _(&this->lineage);
		#endif
		this->a_body1();

	}
	void cancel() override
	{
		auto wait_state = this->actor_wait_state;
		this->actor_wait_state = -1;
		switch (wait_state) {
		case 1: this->a_callback_error((ActorCallback< AsyncAddActor, 0, int >*)0, actor_cancelled()); break;
		}

	}
};
} // namespace
															#line 15 "/flow_compile/src/example.cpp"
[[nodiscard]] Future<int> asyncAdd( std::string const& tag, Future<int> const& f, int const& offset ) {
															#line 15 "/flow_compile/src/example.cpp"
	return Future<int>(new AsyncAddActor(tag, f, offset));
															#line 232 "/flow_compile/tmp/example.out.cpp"
}

#line 28 "/flow_compile/src/example.cpp"

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