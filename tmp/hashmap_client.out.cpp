#define POST_ACTOR_COMPILER 1
#line 2 "/flow_compile/src/hashmap_client.cpp"

// #include <foundationdb/fdb_c.h>

#include "hashmap.h"

// #include "flow/actorcompiler.h" // has to be last include

#include <vector>
#include <iostream>
#include <fstream>
#include <cstdio>
#include <map>
#include <string>
#include <unordered_map>

using std::vector, std::pair, std::string;

NetworkAddress serverAddress;

															#line 22 "/flow_compile/tmp/hashmap_client.out.cpp"
namespace {
// This generated class is to be used only via put()
															#line 20 "/flow_compile/src/hashmap_client.cpp"
template <class PutActor>
															#line 20 "/flow_compile/src/hashmap_client.cpp"
class PutActorState {
															#line 29 "/flow_compile/tmp/hashmap_client.out.cpp"
public:
															#line 20 "/flow_compile/src/hashmap_client.cpp"
	PutActorState(HashmapServerInterface const& hsi,string const& key,string const& value) 
															#line 20 "/flow_compile/src/hashmap_client.cpp"
															#line 20 "/flow_compile/src/hashmap_client.cpp"
		 : hsi(hsi),
															#line 20 "/flow_compile/src/hashmap_client.cpp"
		   key(key),
															#line 20 "/flow_compile/src/hashmap_client.cpp"
		   value(value)
															#line 40 "/flow_compile/tmp/hashmap_client.out.cpp"
	{

	}
	~PutActorState() 
	{

	}
	int a_body1(int loopDepth=0) 
	{
		try {
															#line 21 "/flow_compile/src/hashmap_client.cpp"
			HashmapData data = HashmapData{key, value};
															#line 22 "/flow_compile/src/hashmap_client.cpp"
			HashmapOperation op(data);
															#line 23 "/flow_compile/src/hashmap_client.cpp"
			StrictFuture<HashmapData> __when_expr_0 = hsi.put.getReply(op);
															#line 23 "/flow_compile/src/hashmap_client.cpp"
			if (static_cast<PutActor*>(this)->actor_wait_state < 0) return a_body1Catch1(actor_cancelled(), loopDepth);
															#line 59 "/flow_compile/tmp/hashmap_client.out.cpp"
			if (__when_expr_0.isReady()) { if (__when_expr_0.isError()) return a_body1Catch1(__when_expr_0.getError(), loopDepth); else return a_body1when1(__when_expr_0.get(), loopDepth); };
			static_cast<PutActor*>(this)->actor_wait_state = 1;
															#line 23 "/flow_compile/src/hashmap_client.cpp"
			__when_expr_0.addCallbackAndClear(static_cast<ActorCallback< PutActor, 0, HashmapData >*>(static_cast<PutActor*>(this)));
															#line 64 "/flow_compile/tmp/hashmap_client.out.cpp"
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
		this->~PutActorState();
		static_cast<PutActor*>(this)->sendErrorAndDelPromiseRef(error);
		loopDepth = 0;

		return loopDepth;
	}
	int a_body1cont1(HashmapData const& result,int loopDepth) 
	{
															#line 24 "/flow_compile/src/hashmap_client.cpp"
		if (!static_cast<PutActor*>(this)->SAV<Void>::futures) { (void)(Void()); this->~PutActorState(); static_cast<PutActor*>(this)->destroy(); return 0; }
															#line 87 "/flow_compile/tmp/hashmap_client.out.cpp"
		new (&static_cast<PutActor*>(this)->SAV< Void >::value()) Void(Void());
		this->~PutActorState();
		static_cast<PutActor*>(this)->finishSendAndDelPromiseRef();
		return 0;

		return loopDepth;
	}
	int a_body1cont1(HashmapData && result,int loopDepth) 
	{
															#line 24 "/flow_compile/src/hashmap_client.cpp"
		if (!static_cast<PutActor*>(this)->SAV<Void>::futures) { (void)(Void()); this->~PutActorState(); static_cast<PutActor*>(this)->destroy(); return 0; }
															#line 99 "/flow_compile/tmp/hashmap_client.out.cpp"
		new (&static_cast<PutActor*>(this)->SAV< Void >::value()) Void(Void());
		this->~PutActorState();
		static_cast<PutActor*>(this)->finishSendAndDelPromiseRef();
		return 0;

		return loopDepth;
	}
	int a_body1when1(HashmapData const& result,int loopDepth) 
	{
		loopDepth = a_body1cont1(result, loopDepth);

		return loopDepth;
	}
	int a_body1when1(HashmapData && result,int loopDepth) 
	{
		loopDepth = a_body1cont1(std::move(result), loopDepth);

		return loopDepth;
	}
	void a_exitChoose1() 
	{
		if (static_cast<PutActor*>(this)->actor_wait_state > 0) static_cast<PutActor*>(this)->actor_wait_state = 0;
		static_cast<PutActor*>(this)->ActorCallback< PutActor, 0, HashmapData >::remove();

	}
	void a_callback_fire(ActorCallback< PutActor, 0, HashmapData >*,HashmapData const& value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<PutActor*>(this)->activeActorHelper.actorID, __identifier);
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
	void a_callback_fire(ActorCallback< PutActor, 0, HashmapData >*,HashmapData && value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<PutActor*>(this)->activeActorHelper.actorID, __identifier);
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
	void a_callback_error(ActorCallback< PutActor, 0, HashmapData >*,Error err) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(5187328219730237440UL, 3113259079076601088UL);
		ActorExecutionContextHelper __helper(static_cast<PutActor*>(this)->activeActorHelper.actorID, __identifier);
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
															#line 20 "/flow_compile/src/hashmap_client.cpp"
	HashmapServerInterface hsi;
															#line 20 "/flow_compile/src/hashmap_client.cpp"
	string key;
															#line 20 "/flow_compile/src/hashmap_client.cpp"
	string value;
															#line 182 "/flow_compile/tmp/hashmap_client.out.cpp"
};
// This generated class is to be used only via put()
															#line 20 "/flow_compile/src/hashmap_client.cpp"
class PutActor final : public Actor<Void>, public ActorCallback< PutActor, 0, HashmapData >, public FastAllocated<PutActor>, public PutActorState<PutActor> {
															#line 187 "/flow_compile/tmp/hashmap_client.out.cpp"
public:
	using FastAllocated<PutActor>::operator new;
	using FastAllocated<PutActor>::operator delete;
	static constexpr ActorIdentifier __actorIdentifier = UID(1587291593025679104UL, 12641746117622119424UL);
	ActiveActorHelper activeActorHelper;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdelete-non-virtual-dtor"
    void destroy() override {
        activeActorHelper.~ActiveActorHelper();
        static_cast<Actor<Void>*>(this)->~Actor();
        operator delete(this);
    }
#pragma clang diagnostic pop
friend struct ActorCallback< PutActor, 0, HashmapData >;
															#line 20 "/flow_compile/src/hashmap_client.cpp"
	PutActor(HashmapServerInterface const& hsi,string const& key,string const& value) 
															#line 204 "/flow_compile/tmp/hashmap_client.out.cpp"
		 : Actor<Void>(),
		   PutActorState<PutActor>(hsi, key, value),
		   activeActorHelper(__actorIdentifier)
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(7717282083008667136UL, 9439217302305690368UL);
		ActorExecutionContextHelper __helper(static_cast<PutActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		#ifdef ENABLE_SAMPLING
		this->lineage.setActorName("put");
		LineageScope _(&this->lineage);
		#endif
		this->a_body1();

	}
	void cancel() override
	{
		auto wait_state = this->actor_wait_state;
		this->actor_wait_state = -1;
		switch (wait_state) {
		case 1: this->a_callback_error((ActorCallback< PutActor, 0, HashmapData >*)0, actor_cancelled()); break;
		}

	}
};
} // namespace
															#line 20 "/flow_compile/src/hashmap_client.cpp"
[[nodiscard]] Future<Void> put( HashmapServerInterface const& hsi, string const& key, string const& value ) {
															#line 20 "/flow_compile/src/hashmap_client.cpp"
	return Future<Void>(new PutActor(hsi, key, value));
															#line 235 "/flow_compile/tmp/hashmap_client.out.cpp"
}

#line 26 "/flow_compile/src/hashmap_client.cpp"

