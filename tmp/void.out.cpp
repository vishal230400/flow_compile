#define POST_ACTOR_COMPILER 1
#line 1 "/flow_compile/src/void.cpp"
#include <iostream>
#include <string>
#include "flow/flow.h"

using namespace std;

															#line 9 "/flow_compile/tmp/void.out.cpp"
namespace {
// This generated class is to be used only via dummy()
															#line 7 "/flow_compile/src/void.cpp"
template <class DummyActor>
															#line 7 "/flow_compile/src/void.cpp"
class DummyActorState {
															#line 16 "/flow_compile/tmp/void.out.cpp"
public:
															#line 7 "/flow_compile/src/void.cpp"
	DummyActorState() 
															#line 7 "/flow_compile/src/void.cpp"
															#line 8 "/flow_compile/src/void.cpp"
		 : onChange(Void())
															#line 23 "/flow_compile/tmp/void.out.cpp"
	{

	}
	~DummyActorState() 
	{

	}
	int a_body1(int loopDepth=0) 
	{
		try {
															#line 10 "/flow_compile/src/void.cpp"
			;
															#line 36 "/flow_compile/tmp/void.out.cpp"
			loopDepth = a_body1loopHead1(loopDepth);
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
		this->~DummyActorState();
		static_cast<DummyActor*>(this)->sendErrorAndDelPromiseRef(error);
		loopDepth = 0;

		return loopDepth;
	}
	int a_body1cont1(int loopDepth) 
	{
															#line 17 "/flow_compile/src/void.cpp"
		if (!static_cast<DummyActor*>(this)->SAV<Void>::futures) { (void)(Void()); this->~DummyActorState(); static_cast<DummyActor*>(this)->destroy(); return 0; }
															#line 59 "/flow_compile/tmp/void.out.cpp"
		new (&static_cast<DummyActor*>(this)->SAV< Void >::value()) Void(Void());
		this->~DummyActorState();
		static_cast<DummyActor*>(this)->finishSendAndDelPromiseRef();
		return 0;

		return loopDepth;
	}
	int a_body1loopHead1(int loopDepth) 
	{
		int oldLoopDepth = ++loopDepth;
		while (loopDepth == oldLoopDepth) loopDepth = a_body1loopBody1(loopDepth);

		return loopDepth;
	}
	int a_body1loopBody1(int loopDepth) 
	{
															#line 11 "/flow_compile/src/void.cpp"
		StrictFuture<Void> __when_expr_0 = onChange;
															#line 10 "/flow_compile/src/void.cpp"
		if (static_cast<DummyActor*>(this)->actor_wait_state < 0) return a_body1Catch1(actor_cancelled(), std::max(0, loopDepth - 1));
															#line 80 "/flow_compile/tmp/void.out.cpp"
		if (__when_expr_0.isReady()) { if (__when_expr_0.isError()) return a_body1Catch1(__when_expr_0.getError(), std::max(0, loopDepth - 1)); else return a_body1loopBody1when1(__when_expr_0.get(), loopDepth); };
		static_cast<DummyActor*>(this)->actor_wait_state = 1;
															#line 11 "/flow_compile/src/void.cpp"
		__when_expr_0.addCallbackAndClear(static_cast<ActorCallback< DummyActor, 0, Void >*>(static_cast<DummyActor*>(this)));
															#line 85 "/flow_compile/tmp/void.out.cpp"
		loopDepth = 0;

		return loopDepth;
	}
	int a_body1break1(int loopDepth) 
	{
		try {
			return a_body1cont1(loopDepth);
		}
		catch (Error& error) {
			loopDepth = a_body1Catch1(error, loopDepth);
		} catch (...) {
			loopDepth = a_body1Catch1(unknown_error(), loopDepth);
		}

		return loopDepth;
	}
	int a_body1loopBody1when1(Void const& _,int loopDepth) 
	{
															#line 12 "/flow_compile/src/void.cpp"
		cout << "dummy onChange changed\n";
															#line 107 "/flow_compile/tmp/void.out.cpp"
		return a_body1break1(loopDepth==0?0:loopDepth-1); // break

		return loopDepth;
	}
	int a_body1loopBody1when1(Void && _,int loopDepth) 
	{
															#line 12 "/flow_compile/src/void.cpp"
		cout << "dummy onChange changed\n";
															#line 116 "/flow_compile/tmp/void.out.cpp"
		return a_body1break1(loopDepth==0?0:loopDepth-1); // break

		return loopDepth;
	}
	void a_exitChoose1() 
	{
		if (static_cast<DummyActor*>(this)->actor_wait_state > 0) static_cast<DummyActor*>(this)->actor_wait_state = 0;
		static_cast<DummyActor*>(this)->ActorCallback< DummyActor, 0, Void >::remove();

	}
	void a_callback_fire(ActorCallback< DummyActor, 0, Void >*,Void const& value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<DummyActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1loopBody1when1(value, 0);
		}
		catch (Error& error) {
			a_body1Catch1(error, 0);
		} catch (...) {
			a_body1Catch1(unknown_error(), 0);
		}

	}
	void a_callback_fire(ActorCallback< DummyActor, 0, Void >*,Void && value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<DummyActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1loopBody1when1(std::move(value), 0);
		}
		catch (Error& error) {
			a_body1Catch1(error, 0);
		} catch (...) {
			a_body1Catch1(unknown_error(), 0);
		}

	}
	void a_callback_error(ActorCallback< DummyActor, 0, Void >*,Error err) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(5187328219730237440UL, 3113259079076601088UL);
		ActorExecutionContextHelper __helper(static_cast<DummyActor*>(this)->activeActorHelper.actorID, __identifier);
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
															#line 8 "/flow_compile/src/void.cpp"
	Future<Void> onChange;
															#line 180 "/flow_compile/tmp/void.out.cpp"
};
// This generated class is to be used only via dummy()
															#line 7 "/flow_compile/src/void.cpp"