															#line 240 "/flow_compile/tmp/hashmap_client.out.cpp"
namespace {
// This generated class is to be used only via get()
															#line 27 "/flow_compile/src/hashmap_client.cpp"
template <class GetActor>
															#line 27 "/flow_compile/src/hashmap_client.cpp"
class GetActorState {
															#line 247 "/flow_compile/tmp/hashmap_client.out.cpp"
public:
															#line 27 "/flow_compile/src/hashmap_client.cpp"
	GetActorState(HashmapServerInterface const& hsi,string const& key) 
															#line 27 "/flow_compile/src/hashmap_client.cpp"
															#line 27 "/flow_compile/src/hashmap_client.cpp"
		 : hsi(hsi),
															#line 27 "/flow_compile/src/hashmap_client.cpp"
		   key(key)
															#line 256 "/flow_compile/tmp/hashmap_client.out.cpp"
	{

	}
	~GetActorState() 
	{

	}
	int a_body1(int loopDepth=0) 
	{
		try {
															#line 28 "/flow_compile/src/hashmap_client.cpp"
			HashmapData data = HashmapData{key, ""};
															#line 29 "/flow_compile/src/hashmap_client.cpp"
			HashmapOperation op(data);
															#line 30 "/flow_compile/src/hashmap_client.cpp"
			hsi.get.send(op);
															#line 31 "/flow_compile/src/hashmap_client.cpp"
			StrictFuture<HashmapData> __when_expr_0 = hsi.get.getReply(op);
															#line 31 "/flow_compile/src/hashmap_client.cpp"
			if (static_cast<GetActor*>(this)->actor_wait_state < 0) return a_body1Catch1(actor_cancelled(), loopDepth);
															#line 277 "/flow_compile/tmp/hashmap_client.out.cpp"
			if (__when_expr_0.isReady()) { if (__when_expr_0.isError()) return a_body1Catch1(__when_expr_0.getError(), loopDepth); else return a_body1when1(__when_expr_0.get(), loopDepth); };
			static_cast<GetActor*>(this)->actor_wait_state = 1;
															#line 31 "/flow_compile/src/hashmap_client.cpp"
			__when_expr_0.addCallbackAndClear(static_cast<ActorCallback< GetActor, 0, HashmapData >*>(static_cast<GetActor*>(this)));
															#line 282 "/flow_compile/tmp/hashmap_client.out.cpp"
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
		this->~GetActorState();
		static_cast<GetActor*>(this)->sendErrorAndDelPromiseRef(error);
		loopDepth = 0;

		return loopDepth;
	}
	int a_body1cont1(HashmapData const& result,int loopDepth) 
	{
															#line 32 "/flow_compile/src/hashmap_client.cpp"
		if (!static_cast<GetActor*>(this)->SAV<string>::futures) { (void)(result.value); this->~GetActorState(); static_cast<GetActor*>(this)->destroy(); return 0; }
															#line 305 "/flow_compile/tmp/hashmap_client.out.cpp"
		new (&static_cast<GetActor*>(this)->SAV< string >::value()) string(result.value);
		this->~GetActorState();
		static_cast<GetActor*>(this)->finishSendAndDelPromiseRef();
		return 0;

		return loopDepth;
	}
	int a_body1cont1(HashmapData && result,int loopDepth) 
	{
															#line 32 "/flow_compile/src/hashmap_client.cpp"
		if (!static_cast<GetActor*>(this)->SAV<string>::futures) { (void)(result.value); this->~GetActorState(); static_cast<GetActor*>(this)->destroy(); return 0; }
															#line 317 "/flow_compile/tmp/hashmap_client.out.cpp"
		new (&static_cast<GetActor*>(this)->SAV< string >::value()) string(result.value);
		this->~GetActorState();
		static_cast<GetActor*>(this)->finishSendAndDelPromiseRef();
		return 0;

		return loopDepth;
	}
	int a_body1when1(HashmapData const& result,int loopDepth) 
	{
		loopDepth = a_body1cont1(result, loopDepth);

		return loopDepth;
	}
	int a_body1when1(HashmapData && result,int loopDepth) 
	{
		loopDepth = a_body1cont1(std::move(result), loopDepth);

		return loopDepth;
	}
	void a_exitChoose1() 
	{
		if (static_cast<GetActor*>(this)->actor_wait_state > 0) static_cast<GetActor*>(this)->actor_wait_state = 0;
		static_cast<GetActor*>(this)->ActorCallback< GetActor, 0, HashmapData >::remove();

	}
	void a_callback_fire(ActorCallback< GetActor, 0, HashmapData >*,HashmapData const& value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<GetActor*>(this)->activeActorHelper.actorID, __identifier);
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
	void a_callback_fire(ActorCallback< GetActor, 0, HashmapData >*,HashmapData && value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<GetActor*>(this)->activeActorHelper.actorID, __identifier);
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
	void a_callback_error(ActorCallback< GetActor, 0, HashmapData >*,Error err) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(5187328219730237440UL, 3113259079076601088UL);
		ActorExecutionContextHelper __helper(static_cast<GetActor*>(this)->activeActorHelper.actorID, __identifier);
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
															#line 27 "/flow_compile/src/hashmap_client.cpp"
	HashmapServerInterface hsi;
															#line 27 "/flow_compile/src/hashmap_client.cpp"
	string key;
															#line 398 "/flow_compile/tmp/hashmap_client.out.cpp"
};
// This generated class is to be used only via get()
															#line 27 "/flow_compile/src/hashmap_client.cpp"
class GetActor final : public Actor<string>, public ActorCallback< GetActor, 0, HashmapData >, public FastAllocated<GetActor>, public GetActorState<GetActor> {
															#line 403 "/flow_compile/tmp/hashmap_client.out.cpp"
public:
	using FastAllocated<GetActor>::operator new;
	using FastAllocated<GetActor>::operator delete;
	static constexpr ActorIdentifier __actorIdentifier = UID(1149519177414901760UL, 14033563831123639808UL);
	ActiveActorHelper activeActorHelper;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdelete-non-virtual-dtor"
    void destroy() override {
        activeActorHelper.~ActiveActorHelper();
        static_cast<Actor<string>*>(this)->~Actor();
        operator delete(this);
    }
#pragma clang diagnostic pop
friend struct ActorCallback< GetActor, 0, HashmapData >;
															#line 27 "/flow_compile/src/hashmap_client.cpp"
	GetActor(HashmapServerInterface const& hsi,string const& key) 
															#line 420 "/flow_compile/tmp/hashmap_client.out.cpp"
		 : Actor<string>(),
		   GetActorState<GetActor>(hsi, key),
		   activeActorHelper(__actorIdentifier)
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(13305627610698362112UL, 12413557174276224768UL);
		ActorExecutionContextHelper __helper(static_cast<GetActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		#ifdef ENABLE_SAMPLING
		this->lineage.setActorName("get");
		LineageScope _(&this->lineage);
		#endif
		this->a_body1();

	}
	void cancel() override
	{
		auto wait_state = this->actor_wait_state;
		this->actor_wait_state = -1;
		switch (wait_state) {
		case 1: this->a_callback_error((ActorCallback< GetActor, 0, HashmapData >*)0, actor_cancelled()); break;
		}

	}
};
} // namespace
															#line 27 "/flow_compile/src/hashmap_client.cpp"
[[nodiscard]] Future<string> get( HashmapServerInterface const& hsi, string const& key ) {
															#line 27 "/flow_compile/src/hashmap_client.cpp"
	return Future<string>(new GetActor(hsi, key));
															#line 451 "/flow_compile/tmp/hashmap_client.out.cpp"
}

#line 34 "/flow_compile/src/hashmap_client.cpp"