class DummyActor final : public Actor<Void>, public ActorCallback< DummyActor, 0, Void >, public FastAllocated<DummyActor>, public DummyActorState<DummyActor> {
															#line 185 "/flow_compile/tmp/void.out.cpp"
public:
	using FastAllocated<DummyActor>::operator new;
	using FastAllocated<DummyActor>::operator delete;
	static constexpr ActorIdentifier __actorIdentifier = UID(9042209572328549888UL, 3506181004366593280UL);
	ActiveActorHelper activeActorHelper;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdelete-non-virtual-dtor"
    void destroy() override {
        activeActorHelper.~ActiveActorHelper();
        static_cast<Actor<Void>*>(this)->~Actor();
        operator delete(this);
    }
#pragma clang diagnostic pop
friend struct ActorCallback< DummyActor, 0, Void >;
															#line 7 "/flow_compile/src/void.cpp"
	DummyActor() 
															#line 202 "/flow_compile/tmp/void.out.cpp"
		 : Actor<Void>(),
		   DummyActorState<DummyActor>(),
		   activeActorHelper(__actorIdentifier)
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(8279686911712934144UL, 11774009509985974528UL);
		ActorExecutionContextHelper __helper(static_cast<DummyActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		#ifdef ENABLE_SAMPLING
		this->lineage.setActorName("dummy");
		LineageScope _(&this->lineage);
		#endif
		this->a_body1();

	}
	void cancel() override
	{
		auto wait_state = this->actor_wait_state;
		this->actor_wait_state = -1;
		switch (wait_state) {
		case 1: this->a_callback_error((ActorCallback< DummyActor, 0, Void >*)0, actor_cancelled()); break;
		}

	}
};
} // namespace
															#line 7 "/flow_compile/src/void.cpp"
[[nodiscard]] Future<Void> dummy(  ) {
															#line 7 "/flow_compile/src/void.cpp"
	return Future<Void>(new DummyActor());
															#line 233 "/flow_compile/tmp/void.out.cpp"
}

#line 20 "/flow_compile/src/void.cpp"

															#line 238 "/flow_compile/tmp/void.out.cpp"
namespace {
// This generated class is to be used only via foo()
															#line 21 "/flow_compile/src/void.cpp"
template <class FooActor>
															#line 21 "/flow_compile/src/void.cpp"
class FooActorState {
															#line 245 "/flow_compile/tmp/void.out.cpp"
public:
															#line 21 "/flow_compile/src/void.cpp"
	FooActorState() 
															#line 21 "/flow_compile/src/void.cpp"
															#line 22 "/flow_compile/src/void.cpp"
		 : onChange(dummy())
															#line 252 "/flow_compile/tmp/void.out.cpp"
	{

	}
	~FooActorState() 
	{

	}
	int a_body1(int loopDepth=0) 
	{
		try {
															#line 24 "/flow_compile/src/void.cpp"
			;
															#line 265 "/flow_compile/tmp/void.out.cpp"
			loopDepth = a_body1loopHead1(loopDepth);
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
		this->~FooActorState();
		static_cast<FooActor*>(this)->sendErrorAndDelPromiseRef(error);
		loopDepth = 0;

		return loopDepth;
	}
	int a_body1cont1(int loopDepth) 
	{
															#line 31 "/flow_compile/src/void.cpp"
		cout << "foo returned.\n";
															#line 32 "/flow_compile/src/void.cpp"
		if (!static_cast<FooActor*>(this)->SAV<Void>::futures) { (void)(Void()); this->~FooActorState(); static_cast<FooActor*>(this)->destroy(); return 0; }
															#line 290 "/flow_compile/tmp/void.out.cpp"
		new (&static_cast<FooActor*>(this)->SAV< Void >::value()) Void(Void());
		this->~FooActorState();
		static_cast<FooActor*>(this)->finishSendAndDelPromiseRef();
		return 0;

		return loopDepth;
	}
	int a_body1loopHead1(int loopDepth) 
	{
		int oldLoopDepth = ++loopDepth;
		while (loopDepth == oldLoopDepth) loopDepth = a_body1loopBody1(loopDepth);

		return loopDepth;
	}
	int a_body1loopBody1(int loopDepth) 
	{
															#line 25 "/flow_compile/src/void.cpp"
		StrictFuture<Void> __when_expr_0 = onChange;
															#line 24 "/flow_compile/src/void.cpp"
		if (static_cast<FooActor*>(this)->actor_wait_state < 0) return a_body1Catch1(actor_cancelled(), std::max(0, loopDepth - 1));
															#line 311 "/flow_compile/tmp/void.out.cpp"
		if (__when_expr_0.isReady()) { if (__when_expr_0.isError()) return a_body1Catch1(__when_expr_0.getError(), std::max(0, loopDepth - 1)); else return a_body1loopBody1when1(__when_expr_0.get(), loopDepth); };
		static_cast<FooActor*>(this)->actor_wait_state = 1;
															#line 25 "/flow_compile/src/void.cpp"
		__when_expr_0.addCallbackAndClear(static_cast<ActorCallback< FooActor, 0, Void >*>(static_cast<FooActor*>(this)));
															#line 316 "/flow_compile/tmp/void.out.cpp"
		loopDepth = 0;

		return loopDepth;
	}
	int a_body1break1(int loopDepth) 
	{
		try {
			return a_body1cont1(loopDepth);
		}
		catch (Error& error) {
			loopDepth = a_body1Catch1(error, loopDepth);
		} catch (...) {
			loopDepth = a_body1Catch1(unknown_error(), loopDepth);
		}

		return loopDepth;
	}
	int a_body1loopBody1when1(Void const& _,int loopDepth) 
	{
															#line 26 "/flow_compile/src/void.cpp"
		cout << "foo onChange changed\n";
															#line 338 "/flow_compile/tmp/void.out.cpp"
		return a_body1break1(loopDepth==0?0:loopDepth-1); // break

		return loopDepth;
	}
	int a_body1loopBody1when1(Void && _,int loopDepth) 
	{
															#line 26 "/flow_compile/src/void.cpp"
		cout << "foo onChange changed\n";
															#line 347 "/flow_compile/tmp/void.out.cpp"
		return a_body1break1(loopDepth==0?0:loopDepth-1); // break

		return loopDepth;
	}
	void a_exitChoose1() 
	{
		if (static_cast<FooActor*>(this)->actor_wait_state > 0) static_cast<FooActor*>(this)->actor_wait_state = 0;
		static_cast<FooActor*>(this)->ActorCallback< FooActor, 0, Void >::remove();

	}
	void a_callback_fire(ActorCallback< FooActor, 0, Void >*,Void const& value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<FooActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1loopBody1when1(value, 0);
		}
		catch (Error& error) {
			a_body1Catch1(error, 0);
		} catch (...) {
			a_body1Catch1(unknown_error(), 0);
		}

	}
	void a_callback_fire(ActorCallback< FooActor, 0, Void >*,Void && value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<FooActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1loopBody1when1(std::move(value), 0);
		}
		catch (Error& error) {
			a_body1Catch1(error, 0);
		} catch (...) {
			a_body1Catch1(unknown_error(), 0);
		}

	}
	void a_callback_error(ActorCallback< FooActor, 0, Void >*,Error err) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(5187328219730237440UL, 3113259079076601088UL);
		ActorExecutionContextHelper __helper(static_cast<FooActor*>(this)->activeActorHelper.actorID, __identifier);
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
															#line 22 "/flow_compile/src/void.cpp"
	Future<Void> onChange;
															#line 411 "/flow_compile/tmp/void.out.cpp"
};
// This generated class is to be used only via foo()
															#line 21 "/flow_compile/src/void.cpp"