															#line 456 "/flow_compile/tmp/hashmap_client.out.cpp"
namespace {
// This generated class is to be used only via deleteKey()
															#line 35 "/flow_compile/src/hashmap_client.cpp"
template <class DeleteKeyActor>
															#line 35 "/flow_compile/src/hashmap_client.cpp"
class DeleteKeyActorState {
															#line 463 "/flow_compile/tmp/hashmap_client.out.cpp"
public:
															#line 35 "/flow_compile/src/hashmap_client.cpp"
	DeleteKeyActorState(HashmapServerInterface const& hsi,string const& key) 
															#line 35 "/flow_compile/src/hashmap_client.cpp"
															#line 35 "/flow_compile/src/hashmap_client.cpp"
		 : hsi(hsi),
															#line 35 "/flow_compile/src/hashmap_client.cpp"
		   key(key)
															#line 472 "/flow_compile/tmp/hashmap_client.out.cpp"
	{

	}
	~DeleteKeyActorState() 
	{

	}
	int a_body1(int loopDepth=0) 
	{
		try {
															#line 36 "/flow_compile/src/hashmap_client.cpp"
			HashmapData data = HashmapData{key, ""};
															#line 37 "/flow_compile/src/hashmap_client.cpp"
			HashmapOperation op(data);
															#line 38 "/flow_compile/src/hashmap_client.cpp"
			StrictFuture<HashmapData> __when_expr_0 = hsi.deleteKey.getReply(op);
															#line 38 "/flow_compile/src/hashmap_client.cpp"
			if (static_cast<DeleteKeyActor*>(this)->actor_wait_state < 0) return a_body1Catch1(actor_cancelled(), loopDepth);
															#line 491 "/flow_compile/tmp/hashmap_client.out.cpp"
			if (__when_expr_0.isReady()) { if (__when_expr_0.isError()) return a_body1Catch1(__when_expr_0.getError(), loopDepth); else return a_body1when1(__when_expr_0.get(), loopDepth); };
			static_cast<DeleteKeyActor*>(this)->actor_wait_state = 1;
															#line 38 "/flow_compile/src/hashmap_client.cpp"
			__when_expr_0.addCallbackAndClear(static_cast<ActorCallback< DeleteKeyActor, 0, HashmapData >*>(static_cast<DeleteKeyActor*>(this)));
															#line 496 "/flow_compile/tmp/hashmap_client.out.cpp"
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
		this->~DeleteKeyActorState();
		static_cast<DeleteKeyActor*>(this)->sendErrorAndDelPromiseRef(error);
		loopDepth = 0;

		return loopDepth;
	}
	int a_body1cont1(HashmapData const& result,int loopDepth) 
	{
															#line 39 "/flow_compile/src/hashmap_client.cpp"
		if (!static_cast<DeleteKeyActor*>(this)->SAV<Void>::futures) { (void)(Void()); this->~DeleteKeyActorState(); static_cast<DeleteKeyActor*>(this)->destroy(); return 0; }
															#line 519 "/flow_compile/tmp/hashmap_client.out.cpp"
		new (&static_cast<DeleteKeyActor*>(this)->SAV< Void >::value()) Void(Void());
		this->~DeleteKeyActorState();
		static_cast<DeleteKeyActor*>(this)->finishSendAndDelPromiseRef();
		return 0;

		return loopDepth;
	}
	int a_body1cont1(HashmapData && result,int loopDepth) 
	{
															#line 39 "/flow_compile/src/hashmap_client.cpp"
		if (!static_cast<DeleteKeyActor*>(this)->SAV<Void>::futures) { (void)(Void()); this->~DeleteKeyActorState(); static_cast<DeleteKeyActor*>(this)->destroy(); return 0; }
															#line 531 "/flow_compile/tmp/hashmap_client.out.cpp"
		new (&static_cast<DeleteKeyActor*>(this)->SAV< Void >::value()) Void(Void());
		this->~DeleteKeyActorState();
		static_cast<DeleteKeyActor*>(this)->finishSendAndDelPromiseRef();
		return 0;

		return loopDepth;
	}
	int a_body1when1(HashmapData const& result,int loopDepth) 
	{
		loopDepth = a_body1cont1(result, loopDepth);

		return loopDepth;
	}
	int a_body1when1(HashmapData && result,int loopDepth) 
	{
		loopDepth = a_body1cont1(std::move(result), loopDepth);

		return loopDepth;
	}
	void a_exitChoose1() 
	{
		if (static_cast<DeleteKeyActor*>(this)->actor_wait_state > 0) static_cast<DeleteKeyActor*>(this)->actor_wait_state = 0;
		static_cast<DeleteKeyActor*>(this)->ActorCallback< DeleteKeyActor, 0, HashmapData >::remove();

	}
	void a_callback_fire(ActorCallback< DeleteKeyActor, 0, HashmapData >*,HashmapData const& value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<DeleteKeyActor*>(this)->activeActorHelper.actorID, __identifier);
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
	void a_callback_fire(ActorCallback< DeleteKeyActor, 0, HashmapData >*,HashmapData && value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<DeleteKeyActor*>(this)->activeActorHelper.actorID, __identifier);
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
	void a_callback_error(ActorCallback< DeleteKeyActor, 0, HashmapData >*,Error err) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(5187328219730237440UL, 3113259079076601088UL);
		ActorExecutionContextHelper __helper(static_cast<DeleteKeyActor*>(this)->activeActorHelper.actorID, __identifier);
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
															#line 35 "/flow_compile/src/hashmap_client.cpp"
	HashmapServerInterface hsi;
															#line 35 "/flow_compile/src/hashmap_client.cpp"
	string key;
															#line 612 "/flow_compile/tmp/hashmap_client.out.cpp"
};
// This generated class is to be used only via deleteKey()
															#line 35 "/flow_compile/src/hashmap_client.cpp"
class DeleteKeyActor final : public Actor<Void>, public ActorCallback< DeleteKeyActor, 0, HashmapData >, public FastAllocated<DeleteKeyActor>, public DeleteKeyActorState<DeleteKeyActor> {
															#line 617 "/flow_compile/tmp/hashmap_client.out.cpp"
public:
	using FastAllocated<DeleteKeyActor>::operator new;
	using FastAllocated<DeleteKeyActor>::operator delete;
	static constexpr ActorIdentifier __actorIdentifier = UID(12678805169543069696UL, 14284326074022389760UL);
	ActiveActorHelper activeActorHelper;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdelete-non-virtual-dtor"
    void destroy() override {
        activeActorHelper.~ActiveActorHelper();
        static_cast<Actor<Void>*>(this)->~Actor();
        operator delete(this);
    }
#pragma clang diagnostic pop
friend struct ActorCallback< DeleteKeyActor, 0, HashmapData >;
															#line 35 "/flow_compile/src/hashmap_client.cpp"
	DeleteKeyActor(HashmapServerInterface const& hsi,string const& key) 
															#line 634 "/flow_compile/tmp/hashmap_client.out.cpp"
		 : Actor<Void>(),
		   DeleteKeyActorState<DeleteKeyActor>(hsi, key),
		   activeActorHelper(__actorIdentifier)
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(13987981464443325696UL, 7664667454414941952UL);
		ActorExecutionContextHelper __helper(static_cast<DeleteKeyActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		#ifdef ENABLE_SAMPLING
		this->lineage.setActorName("deleteKey");
		LineageScope _(&this->lineage);
		#endif
		this->a_body1();

	}
	void cancel() override
	{
		auto wait_state = this->actor_wait_state;
		this->actor_wait_state = -1;
		switch (wait_state) {
		case 1: this->a_callback_error((ActorCallback< DeleteKeyActor, 0, HashmapData >*)0, actor_cancelled()); break;
		}

	}
};
} // namespace
															#line 35 "/flow_compile/src/hashmap_client.cpp"
[[nodiscard]] Future<Void> deleteKey( HashmapServerInterface const& hsi, string const& key ) {
															#line 35 "/flow_compile/src/hashmap_client.cpp"
	return Future<Void>(new DeleteKeyActor(hsi, key));
															#line 665 "/flow_compile/tmp/hashmap_client.out.cpp"
}

#line 41 "/flow_compile/src/hashmap_client.cpp"