class FooActor final : public Actor<Void>, public ActorCallback< FooActor, 0, Void >, public FastAllocated<FooActor>, public FooActorState<FooActor> {
															#line 416 "/flow_compile/tmp/void.out.cpp"
public:
	using FastAllocated<FooActor>::operator new;
	using FastAllocated<FooActor>::operator delete;
	static constexpr ActorIdentifier __actorIdentifier = UID(10719679250072117504UL, 10065682359506224896UL);
	ActiveActorHelper activeActorHelper;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdelete-non-virtual-dtor"
    void destroy() override {
        activeActorHelper.~ActiveActorHelper();
        static_cast<Actor<Void>*>(this)->~Actor();
        operator delete(this);
    }
#pragma clang diagnostic pop
friend struct ActorCallback< FooActor, 0, Void >;
															#line 21 "/flow_compile/src/void.cpp"
	FooActor() 
															#line 433 "/flow_compile/tmp/void.out.cpp"
		 : Actor<Void>(),
		   FooActorState<FooActor>(),
		   activeActorHelper(__actorIdentifier)
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(11477833932375782144UL, 6014218575318761216UL);
		ActorExecutionContextHelper __helper(static_cast<FooActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		#ifdef ENABLE_SAMPLING
		this->lineage.setActorName("foo");
		LineageScope _(&this->lineage);
		#endif
		this->a_body1();

	}
	void cancel() override
	{
		auto wait_state = this->actor_wait_state;
		this->actor_wait_state = -1;
		switch (wait_state) {
		case 1: this->a_callback_error((ActorCallback< FooActor, 0, Void >*)0, actor_cancelled()); break;
		}

	}
};
} // namespace
															#line 21 "/flow_compile/src/void.cpp"
[[nodiscard]] Future<Void> foo(  ) {
															#line 21 "/flow_compile/src/void.cpp"
	return Future<Void>(new FooActor());
															#line 464 "/flow_compile/tmp/void.out.cpp"
}

#line 35 "/flow_compile/src/void.cpp"

															#line 469 "/flow_compile/tmp/void.out.cpp"
namespace {
// This generated class is to be used only via never()
															#line 36 "/flow_compile/src/void.cpp"
template <class NeverActor>
															#line 36 "/flow_compile/src/void.cpp"
class NeverActorState {
															#line 476 "/flow_compile/tmp/void.out.cpp"
public:
															#line 36 "/flow_compile/src/void.cpp"
	NeverActorState() 
															#line 36 "/flow_compile/src/void.cpp"
	{
															#line 482 "/flow_compile/tmp/void.out.cpp"

	}
	~NeverActorState() 
	{

	}
	int a_body1(int loopDepth=0) 
	{
		try {
															#line 37 "/flow_compile/src/void.cpp"
			StrictFuture<Void> __when_expr_0 = Future<Void>(Never());
															#line 37 "/flow_compile/src/void.cpp"
			if (static_cast<NeverActor*>(this)->actor_wait_state < 0) return a_body1Catch1(actor_cancelled(), loopDepth);
															#line 496 "/flow_compile/tmp/void.out.cpp"
			if (__when_expr_0.isReady()) { if (__when_expr_0.isError()) return a_body1Catch1(__when_expr_0.getError(), loopDepth); else return a_body1when1(__when_expr_0.get(), loopDepth); };
			static_cast<NeverActor*>(this)->actor_wait_state = 1;
															#line 37 "/flow_compile/src/void.cpp"
			__when_expr_0.addCallbackAndClear(static_cast<ActorCallback< NeverActor, 0, Void >*>(static_cast<NeverActor*>(this)));
															#line 501 "/flow_compile/tmp/void.out.cpp"
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
		this->~NeverActorState();
		static_cast<NeverActor*>(this)->sendErrorAndDelPromiseRef(error);
		loopDepth = 0;

		return loopDepth;
	}
	int a_body1cont1(Void const& _,int loopDepth) 
	{
															#line 39 "/flow_compile/src/void.cpp"
		cout << "never returned.\n";
															#line 40 "/flow_compile/src/void.cpp"
		if (!static_cast<NeverActor*>(this)->SAV<Void>::futures) { (void)(Void()); this->~NeverActorState(); static_cast<NeverActor*>(this)->destroy(); return 0; }
															#line 526 "/flow_compile/tmp/void.out.cpp"
		new (&static_cast<NeverActor*>(this)->SAV< Void >::value()) Void(Void());
		this->~NeverActorState();
		static_cast<NeverActor*>(this)->finishSendAndDelPromiseRef();
		return 0;

		return loopDepth;
	}
	int a_body1cont1(Void && _,int loopDepth) 
	{
															#line 39 "/flow_compile/src/void.cpp"
		cout << "never returned.\n";
															#line 40 "/flow_compile/src/void.cpp"
		if (!static_cast<NeverActor*>(this)->SAV<Void>::futures) { (void)(Void()); this->~NeverActorState(); static_cast<NeverActor*>(this)->destroy(); return 0; }
															#line 540 "/flow_compile/tmp/void.out.cpp"
		new (&static_cast<NeverActor*>(this)->SAV< Void >::value()) Void(Void());
		this->~NeverActorState();
		static_cast<NeverActor*>(this)->finishSendAndDelPromiseRef();
		return 0;

		return loopDepth;
	}
	int a_body1when1(Void const& _,int loopDepth) 
	{
		loopDepth = a_body1cont1(_, loopDepth);

		return loopDepth;
	}
	int a_body1when1(Void && _,int loopDepth) 
	{
		loopDepth = a_body1cont1(std::move(_), loopDepth);

		return loopDepth;
	}
	void a_exitChoose1() 
	{
		if (static_cast<NeverActor*>(this)->actor_wait_state > 0) static_cast<NeverActor*>(this)->actor_wait_state = 0;
		static_cast<NeverActor*>(this)->ActorCallback< NeverActor, 0, Void >::remove();

	}
	void a_callback_fire(ActorCallback< NeverActor, 0, Void >*,Void const& value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<NeverActor*>(this)->activeActorHelper.actorID, __identifier);
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
	void a_callback_fire(ActorCallback< NeverActor, 0, Void >*,Void && value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<NeverActor*>(this)->activeActorHelper.actorID, __identifier);
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
	void a_callback_error(ActorCallback< NeverActor, 0, Void >*,Error err) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(5187328219730237440UL, 3113259079076601088UL);
		ActorExecutionContextHelper __helper(static_cast<NeverActor*>(this)->activeActorHelper.actorID, __identifier);
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
};
// This generated class is to be used only via never()
															#line 36 "/flow_compile/src/void.cpp"
class NeverActor final : public Actor<Void>, public ActorCallback< NeverActor, 0, Void >, public FastAllocated<NeverActor>, public NeverActorState<NeverActor> {
															#line 621 "/flow_compile/tmp/void.out.cpp"
public:
	using FastAllocated<NeverActor>::operator new;
	using FastAllocated<NeverActor>::operator delete;
	static constexpr ActorIdentifier __actorIdentifier = UID(16501930581754249728UL, 8351658394894946560UL);
	ActiveActorHelper activeActorHelper;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdelete-non-virtual-dtor"
    void destroy() override {
        activeActorHelper.~ActiveActorHelper();
        static_cast<Actor<Void>*>(this)->~Actor();
        operator delete(this);
    }
#pragma clang diagnostic pop
friend struct ActorCallback< NeverActor, 0, Void >;
															#line 36 "/flow_compile/src/void.cpp"
	NeverActor() 
															#line 638 "/flow_compile/tmp/void.out.cpp"
		 : Actor<Void>(),
		   NeverActorState<NeverActor>(),
		   activeActorHelper(__actorIdentifier)
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(330944137034009856UL, 14652429739231250688UL);
		ActorExecutionContextHelper __helper(static_cast<NeverActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		#ifdef ENABLE_SAMPLING
		this->lineage.setActorName("never");
		LineageScope _(&this->lineage);
		#endif
		this->a_body1();

	}
	void cancel() override
	{
		auto wait_state = this->actor_wait_state;
		this->actor_wait_state = -1;
		switch (wait_state) {
		case 1: this->a_callback_error((ActorCallback< NeverActor, 0, Void >*)0, actor_cancelled()); break;
		}

	}
};
} // namespace
															#line 36 "/flow_compile/src/void.cpp"
[[nodiscard]] Future<Void> never(  ) {
															#line 36 "/flow_compile/src/void.cpp"
	return Future<Void>(new NeverActor());
															#line 669 "/flow_compile/tmp/void.out.cpp"
}

#line 43 "/flow_compile/src/void.cpp"