															#line 670 "/flow_compile/tmp/hashmap_client.out.cpp"
namespace {
// This generated class is to be used only via run_client()
															#line 42 "/flow_compile/src/hashmap_client.cpp"
template <class Run_clientActor>
															#line 42 "/flow_compile/src/hashmap_client.cpp"
class Run_clientActorState {
															#line 677 "/flow_compile/tmp/hashmap_client.out.cpp"
public:
															#line 42 "/flow_compile/src/hashmap_client.cpp"
	Run_clientActorState() 
															#line 42 "/flow_compile/src/hashmap_client.cpp"
	{
															#line 683 "/flow_compile/tmp/hashmap_client.out.cpp"

	}
	~Run_clientActorState() 
	{

	}
	int a_body1(int loopDepth=0) 
	{
		try {
			try {
															#line 44 "/flow_compile/src/hashmap_client.cpp"
				platformInit();
															#line 45 "/flow_compile/src/hashmap_client.cpp"
				g_network = newNet2(TLSConfig(), false, true);
															#line 46 "/flow_compile/src/hashmap_client.cpp"
				FlowTransport::createInstance(1, 0, WLTOKEN_COUNT_IN_TUTORIAL);
															#line 47 "/flow_compile/src/hashmap_client.cpp"
				serverAddress = NetworkAddress::parse("127.0.0.1:7650");
															#line 48 "/flow_compile/src/hashmap_client.cpp"
				hsi = HashmapServerInterface();
															#line 49 "/flow_compile/src/hashmap_client.cpp"
				hsi.getInterface = RequestStream<HashmapInterfaceRequest>(Endpoint::wellKnown({ serverAddress }, WLTOKEN_ECHO_SERVER));
															#line 50 "/flow_compile/src/hashmap_client.cpp"
				StrictFuture<HashmapServerInterface> __when_expr_0 = hsi.getInterface.getReply(HashmapInterfaceRequest());
															#line 50 "/flow_compile/src/hashmap_client.cpp"
				if (static_cast<Run_clientActor*>(this)->actor_wait_state < 0) return a_body1Catch2(actor_cancelled(), loopDepth);
															#line 710 "/flow_compile/tmp/hashmap_client.out.cpp"
				if (__when_expr_0.isReady()) { if (__when_expr_0.isError()) return a_body1Catch2(__when_expr_0.getError(), loopDepth); else return a_body1when1(__when_expr_0.get(), loopDepth); };
				static_cast<Run_clientActor*>(this)->actor_wait_state = 1;
															#line 50 "/flow_compile/src/hashmap_client.cpp"
				__when_expr_0.addCallbackAndClear(static_cast<ActorCallback< Run_clientActor, 0, HashmapServerInterface >*>(static_cast<Run_clientActor*>(this)));
															#line 715 "/flow_compile/tmp/hashmap_client.out.cpp"
				loopDepth = 0;
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
		this->~Run_clientActorState();
		static_cast<Run_clientActor*>(this)->sendErrorAndDelPromiseRef(error);
		loopDepth = 0;

		return loopDepth;
	}
	int a_body1cont1(int loopDepth) 
	{
															#line 74 "/flow_compile/src/hashmap_client.cpp"
		if (!static_cast<Run_clientActor*>(this)->SAV<Void>::futures) { (void)(Void()); this->~Run_clientActorState(); static_cast<Run_clientActor*>(this)->destroy(); return 0; }
															#line 744 "/flow_compile/tmp/hashmap_client.out.cpp"
		new (&static_cast<Run_clientActor*>(this)->SAV< Void >::value()) Void(Void());
		this->~Run_clientActorState();
		static_cast<Run_clientActor*>(this)->finishSendAndDelPromiseRef();
		return 0;

		return loopDepth;
	}
	int a_body1Catch2(const Error& e,int loopDepth=0) 
	{
		try {
															#line 71 "/flow_compile/src/hashmap_client.cpp"
			std::cerr<<e.name()<<"\n"<<e.what()<<"\n";
															#line 72 "/flow_compile/src/hashmap_client.cpp"
			return a_body1Catch1(e, loopDepth);
															#line 759 "/flow_compile/tmp/hashmap_client.out.cpp"
		}
		catch (Error& error) {
			loopDepth = a_body1Catch1(error, loopDepth);
		} catch (...) {
			loopDepth = a_body1Catch1(unknown_error(), loopDepth);
		}

		return loopDepth;
	}
	int a_body1cont2(HashmapServerInterface const& s,int loopDepth) 
	{
															#line 51 "/flow_compile/src/hashmap_client.cpp"
		hsi = s;
															#line 53 "/flow_compile/src/hashmap_client.cpp"
		op = std::string();
															#line 54 "/flow_compile/src/hashmap_client.cpp"
		key = std::string();
															#line 55 "/flow_compile/src/hashmap_client.cpp"
		value = std::string();
															#line 56 "/flow_compile/src/hashmap_client.cpp"
		;
															#line 781 "/flow_compile/tmp/hashmap_client.out.cpp"
		loopDepth = a_body1cont2loopHead1(loopDepth);

		return loopDepth;
	}
	int a_body1cont2(HashmapServerInterface && s,int loopDepth) 
	{
															#line 51 "/flow_compile/src/hashmap_client.cpp"
		hsi = s;
															#line 53 "/flow_compile/src/hashmap_client.cpp"
		op = std::string();
															#line 54 "/flow_compile/src/hashmap_client.cpp"
		key = std::string();
															#line 55 "/flow_compile/src/hashmap_client.cpp"
		value = std::string();
															#line 56 "/flow_compile/src/hashmap_client.cpp"
		;
															#line 798 "/flow_compile/tmp/hashmap_client.out.cpp"
		loopDepth = a_body1cont2loopHead1(loopDepth);

		return loopDepth;
	}
	int a_body1when1(HashmapServerInterface const& s,int loopDepth) 
	{
		loopDepth = a_body1cont2(s, loopDepth);

		return loopDepth;
	}
	int a_body1when1(HashmapServerInterface && s,int loopDepth) 
	{
		loopDepth = a_body1cont2(std::move(s), loopDepth);

		return loopDepth;
	}
	void a_exitChoose1() 
	{
		if (static_cast<Run_clientActor*>(this)->actor_wait_state > 0) static_cast<Run_clientActor*>(this)->actor_wait_state = 0;
		static_cast<Run_clientActor*>(this)->ActorCallback< Run_clientActor, 0, HashmapServerInterface >::remove();

	}
	void a_callback_fire(ActorCallback< Run_clientActor, 0, HashmapServerInterface >*,HashmapServerInterface const& value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<Run_clientActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1when1(value, 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	void a_callback_fire(ActorCallback< Run_clientActor, 0, HashmapServerInterface >*,HashmapServerInterface && value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<Run_clientActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1when1(std::move(value), 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	void a_callback_error(ActorCallback< Run_clientActor, 0, HashmapServerInterface >*,Error err) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(5187328219730237440UL, 3113259079076601088UL);
		ActorExecutionContextHelper __helper(static_cast<Run_clientActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1Catch2(err, 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	int a_body1cont3(int loopDepth) 
	{
		loopDepth = a_body1cont4(loopDepth);

		return loopDepth;
	}
	int a_body1cont2loopHead1(int loopDepth) 
	{
		int oldLoopDepth = ++loopDepth;
		while (loopDepth == oldLoopDepth) loopDepth = a_body1cont2loopBody1(loopDepth);

		return loopDepth;
	}
	int a_body1cont2loopBody1(int loopDepth) 
	{
															#line 56 "/flow_compile/src/hashmap_client.cpp"
		if (!(std::cin>>op>>key))
															#line 889 "/flow_compile/tmp/hashmap_client.out.cpp"
		{
			return a_body1cont2break1(loopDepth==0?0:loopDepth-1); // break
		}
															#line 57 "/flow_compile/src/hashmap_client.cpp"
		if (op == "put")
															#line 895 "/flow_compile/tmp/hashmap_client.out.cpp"
		{
															#line 58 "/flow_compile/src/hashmap_client.cpp"
			std::cin>>value;
															#line 899 "/flow_compile/tmp/hashmap_client.out.cpp"
		}
															#line 60 "/flow_compile/src/hashmap_client.cpp"
		if (op == "put")
															#line 903 "/flow_compile/tmp/hashmap_client.out.cpp"
		{
															#line 61 "/flow_compile/src/hashmap_client.cpp"
			StrictFuture<Void> __when_expr_1 = put(hsi, key, value);
															#line 61 "/flow_compile/src/hashmap_client.cpp"
			if (static_cast<Run_clientActor*>(this)->actor_wait_state < 0) return a_body1Catch2(actor_cancelled(), std::max(0, loopDepth - 1));
															#line 909 "/flow_compile/tmp/hashmap_client.out.cpp"
			if (__when_expr_1.isReady()) { if (__when_expr_1.isError()) return a_body1Catch2(__when_expr_1.getError(), std::max(0, loopDepth - 1)); else return a_body1cont2loopBody1when1(__when_expr_1.get(), loopDepth); };
			static_cast<Run_clientActor*>(this)->actor_wait_state = 2;
															#line 61 "/flow_compile/src/hashmap_client.cpp"
			__when_expr_1.addCallbackAndClear(static_cast<ActorCallback< Run_clientActor, 1, Void >*>(static_cast<Run_clientActor*>(this)));
															#line 914 "/flow_compile/tmp/hashmap_client.out.cpp"
			loopDepth = 0;
		}
		else
		{
															#line 62 "/flow_compile/src/hashmap_client.cpp"
			if (op == "delete")
															#line 921 "/flow_compile/tmp/hashmap_client.out.cpp"
			{
															#line 63 "/flow_compile/src/hashmap_client.cpp"
				StrictFuture<Void> __when_expr_2 = deleteKey(hsi, key);
															#line 63 "/flow_compile/src/hashmap_client.cpp"
				if (static_cast<Run_clientActor*>(this)->actor_wait_state < 0) return a_body1Catch2(actor_cancelled(), std::max(0, loopDepth - 1));
															#line 927 "/flow_compile/tmp/hashmap_client.out.cpp"
				if (__when_expr_2.isReady()) { if (__when_expr_2.isError()) return a_body1Catch2(__when_expr_2.getError(), std::max(0, loopDepth - 1)); else return a_body1cont2loopBody1when2(__when_expr_2.get(), loopDepth); };
				static_cast<Run_clientActor*>(this)->actor_wait_state = 3;
															#line 63 "/flow_compile/src/hashmap_client.cpp"
				__when_expr_2.addCallbackAndClear(static_cast<ActorCallback< Run_clientActor, 2, Void >*>(static_cast<Run_clientActor*>(this)));
															#line 932 "/flow_compile/tmp/hashmap_client.out.cpp"
				loopDepth = 0;
			}
			else
			{
															#line 64 "/flow_compile/src/hashmap_client.cpp"
				if (op == "get")
															#line 939 "/flow_compile/tmp/hashmap_client.out.cpp"
				{
															#line 65 "/flow_compile/src/hashmap_client.cpp"
					StrictFuture<std::string> __when_expr_3 = get(hsi, key);
															#line 65 "/flow_compile/src/hashmap_client.cpp"
					if (static_cast<Run_clientActor*>(this)->actor_wait_state < 0) return a_body1Catch2(actor_cancelled(), std::max(0, loopDepth - 1));
															#line 945 "/flow_compile/tmp/hashmap_client.out.cpp"
					if (__when_expr_3.isReady()) { if (__when_expr_3.isError()) return a_body1Catch2(__when_expr_3.getError(), std::max(0, loopDepth - 1)); else return a_body1cont2loopBody1when3(__when_expr_3.get(), loopDepth); };
					static_cast<Run_clientActor*>(this)->actor_wait_state = 4;
															#line 65 "/flow_compile/src/hashmap_client.cpp"
					__when_expr_3.addCallbackAndClear(static_cast<ActorCallback< Run_clientActor, 3, std::string >*>(static_cast<Run_clientActor*>(this)));
															#line 950 "/flow_compile/tmp/hashmap_client.out.cpp"
					loopDepth = 0;
				}
				else
				{
					loopDepth = a_body1cont2loopBody1cont7(loopDepth);
				}
			}
		}

		return loopDepth;
	}
	int a_body1cont2break1(int loopDepth) 
	{
		try {
			return a_body1cont3(loopDepth);
		}
		catch (Error& error) {
			loopDepth = a_body1Catch2(error, loopDepth);
		} catch (...) {
			loopDepth = a_body1Catch2(unknown_error(), loopDepth);
		}

		return loopDepth;
	}
	int a_body1cont2loopBody1cont1(int loopDepth) 
	{
		if (loopDepth == 0) return a_body1cont2loopHead1(0);

		return loopDepth;
	}
	int a_body1cont2loopBody1cont4(Void const& _,int loopDepth) 
	{
		loopDepth = a_body1cont2loopBody1cont1(loopDepth);

		return loopDepth;
	}
	int a_body1cont2loopBody1cont4(Void && _,int loopDepth) 
	{
		loopDepth = a_body1cont2loopBody1cont1(loopDepth);

		return loopDepth;
	}
	int a_body1cont2loopBody1when1(Void const& _,int loopDepth) 
	{
		loopDepth = a_body1cont2loopBody1cont4(_, loopDepth);

		return loopDepth;
	}
	int a_body1cont2loopBody1when1(Void && _,int loopDepth) 
	{
		loopDepth = a_body1cont2loopBody1cont4(std::move(_), loopDepth);

		return loopDepth;
	}
	void a_exitChoose2() 
	{
		if (static_cast<Run_clientActor*>(this)->actor_wait_state > 0) static_cast<Run_clientActor*>(this)->actor_wait_state = 0;
		static_cast<Run_clientActor*>(this)->ActorCallback< Run_clientActor, 1, Void >::remove();

	}
	void a_callback_fire(ActorCallback< Run_clientActor, 1, Void >*,Void const& value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<Run_clientActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose2();
		try {
			a_body1cont2loopBody1when1(value, 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	void a_callback_fire(ActorCallback< Run_clientActor, 1, Void >*,Void && value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<Run_clientActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose2();
		try {
			a_body1cont2loopBody1when1(std::move(value), 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	void a_callback_error(ActorCallback< Run_clientActor, 1, Void >*,Error err) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(5187328219730237440UL, 3113259079076601088UL);
		ActorExecutionContextHelper __helper(static_cast<Run_clientActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose2();
		try {
			a_body1Catch2(err, 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	int a_body1cont2loopBody1cont5(int loopDepth) 
	{
		loopDepth = a_body1cont2loopBody1cont1(loopDepth);

		return loopDepth;
	}
	int a_body1cont2loopBody1cont6(Void const& _,int loopDepth) 
	{
		loopDepth = a_body1cont2loopBody1cont5(loopDepth);

		return loopDepth;
	}
	int a_body1cont2loopBody1cont6(Void && _,int loopDepth) 
	{
		loopDepth = a_body1cont2loopBody1cont5(loopDepth);

		return loopDepth;
	}
	int a_body1cont2loopBody1when2(Void const& _,int loopDepth) 
	{
		loopDepth = a_body1cont2loopBody1cont6(_, loopDepth);

		return loopDepth;
	}
	int a_body1cont2loopBody1when2(Void && _,int loopDepth) 
	{
		loopDepth = a_body1cont2loopBody1cont6(std::move(_), loopDepth);

		return loopDepth;
	}
	void a_exitChoose3() 
	{
		if (static_cast<Run_clientActor*>(this)->actor_wait_state > 0) static_cast<Run_clientActor*>(this)->actor_wait_state = 0;
		static_cast<Run_clientActor*>(this)->ActorCallback< Run_clientActor, 2, Void >::remove();

	}
	void a_callback_fire(ActorCallback< Run_clientActor, 2, Void >*,Void const& value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<Run_clientActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose3();
		try {
			a_body1cont2loopBody1when2(value, 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	void a_callback_fire(ActorCallback< Run_clientActor, 2, Void >*,Void && value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<Run_clientActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose3();
		try {
			a_body1cont2loopBody1when2(std::move(value), 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	void a_callback_error(ActorCallback< Run_clientActor, 2, Void >*,Error err) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(5187328219730237440UL, 3113259079076601088UL);
		ActorExecutionContextHelper __helper(static_cast<Run_clientActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose3();
		try {
			a_body1Catch2(err, 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	int a_body1cont2loopBody1cont7(int loopDepth) 
	{
		loopDepth = a_body1cont2loopBody1cont5(loopDepth);

		return loopDepth;
	}
	int a_body1cont2loopBody1cont8(std::string const& result,int loopDepth) 
	{
															#line 66 "/flow_compile/src/hashmap_client.cpp"
		std::cout<<result<<std::endl;
															#line 1159 "/flow_compile/tmp/hashmap_client.out.cpp"
		loopDepth = a_body1cont2loopBody1cont7(loopDepth);

		return loopDepth;
	}
	int a_body1cont2loopBody1cont8(std::string && result,int loopDepth) 
	{
															#line 66 "/flow_compile/src/hashmap_client.cpp"
		std::cout<<result<<std::endl;
															#line 1168 "/flow_compile/tmp/hashmap_client.out.cpp"
		loopDepth = a_body1cont2loopBody1cont7(loopDepth);

		return loopDepth;
	}
	int a_body1cont2loopBody1when3(std::string const& result,int loopDepth) 
	{
		loopDepth = a_body1cont2loopBody1cont8(result, loopDepth);

		return loopDepth;
	}
	int a_body1cont2loopBody1when3(std::string && result,int loopDepth) 
	{
		loopDepth = a_body1cont2loopBody1cont8(std::move(result), loopDepth);

		return loopDepth;
	}
	void a_exitChoose4() 
	{
		if (static_cast<Run_clientActor*>(this)->actor_wait_state > 0) static_cast<Run_clientActor*>(this)->actor_wait_state = 0;
		static_cast<Run_clientActor*>(this)->ActorCallback< Run_clientActor, 3, std::string >::remove();

	}
	void a_callback_fire(ActorCallback< Run_clientActor, 3, std::string >*,std::string const& value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<Run_clientActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose4();
		try {
			a_body1cont2loopBody1when3(value, 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	void a_callback_fire(ActorCallback< Run_clientActor, 3, std::string >*,std::string && value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<Run_clientActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose4();
		try {
			a_body1cont2loopBody1when3(std::move(value), 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	void a_callback_error(ActorCallback< Run_clientActor, 3, std::string >*,Error err) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(5187328219730237440UL, 3113259079076601088UL);
		ActorExecutionContextHelper __helper(static_cast<Run_clientActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose4();
		try {
			a_body1Catch2(err, 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

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
															#line 48 "/flow_compile/src/hashmap_client.cpp"
	HashmapServerInterface hsi;
															#line 53 "/flow_compile/src/hashmap_client.cpp"
	std::string op;
															#line 54 "/flow_compile/src/hashmap_client.cpp"
	std::string key;
															#line 55 "/flow_compile/src/hashmap_client.cpp"
	std::string value;
															#line 1263 "/flow_compile/tmp/hashmap_client.out.cpp"
};
// This generated class is to be used only via run_client()
															#line 42 "/flow_compile/src/hashmap_client.cpp"
class Run_clientActor final : public Actor<Void>, public ActorCallback< Run_clientActor, 0, HashmapServerInterface >, public ActorCallback< Run_clientActor, 1, Void >, public ActorCallback< Run_clientActor, 2, Void >, public ActorCallback< Run_clientActor, 3, std::string >, public FastAllocated<Run_clientActor>, public Run_clientActorState<Run_clientActor> {
															#line 1268 "/flow_compile/tmp/hashmap_client.out.cpp"
public:
	using FastAllocated<Run_clientActor>::operator new;
	using FastAllocated<Run_clientActor>::operator delete;
	static constexpr ActorIdentifier __actorIdentifier = UID(2222378724218360832UL, 11338677126126571776UL);
	ActiveActorHelper activeActorHelper;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdelete-non-virtual-dtor"
    void destroy() override {
        activeActorHelper.~ActiveActorHelper();
        static_cast<Actor<Void>*>(this)->~Actor();
        operator delete(this);
    }
#pragma clang diagnostic pop
friend struct ActorCallback< Run_clientActor, 0, HashmapServerInterface >;
friend struct ActorCallback< Run_clientActor, 1, Void >;
friend struct ActorCallback< Run_clientActor, 2, Void >;
friend struct ActorCallback< Run_clientActor, 3, std::string >;
															#line 42 "/flow_compile/src/hashmap_client.cpp"
	Run_clientActor() 
															#line 1288 "/flow_compile/tmp/hashmap_client.out.cpp"
		 : Actor<Void>(),
		   Run_clientActorState<Run_clientActor>(),
		   activeActorHelper(__actorIdentifier)
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(10063018889782467072UL, 14477036864589948928UL);
		ActorExecutionContextHelper __helper(static_cast<Run_clientActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		#ifdef ENABLE_SAMPLING
		this->lineage.setActorName("run_client");
		LineageScope _(&this->lineage);
		#endif
		this->a_body1();

	}
	void cancel() override
	{
		auto wait_state = this->actor_wait_state;
		this->actor_wait_state = -1;
		switch (wait_state) {
		case 1: this->a_callback_error((ActorCallback< Run_clientActor, 0, HashmapServerInterface >*)0, actor_cancelled()); break;
		case 2: this->a_callback_error((ActorCallback< Run_clientActor, 1, Void >*)0, actor_cancelled()); break;
		case 3: this->a_callback_error((ActorCallback< Run_clientActor, 2, Void >*)0, actor_cancelled()); break;
		case 4: this->a_callback_error((ActorCallback< Run_clientActor, 3, std::string >*)0, actor_cancelled()); break;
		}

	}
};
} // namespace
															#line 42 "/flow_compile/src/hashmap_client.cpp"
[[nodiscard]] Future<Void> run_client(  ) {
															#line 42 "/flow_compile/src/hashmap_client.cpp"
	return Future<Void>(new Run_clientActor());
															#line 1322 "/flow_compile/tmp/hashmap_client.out.cpp"
}

#line 76 "/flow_compile/src/hashmap_client.cpp"





int main() {
    auto f = stopAfter(run_client());
    g_network->run();


}