															#line 674 "/flow_compile/tmp/void.out.cpp"
namespace {
// This generated class is to be used only via never2()
															#line 44 "/flow_compile/src/void.cpp"
template <class Never2Actor>
															#line 44 "/flow_compile/src/void.cpp"
class Never2ActorState {
															#line 681 "/flow_compile/tmp/void.out.cpp"
public:
															#line 44 "/flow_compile/src/void.cpp"
	Never2ActorState(int const& select) 
															#line 44 "/flow_compile/src/void.cpp"
															#line 44 "/flow_compile/src/void.cpp"
		 : select(select)
															#line 688 "/flow_compile/tmp/void.out.cpp"
	{

	}
	~Never2ActorState() 
	{

	}
	int a_body1(int loopDepth=0) 
	{
		try {
															#line 45 "/flow_compile/src/void.cpp"
			;
															#line 701 "/flow_compile/tmp/void.out.cpp"
			loopDepth = a_body1loopHead1(loopDepth);
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
		this->~Never2ActorState();
		static_cast<Never2Actor*>(this)->sendErrorAndDelPromiseRef(error);
		loopDepth = 0;

		return loopDepth;
	}
	int a_body1cont1(int loopDepth) 
	{
															#line 53 "/flow_compile/src/void.cpp"
		cout << "never2 returned.\n";
															#line 54 "/flow_compile/src/void.cpp"
		if (!static_cast<Never2Actor*>(this)->SAV<Void>::futures) { (void)(Void()); this->~Never2ActorState(); static_cast<Never2Actor*>(this)->destroy(); return 0; }
															#line 726 "/flow_compile/tmp/void.out.cpp"
		new (&static_cast<Never2Actor*>(this)->SAV< Void >::value()) Void(Void());
		this->~Never2ActorState();
		static_cast<Never2Actor*>(this)->finishSendAndDelPromiseRef();
		return 0;

		return loopDepth;
	}
	int a_body1loopHead1(int loopDepth) 
	{
		int oldLoopDepth = ++loopDepth;
		while (loopDepth == oldLoopDepth) loopDepth = a_body1loopBody1(loopDepth);

		return loopDepth;
	}
	int a_body1loopBody1(int loopDepth) 
	{
															#line 46 "/flow_compile/src/void.cpp"
		reg = Never();
															#line 49 "/flow_compile/src/void.cpp"
		StrictFuture<Void> __when_expr_0 = reg;
															#line 48 "/flow_compile/src/void.cpp"
		if (static_cast<Never2Actor*>(this)->actor_wait_state < 0) return a_body1Catch1(actor_cancelled(), std::max(0, loopDepth - 1));
															#line 749 "/flow_compile/tmp/void.out.cpp"
		if (__when_expr_0.isReady()) { if (__when_expr_0.isError()) return a_body1Catch1(__when_expr_0.getError(), std::max(0, loopDepth - 1)); else return a_body1loopBody1when1(__when_expr_0.get(), loopDepth); };
		static_cast<Never2Actor*>(this)->actor_wait_state = 1;
															#line 49 "/flow_compile/src/void.cpp"
		__when_expr_0.addCallbackAndClear(static_cast<ActorCallback< Never2Actor, 0, Void >*>(static_cast<Never2Actor*>(this)));
															#line 754 "/flow_compile/tmp/void.out.cpp"
		loopDepth = 0;

		return loopDepth;
	}
	int a_body1break1(int loopDepth) 
	{
		try {
			return a_body1cont1(loopDepth);
		}
		catch (Error& error) {
			loopDepth = a_body1Catch1(error, loopDepth);
		} catch (...) {
			loopDepth = a_body1Catch1(unknown_error(), loopDepth);
		}

		return loopDepth;
	}
	int a_body1loopBody1when1(Void const& _,int loopDepth) 
	{
		return a_body1break1(loopDepth==0?0:loopDepth-1); // break

		return loopDepth;
	}
	int a_body1loopBody1when1(Void && _,int loopDepth) 
	{
		return a_body1break1(loopDepth==0?0:loopDepth-1); // break

		return loopDepth;
	}
	void a_exitChoose1() 
	{
		if (static_cast<Never2Actor*>(this)->actor_wait_state > 0) static_cast<Never2Actor*>(this)->actor_wait_state = 0;
		static_cast<Never2Actor*>(this)->ActorCallback< Never2Actor, 0, Void >::remove();

	}
	void a_callback_fire(ActorCallback< Never2Actor, 0, Void >*,Void const& value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<Never2Actor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1loopBody1when1(value, 0);
		}
		catch (Error& error) {
			a_body1Catch1(error, 0);
		} catch (...) {
			a_body1Catch1(unknown_error(), 0);
		}

	}
	void a_callback_fire(ActorCallback< Never2Actor, 0, Void >*,Void && value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<Never2Actor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1loopBody1when1(std::move(value), 0);
		}
		catch (Error& error) {
			a_body1Catch1(error, 0);
		} catch (...) {
			a_body1Catch1(unknown_error(), 0);
		}

	}
	void a_callback_error(ActorCallback< Never2Actor, 0, Void >*,Error err) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(5187328219730237440UL, 3113259079076601088UL);
		ActorExecutionContextHelper __helper(static_cast<Never2Actor*>(this)->activeActorHelper.actorID, __identifier);
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
															#line 44 "/flow_compile/src/void.cpp"
	int select;
															#line 46 "/flow_compile/src/void.cpp"
	Future<Void> reg;
															#line 845 "/flow_compile/tmp/void.out.cpp"
};
// This generated class is to be used only via never2()
															#line 44 "/flow_compile/src/void.cpp"
class Never2Actor final : public Actor<Void>, public ActorCallback< Never2Actor, 0, Void >, public FastAllocated<Never2Actor>, public Never2ActorState<Never2Actor> {
															#line 850 "/flow_compile/tmp/void.out.cpp"
public:
	using FastAllocated<Never2Actor>::operator new;
	using FastAllocated<Never2Actor>::operator delete;
	static constexpr ActorIdentifier __actorIdentifier = UID(18266485919711900672UL, 7396389479606920448UL);
	ActiveActorHelper activeActorHelper;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdelete-non-virtual-dtor"
    void destroy() override {
        activeActorHelper.~ActiveActorHelper();
        static_cast<Actor<Void>*>(this)->~Actor();
        operator delete(this);
    }
#pragma clang diagnostic pop
friend struct ActorCallback< Never2Actor, 0, Void >;
															#line 44 "/flow_compile/src/void.cpp"
	Never2Actor(int const& select) 
															#line 867 "/flow_compile/tmp/void.out.cpp"
		 : Actor<Void>(),
		   Never2ActorState<Never2Actor>(select),
		   activeActorHelper(__actorIdentifier)
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(11197459106052611584UL, 6377640089594410496UL);
		ActorExecutionContextHelper __helper(static_cast<Never2Actor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		#ifdef ENABLE_SAMPLING
		this->lineage.setActorName("never2");
		LineageScope _(&this->lineage);
		#endif
		this->a_body1();

	}
	void cancel() override
	{
		auto wait_state = this->actor_wait_state;
		this->actor_wait_state = -1;
		switch (wait_state) {
		case 1: this->a_callback_error((ActorCallback< Never2Actor, 0, Void >*)0, actor_cancelled()); break;
		}

	}
};
} // namespace
															#line 44 "/flow_compile/src/void.cpp"
[[nodiscard]] Future<Void> never2( int const& select ) {
															#line 44 "/flow_compile/src/void.cpp"
	return Future<Void>(new Never2Actor(select));
															#line 898 "/flow_compile/tmp/void.out.cpp"
}

#line 57 "/flow_compile/src/void.cpp"

															#line 903 "/flow_compile/tmp/void.out.cpp"
namespace {
// This generated class is to be used only via throw1()
															#line 58 "/flow_compile/src/void.cpp"
template <class Throw1Actor>
															#line 58 "/flow_compile/src/void.cpp"
class Throw1ActorState {
															#line 910 "/flow_compile/tmp/void.out.cpp"
public:
															#line 58 "/flow_compile/src/void.cpp"
	Throw1ActorState(bool const& b) 
															#line 58 "/flow_compile/src/void.cpp"
															#line 58 "/flow_compile/src/void.cpp"
		 : b(b)
															#line 917 "/flow_compile/tmp/void.out.cpp"
	{

	}
	~Throw1ActorState() 
	{

	}
	int a_body1(int loopDepth=0) 
	{
		try {
															#line 59 "/flow_compile/src/void.cpp"
			if (b)
															#line 930 "/flow_compile/tmp/void.out.cpp"
			{
															#line 60 "/flow_compile/src/void.cpp"
				return a_body1Catch1(future_version(), loopDepth);
															#line 934 "/flow_compile/tmp/void.out.cpp"
			}
															#line 62 "/flow_compile/src/void.cpp"
			if (!static_cast<Throw1Actor*>(this)->SAV<Void>::futures) { (void)(Void()); this->~Throw1ActorState(); static_cast<Throw1Actor*>(this)->destroy(); return 0; }
															#line 938 "/flow_compile/tmp/void.out.cpp"
			new (&static_cast<Throw1Actor*>(this)->SAV< Void >::value()) Void(Void());
			this->~Throw1ActorState();
			static_cast<Throw1Actor*>(this)->finishSendAndDelPromiseRef();
			return 0;
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
		this->~Throw1ActorState();
		static_cast<Throw1Actor*>(this)->sendErrorAndDelPromiseRef(error);
		loopDepth = 0;

		return loopDepth;
	}
															#line 58 "/flow_compile/src/void.cpp"
	bool b;
															#line 962 "/flow_compile/tmp/void.out.cpp"
};
// This generated class is to be used only via throw1()
															#line 58 "/flow_compile/src/void.cpp"
class Throw1Actor final : public Actor<Void>, public FastAllocated<Throw1Actor>, public Throw1ActorState<Throw1Actor> {
															#line 967 "/flow_compile/tmp/void.out.cpp"
public:
	using FastAllocated<Throw1Actor>::operator new;
	using FastAllocated<Throw1Actor>::operator delete;
	static constexpr ActorIdentifier __actorIdentifier = UID(14173901579190056960UL, 1729520093032655104UL);
	ActiveActorHelper activeActorHelper;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdelete-non-virtual-dtor"
    void destroy() override {
        activeActorHelper.~ActiveActorHelper();
        static_cast<Actor<Void>*>(this)->~Actor();
        operator delete(this);
    }
#pragma clang diagnostic pop
															#line 58 "/flow_compile/src/void.cpp"
	Throw1Actor(bool const& b) 
															#line 983 "/flow_compile/tmp/void.out.cpp"
		 : Actor<Void>(),
		   Throw1ActorState<Throw1Actor>(b),
		   activeActorHelper(__actorIdentifier)
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9874907735259141376UL, 3150407709524556032UL);
		ActorExecutionContextHelper __helper(static_cast<Throw1Actor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		#ifdef ENABLE_SAMPLING
		this->lineage.setActorName("throw1");
		LineageScope _(&this->lineage);
		#endif
		this->a_body1();

	}
	void cancel() override
	{
		auto wait_state = this->actor_wait_state;
		this->actor_wait_state = -1;
		switch (wait_state) {
		}

	}
};
} // namespace
															#line 58 "/flow_compile/src/void.cpp"
[[nodiscard]] Future<Void> throw1( bool const& b ) {
															#line 58 "/flow_compile/src/void.cpp"
	return Future<Void>(new Throw1Actor(b));
															#line 1013 "/flow_compile/tmp/void.out.cpp"
}

#line 65 "/flow_compile/src/void.cpp"

															#line 1018 "/flow_compile/tmp/void.out.cpp"
namespace {
// This generated class is to be used only via throw2()
															#line 66 "/flow_compile/src/void.cpp"
template <class Throw2Actor>
															#line 66 "/flow_compile/src/void.cpp"
class Throw2ActorState {
															#line 1025 "/flow_compile/tmp/void.out.cpp"
public:
															#line 66 "/flow_compile/src/void.cpp"
	Throw2ActorState(bool const& b) 
															#line 66 "/flow_compile/src/void.cpp"
															#line 66 "/flow_compile/src/void.cpp"
		 : b(b)
															#line 1032 "/flow_compile/tmp/void.out.cpp"
	{

	}
	~Throw2ActorState() 
	{

	}
	int a_body1(int loopDepth=0) 
	{
		try {
															#line 67 "/flow_compile/src/void.cpp"
			if (b)
															#line 1045 "/flow_compile/tmp/void.out.cpp"
			{
															#line 68 "/flow_compile/src/void.cpp"
				return a_body1Catch1(future_version(), loopDepth);
															#line 1049 "/flow_compile/tmp/void.out.cpp"
			}
			loopDepth = a_body1cont3(loopDepth);
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
		delete static_cast<Throw2Actor*>(this);
		loopDepth = 0;

		return loopDepth;
	}
	int a_body1cont3(int loopDepth) 
	{
															#line 66 "/flow_compile/src/void.cpp"
		delete static_cast<Throw2Actor*>(this);
															#line 1072 "/flow_compile/tmp/void.out.cpp"
		return 0;

		return loopDepth;
	}
															#line 66 "/flow_compile/src/void.cpp"
	bool b;
															#line 1079 "/flow_compile/tmp/void.out.cpp"
};
// This generated class is to be used only via throw2()
															#line 66 "/flow_compile/src/void.cpp"
class Throw2Actor final : public Actor<void>, public FastAllocated<Throw2Actor>, public Throw2ActorState<Throw2Actor> {
															#line 1084 "/flow_compile/tmp/void.out.cpp"
public:
	using FastAllocated<Throw2Actor>::operator new;
	using FastAllocated<Throw2Actor>::operator delete;
	static constexpr ActorIdentifier __actorIdentifier = UID(160463631594929152UL, 16409091426782420480UL);
	ActiveActorHelper activeActorHelper;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdelete-non-virtual-dtor"
    void destroy() {{
        activeActorHelper.~ActiveActorHelper();
        static_cast<Actor<void>*>(this)->~Actor();
        operator delete(this);
    }}
#pragma clang diagnostic pop
															#line 66 "/flow_compile/src/void.cpp"
	Throw2Actor(bool const& b) 
															#line 1100 "/flow_compile/tmp/void.out.cpp"
		 : Actor<void>(),
		   Throw2ActorState<Throw2Actor>(b),
		   activeActorHelper(__actorIdentifier)
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(1601656458911212800UL, 2849265843997624576UL);
		ActorExecutionContextHelper __helper(static_cast<Throw2Actor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		#ifdef ENABLE_SAMPLING
		this->lineage.setActorName("throw2");
		LineageScope _(&this->lineage);
		#endif
		this->a_body1();

	}
};
} // namespace
															#line 66 "/flow_compile/src/void.cpp"
void throw2( bool const& b ) {
															#line 66 "/flow_compile/src/void.cpp"
	new Throw2Actor(b);
															#line 1122 "/flow_compile/tmp/void.out.cpp"
}

#line 72 "/flow_compile/src/void.cpp"

															#line 1127 "/flow_compile/tmp/void.out.cpp"
namespace {
// This generated class is to be used only via throw3()
															#line 73 "/flow_compile/src/void.cpp"
template <class Throw3Actor>
															#line 73 "/flow_compile/src/void.cpp"
class Throw3ActorState {
															#line 1134 "/flow_compile/tmp/void.out.cpp"
public:
															#line 73 "/flow_compile/src/void.cpp"
	Throw3ActorState(bool const& b) 
															#line 73 "/flow_compile/src/void.cpp"
															#line 73 "/flow_compile/src/void.cpp"
		 : b(b)
															#line 1141 "/flow_compile/tmp/void.out.cpp"
	{

	}
	~Throw3ActorState() 
	{

	}
	int a_body1(int loopDepth=0) 
	{
		try {
			try {
															#line 75 "/flow_compile/src/void.cpp"
				if (b)
															#line 1155 "/flow_compile/tmp/void.out.cpp"
				{
															#line 76 "/flow_compile/src/void.cpp"
					return a_body1Catch2(future_version(), loopDepth);
															#line 1159 "/flow_compile/tmp/void.out.cpp"
				}
				loopDepth = a_body1cont4(loopDepth);
			}
			catch (Error& error) {
				loopDepth = a_body1Catch2(error, loopDepth);
			} catch (...) {
				loopDepth = a_body1Catch2(unknown_error(), loopDepth);
			}
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
		this->~Throw3ActorState();
		static_cast<Throw3Actor*>(this)->sendErrorAndDelPromiseRef(error);
		loopDepth = 0;

		return loopDepth;
	}
	int a_body1cont1(int loopDepth) 
	{
															#line 82 "/flow_compile/src/void.cpp"
		printf("\nactorTest3 failed\n");
															#line 83 "/flow_compile/src/void.cpp"
		if (!static_cast<Throw3Actor*>(this)->SAV<Void>::futures) { (void)(Void()); this->~Throw3ActorState(); static_cast<Throw3Actor*>(this)->destroy(); return 0; }
															#line 1191 "/flow_compile/tmp/void.out.cpp"
		new (&static_cast<Throw3Actor*>(this)->SAV< Void >::value()) Void(Void());
		this->~Throw3ActorState();
		static_cast<Throw3Actor*>(this)->finishSendAndDelPromiseRef();
		return 0;

		return loopDepth;
	}
	int a_body1Catch2(const Error& __current_error,int loopDepth=0) 
	{
		try {
															#line 79 "/flow_compile/src/void.cpp"
			if (!static_cast<Throw3Actor*>(this)->SAV<Void>::futures) { (void)(Void()); this->~Throw3ActorState(); static_cast<Throw3Actor*>(this)->destroy(); return 0; }
															#line 1204 "/flow_compile/tmp/void.out.cpp"
			new (&static_cast<Throw3Actor*>(this)->SAV< Void >::value()) Void(Void());
			this->~Throw3ActorState();
			static_cast<Throw3Actor*>(this)->finishSendAndDelPromiseRef();
			return 0;
		}
		catch (Error& error) {
			loopDepth = a_body1Catch1(error, loopDepth);
		} catch (...) {
			loopDepth = a_body1Catch1(unknown_error(), loopDepth);
		}

		return loopDepth;
	}
	int a_body1cont4(int loopDepth) 
	{
		try {
			loopDepth = a_body1cont1(loopDepth);
		}
		catch (Error& error) {
			loopDepth = a_body1Catch1(error, loopDepth);
		} catch (...) {
			loopDepth = a_body1Catch1(unknown_error(), loopDepth);
		}

		return loopDepth;
	}
															#line 73 "/flow_compile/src/void.cpp"
	bool b;
															#line 1233 "/flow_compile/tmp/void.out.cpp"
};
// This generated class is to be used only via throw3()
															#line 73 "/flow_compile/src/void.cpp"
class Throw3Actor final : public Actor<Void>, public FastAllocated<Throw3Actor>, public Throw3ActorState<Throw3Actor> {
															#line 1238 "/flow_compile/tmp/void.out.cpp"
public:
	using FastAllocated<Throw3Actor>::operator new;
	using FastAllocated<Throw3Actor>::operator delete;
	static constexpr ActorIdentifier __actorIdentifier = UID(2752796621180946176UL, 6469893173782511360UL);
	ActiveActorHelper activeActorHelper;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdelete-non-virtual-dtor"
    void destroy() override {
        activeActorHelper.~ActiveActorHelper();
        static_cast<Actor<Void>*>(this)->~Actor();
        operator delete(this);
    }
#pragma clang diagnostic pop
															#line 73 "/flow_compile/src/void.cpp"
	Throw3Actor(bool const& b) 
															#line 1254 "/flow_compile/tmp/void.out.cpp"
		 : Actor<Void>(),
		   Throw3ActorState<Throw3Actor>(b),
		   activeActorHelper(__actorIdentifier)
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(14157065489503239936UL, 4439449644185614592UL);
		ActorExecutionContextHelper __helper(static_cast<Throw3Actor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		#ifdef ENABLE_SAMPLING
		this->lineage.setActorName("throw3");
		LineageScope _(&this->lineage);
		#endif
		this->a_body1();

	}
	void cancel() override
	{
		auto wait_state = this->actor_wait_state;
		this->actor_wait_state = -1;
		switch (wait_state) {
		}

	}
};
} // namespace
															#line 73 "/flow_compile/src/void.cpp"
[[nodiscard]] Future<Void> throw3( bool const& b ) {
															#line 73 "/flow_compile/src/void.cpp"
	return Future<Void>(new Throw3Actor(b));
															#line 1284 "/flow_compile/tmp/void.out.cpp"
}

#line 86 "/flow_compile/src/void.cpp"

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
