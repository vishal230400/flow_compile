#define POST_ACTOR_COMPILER 1
#line 2 "/flow_compile/src/hashmap_server.cpp"

// #include <foundationdb/fdb_c.h>

#include "hashmap.h"

// #include "flow/actorcompiler.h" // has to be last include

#include <vector>
#include <iostream>
#include <cstdio>
#include <map>
#include <fstream>
#include <string>
#include <unordered_map>
#include <thread>

// using namespace std;
using std::vector, std::pair, std::string;

															#line 22 "/flow_compile/tmp/hashmap_server.out.cpp"
namespace {
// This generated class is to be used only via serveHashmapServerInterface()
															#line 20 "/flow_compile/src/hashmap_server.cpp"
template <class ServeHashmapServerInterfaceActor>
															#line 20 "/flow_compile/src/hashmap_server.cpp"
class ServeHashmapServerInterfaceActorState {
															#line 29 "/flow_compile/tmp/hashmap_server.out.cpp"
public:
															#line 20 "/flow_compile/src/hashmap_server.cpp"
	ServeHashmapServerInterfaceActorState() 
															#line 20 "/flow_compile/src/hashmap_server.cpp"
	{
															#line 35 "/flow_compile/tmp/hashmap_server.out.cpp"

	}
	~ServeHashmapServerInterfaceActorState() 
	{

	}
	int a_body1(int loopDepth=0) 
	{
		try {
			try {
															#line 22 "/flow_compile/src/hashmap_server.cpp"
				platformInit();
															#line 23 "/flow_compile/src/hashmap_server.cpp"
				g_network = newNet2(TLSConfig(), false, true);
															#line 24 "/flow_compile/src/hashmap_server.cpp"
				FlowTransport::createInstance(0, 0, WLTOKEN_COUNT_IN_TUTORIAL);
															#line 25 "/flow_compile/src/hashmap_server.cpp"
				auto serverAddress = NetworkAddress::parse("0.0.0.0:7650");
															#line 26 "/flow_compile/src/hashmap_server.cpp"
				auto listenError = FlowTransport::transport().bind(serverAddress, serverAddress);
															#line 27 "/flow_compile/src/hashmap_server.cpp"
				if (listenError.isError())
															#line 58 "/flow_compile/tmp/hashmap_server.out.cpp"
				{
															#line 28 "/flow_compile/src/hashmap_server.cpp"
					listenError.get();
															#line 62 "/flow_compile/tmp/hashmap_server.out.cpp"
				}
															#line 30 "/flow_compile/src/hashmap_server.cpp"
				hsi = HashmapServerInterface();
															#line 31 "/flow_compile/src/hashmap_server.cpp"
				hashmap = std::unordered_map<string,string>();
															#line 32 "/flow_compile/src/hashmap_server.cpp"
				hsi.getInterface.makeWellKnownEndpoint(WLTOKEN_ECHO_SERVER,TaskPriority::DefaultEndpoint);
															#line 33 "/flow_compile/src/hashmap_server.cpp"
				;
															#line 72 "/flow_compile/tmp/hashmap_server.out.cpp"
				loopDepth = a_body1loopHead1(loopDepth);
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
		this->~ServeHashmapServerInterfaceActorState();
		static_cast<ServeHashmapServerInterfaceActor*>(this)->sendErrorAndDelPromiseRef(error);
		loopDepth = 0;

		return loopDepth;
	}
	int a_body1Catch2(const Error& e,int loopDepth=0) 
	{
		try {
															#line 58 "/flow_compile/src/hashmap_server.cpp"
			std::cerr<<e.name()<<"\n"<<e.what()<<"\n";
															#line 59 "/flow_compile/src/hashmap_server.cpp"
			return a_body1Catch1(e, loopDepth);
															#line 104 "/flow_compile/tmp/hashmap_server.out.cpp"
		}
		catch (Error& error) {
			loopDepth = a_body1Catch1(error, loopDepth);
		} catch (...) {
			loopDepth = a_body1Catch1(unknown_error(), loopDepth);
		}

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
															#line 35 "/flow_compile/src/hashmap_server.cpp"
		FutureStream<HashmapInterfaceRequest> __when_expr_0 = hsi.getInterface.getFuture();
															#line 34 "/flow_compile/src/hashmap_server.cpp"
		if (static_cast<ServeHashmapServerInterfaceActor*>(this)->actor_wait_state < 0) return a_body1Catch2(actor_cancelled(), std::max(0, loopDepth - 1));
															#line 127 "/flow_compile/tmp/hashmap_server.out.cpp"
		if (__when_expr_0.isReady()) { if (__when_expr_0.isError()) return a_body1Catch2(__when_expr_0.getError(), std::max(0, loopDepth - 1)); else return a_body1loopBody1when1(__when_expr_0.pop(), loopDepth); };
															#line 38 "/flow_compile/src/hashmap_server.cpp"
		FutureStream<HashmapOperation> __when_expr_1 = hsi.put.getFuture();
															#line 131 "/flow_compile/tmp/hashmap_server.out.cpp"
		if (__when_expr_1.isReady()) { if (__when_expr_1.isError()) return a_body1Catch2(__when_expr_1.getError(), std::max(0, loopDepth - 1)); else return a_body1loopBody1when2(__when_expr_1.pop(), loopDepth); };
															#line 42 "/flow_compile/src/hashmap_server.cpp"
		FutureStream<HashmapOperation> __when_expr_2 = hsi.get.getFuture();
															#line 135 "/flow_compile/tmp/hashmap_server.out.cpp"
		if (__when_expr_2.isReady()) { if (__when_expr_2.isError()) return a_body1Catch2(__when_expr_2.getError(), std::max(0, loopDepth - 1)); else return a_body1loopBody1when3(__when_expr_2.pop(), loopDepth); };
															#line 48 "/flow_compile/src/hashmap_server.cpp"
		FutureStream<HashmapOperation> __when_expr_3 = hsi.deleteKey.getFuture();
															#line 139 "/flow_compile/tmp/hashmap_server.out.cpp"
		if (__when_expr_3.isReady()) { if (__when_expr_3.isError()) return a_body1Catch2(__when_expr_3.getError(), std::max(0, loopDepth - 1)); else return a_body1loopBody1when4(__when_expr_3.pop(), loopDepth); };
		static_cast<ServeHashmapServerInterfaceActor*>(this)->actor_wait_state = 1;
															#line 35 "/flow_compile/src/hashmap_server.cpp"
		__when_expr_0.addCallbackAndClear(static_cast<ActorSingleCallback< ServeHashmapServerInterfaceActor, 0, HashmapInterfaceRequest >*>(static_cast<ServeHashmapServerInterfaceActor*>(this)));
															#line 38 "/flow_compile/src/hashmap_server.cpp"
		__when_expr_1.addCallbackAndClear(static_cast<ActorSingleCallback< ServeHashmapServerInterfaceActor, 1, HashmapOperation >*>(static_cast<ServeHashmapServerInterfaceActor*>(this)));
															#line 42 "/flow_compile/src/hashmap_server.cpp"
		__when_expr_2.addCallbackAndClear(static_cast<ActorSingleCallback< ServeHashmapServerInterfaceActor, 2, HashmapOperation >*>(static_cast<ServeHashmapServerInterfaceActor*>(this)));
															#line 48 "/flow_compile/src/hashmap_server.cpp"
		__when_expr_3.addCallbackAndClear(static_cast<ActorSingleCallback< ServeHashmapServerInterfaceActor, 3, HashmapOperation >*>(static_cast<ServeHashmapServerInterfaceActor*>(this)));
															#line 150 "/flow_compile/tmp/hashmap_server.out.cpp"
		loopDepth = 0;

		return loopDepth;
	}
	int a_body1loopBody1cont1(int loopDepth) 
	{
		if (loopDepth == 0) return a_body1loopHead1(0);

		return loopDepth;
	}
	int a_body1loopBody1when1(HashmapInterfaceRequest const& x,int loopDepth) 
	{
															#line 36 "/flow_compile/src/hashmap_server.cpp"
		x.reply.send(hsi);
															#line 165 "/flow_compile/tmp/hashmap_server.out.cpp"
		loopDepth = a_body1loopBody1cont1(loopDepth);

		return loopDepth;
	}
	int a_body1loopBody1when1(HashmapInterfaceRequest && x,int loopDepth) 
	{
															#line 36 "/flow_compile/src/hashmap_server.cpp"
		x.reply.send(hsi);
															#line 174 "/flow_compile/tmp/hashmap_server.out.cpp"
		loopDepth = a_body1loopBody1cont1(loopDepth);

		return loopDepth;
	}
	int a_body1loopBody1when2(HashmapOperation const& x,int loopDepth) 
	{
															#line 39 "/flow_compile/src/hashmap_server.cpp"
		hashmap[x.data.key] = x.data.value;
															#line 40 "/flow_compile/src/hashmap_server.cpp"
		x.reply.send(x.data);
															#line 185 "/flow_compile/tmp/hashmap_server.out.cpp"
		loopDepth = a_body1loopBody1cont1(loopDepth);

		return loopDepth;
	}
	int a_body1loopBody1when2(HashmapOperation && x,int loopDepth) 
	{
															#line 39 "/flow_compile/src/hashmap_server.cpp"
		hashmap[x.data.key] = x.data.value;
															#line 40 "/flow_compile/src/hashmap_server.cpp"
		x.reply.send(x.data);
															#line 196 "/flow_compile/tmp/hashmap_server.out.cpp"
		loopDepth = a_body1loopBody1cont1(loopDepth);

		return loopDepth;
	}
	int a_body1loopBody1when3(HashmapOperation const& x,int loopDepth) 
	{
															#line 43 "/flow_compile/src/hashmap_server.cpp"
		HashmapData result;
															#line 44 "/flow_compile/src/hashmap_server.cpp"
		result.key = x.data.key;
															#line 45 "/flow_compile/src/hashmap_server.cpp"
		result.value = hashmap[x.data.key];
															#line 46 "/flow_compile/src/hashmap_server.cpp"
		x.reply.send(result);
															#line 211 "/flow_compile/tmp/hashmap_server.out.cpp"
		loopDepth = a_body1loopBody1cont1(loopDepth);

		return loopDepth;
	}
	int a_body1loopBody1when3(HashmapOperation && x,int loopDepth) 
	{
															#line 43 "/flow_compile/src/hashmap_server.cpp"
		HashmapData result;
															#line 44 "/flow_compile/src/hashmap_server.cpp"
		result.key = x.data.key;
															#line 45 "/flow_compile/src/hashmap_server.cpp"
		result.value = hashmap[x.data.key];
															#line 46 "/flow_compile/src/hashmap_server.cpp"
		x.reply.send(result);
															#line 226 "/flow_compile/tmp/hashmap_server.out.cpp"
		loopDepth = a_body1loopBody1cont1(loopDepth);

		return loopDepth;
	}
	int a_body1loopBody1when4(HashmapOperation const& x,int loopDepth) 
	{
															#line 49 "/flow_compile/src/hashmap_server.cpp"
		auto result = hashmap.find(x.data.key);
															#line 50 "/flow_compile/src/hashmap_server.cpp"
		if (result != hashmap.end())
															#line 237 "/flow_compile/tmp/hashmap_server.out.cpp"
		{
															#line 51 "/flow_compile/src/hashmap_server.cpp"
			hashmap.erase(result->first);
															#line 241 "/flow_compile/tmp/hashmap_server.out.cpp"
		}
															#line 53 "/flow_compile/src/hashmap_server.cpp"
		x.reply.send(x.data);
															#line 245 "/flow_compile/tmp/hashmap_server.out.cpp"
		loopDepth = a_body1loopBody1cont1(loopDepth);

		return loopDepth;
	}
	int a_body1loopBody1when4(HashmapOperation && x,int loopDepth) 
	{
															#line 49 "/flow_compile/src/hashmap_server.cpp"
		auto result = hashmap.find(x.data.key);
															#line 50 "/flow_compile/src/hashmap_server.cpp"
		if (result != hashmap.end())
															#line 256 "/flow_compile/tmp/hashmap_server.out.cpp"
		{
															#line 51 "/flow_compile/src/hashmap_server.cpp"
			hashmap.erase(result->first);
															#line 260 "/flow_compile/tmp/hashmap_server.out.cpp"
		}
															#line 53 "/flow_compile/src/hashmap_server.cpp"
		x.reply.send(x.data);
															#line 264 "/flow_compile/tmp/hashmap_server.out.cpp"
		loopDepth = a_body1loopBody1cont1(loopDepth);

		return loopDepth;
	}
	void a_exitChoose1() 
	{
		if (static_cast<ServeHashmapServerInterfaceActor*>(this)->actor_wait_state > 0) static_cast<ServeHashmapServerInterfaceActor*>(this)->actor_wait_state = 0;
		static_cast<ServeHashmapServerInterfaceActor*>(this)->ActorSingleCallback< ServeHashmapServerInterfaceActor, 0, HashmapInterfaceRequest >::remove();
		static_cast<ServeHashmapServerInterfaceActor*>(this)->ActorSingleCallback< ServeHashmapServerInterfaceActor, 1, HashmapOperation >::remove();
		static_cast<ServeHashmapServerInterfaceActor*>(this)->ActorSingleCallback< ServeHashmapServerInterfaceActor, 2, HashmapOperation >::remove();
		static_cast<ServeHashmapServerInterfaceActor*>(this)->ActorSingleCallback< ServeHashmapServerInterfaceActor, 3, HashmapOperation >::remove();

	}
	void a_callback_fire(ActorSingleCallback< ServeHashmapServerInterfaceActor, 0, HashmapInterfaceRequest >*,HashmapInterfaceRequest const& value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<ServeHashmapServerInterfaceActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1loopBody1when1(value, 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	void a_callback_fire(ActorSingleCallback< ServeHashmapServerInterfaceActor, 0, HashmapInterfaceRequest >*,HashmapInterfaceRequest && value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<ServeHashmapServerInterfaceActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1loopBody1when1(std::move(value), 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	void a_callback_error(ActorSingleCallback< ServeHashmapServerInterfaceActor, 0, HashmapInterfaceRequest >*,Error err) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(5187328219730237440UL, 3113259079076601088UL);
		ActorExecutionContextHelper __helper(static_cast<ServeHashmapServerInterfaceActor*>(this)->activeActorHelper.actorID, __identifier);
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
	void a_callback_fire(ActorSingleCallback< ServeHashmapServerInterfaceActor, 1, HashmapOperation >*,HashmapOperation const& value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<ServeHashmapServerInterfaceActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1loopBody1when2(value, 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	void a_callback_fire(ActorSingleCallback< ServeHashmapServerInterfaceActor, 1, HashmapOperation >*,HashmapOperation && value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<ServeHashmapServerInterfaceActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1loopBody1when2(std::move(value), 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	void a_callback_error(ActorSingleCallback< ServeHashmapServerInterfaceActor, 1, HashmapOperation >*,Error err) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(5187328219730237440UL, 3113259079076601088UL);
		ActorExecutionContextHelper __helper(static_cast<ServeHashmapServerInterfaceActor*>(this)->activeActorHelper.actorID, __identifier);
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
	void a_callback_fire(ActorSingleCallback< ServeHashmapServerInterfaceActor, 2, HashmapOperation >*,HashmapOperation const& value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<ServeHashmapServerInterfaceActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1loopBody1when3(value, 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	void a_callback_fire(ActorSingleCallback< ServeHashmapServerInterfaceActor, 2, HashmapOperation >*,HashmapOperation && value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<ServeHashmapServerInterfaceActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1loopBody1when3(std::move(value), 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	void a_callback_error(ActorSingleCallback< ServeHashmapServerInterfaceActor, 2, HashmapOperation >*,Error err) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(5187328219730237440UL, 3113259079076601088UL);
		ActorExecutionContextHelper __helper(static_cast<ServeHashmapServerInterfaceActor*>(this)->activeActorHelper.actorID, __identifier);
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
	void a_callback_fire(ActorSingleCallback< ServeHashmapServerInterfaceActor, 3, HashmapOperation >*,HashmapOperation const& value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<ServeHashmapServerInterfaceActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1loopBody1when4(value, 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	void a_callback_fire(ActorSingleCallback< ServeHashmapServerInterfaceActor, 3, HashmapOperation >*,HashmapOperation && value) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(9578512156108914944UL, 107643746863906816UL);
		ActorExecutionContextHelper __helper(static_cast<ServeHashmapServerInterfaceActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		a_exitChoose1();
		try {
			a_body1loopBody1when4(std::move(value), 0);
		}
		catch (Error& error) {
			a_body1Catch2(error, 0);
		} catch (...) {
			a_body1Catch2(unknown_error(), 0);
		}

	}
	void a_callback_error(ActorSingleCallback< ServeHashmapServerInterfaceActor, 3, HashmapOperation >*,Error err) 
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(5187328219730237440UL, 3113259079076601088UL);
		ActorExecutionContextHelper __helper(static_cast<ServeHashmapServerInterfaceActor*>(this)->activeActorHelper.actorID, __identifier);
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
															#line 30 "/flow_compile/src/hashmap_server.cpp"
	HashmapServerInterface hsi;
															#line 31 "/flow_compile/src/hashmap_server.cpp"
	std::unordered_map<string,string> hashmap;
															#line 486 "/flow_compile/tmp/hashmap_server.out.cpp"
};
// This generated class is to be used only via serveHashmapServerInterface()
															#line 20 "/flow_compile/src/hashmap_server.cpp"
class ServeHashmapServerInterfaceActor final : public Actor<Void>, public ActorSingleCallback< ServeHashmapServerInterfaceActor, 0, HashmapInterfaceRequest >, public ActorSingleCallback< ServeHashmapServerInterfaceActor, 1, HashmapOperation >, public ActorSingleCallback< ServeHashmapServerInterfaceActor, 2, HashmapOperation >, public ActorSingleCallback< ServeHashmapServerInterfaceActor, 3, HashmapOperation >, public FastAllocated<ServeHashmapServerInterfaceActor>, public ServeHashmapServerInterfaceActorState<ServeHashmapServerInterfaceActor> {
															#line 491 "/flow_compile/tmp/hashmap_server.out.cpp"
public:
	using FastAllocated<ServeHashmapServerInterfaceActor>::operator new;
	using FastAllocated<ServeHashmapServerInterfaceActor>::operator delete;
	static constexpr ActorIdentifier __actorIdentifier = UID(12350247655552475904UL, 16740715181258565376UL);
	ActiveActorHelper activeActorHelper;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdelete-non-virtual-dtor"
    void destroy() override {
        activeActorHelper.~ActiveActorHelper();
        static_cast<Actor<Void>*>(this)->~Actor();
        operator delete(this);
    }
#pragma clang diagnostic pop
friend struct ActorSingleCallback< ServeHashmapServerInterfaceActor, 0, HashmapInterfaceRequest >;
friend struct ActorSingleCallback< ServeHashmapServerInterfaceActor, 1, HashmapOperation >;
friend struct ActorSingleCallback< ServeHashmapServerInterfaceActor, 2, HashmapOperation >;
friend struct ActorSingleCallback< ServeHashmapServerInterfaceActor, 3, HashmapOperation >;
															#line 20 "/flow_compile/src/hashmap_server.cpp"
	ServeHashmapServerInterfaceActor() 
															#line 511 "/flow_compile/tmp/hashmap_server.out.cpp"
		 : Actor<Void>(),
		   ServeHashmapServerInterfaceActorState<ServeHashmapServerInterfaceActor>(),
		   activeActorHelper(__actorIdentifier)
	{
		#ifdef WITH_ACAC
		static constexpr ActorBlockIdentifier __identifier = UID(14877418846675910656UL, 1929408021209330944UL);
		ActorExecutionContextHelper __helper(static_cast<ServeHashmapServerInterfaceActor*>(this)->activeActorHelper.actorID, __identifier);
		#endif // WITH_ACAC
		#ifdef ENABLE_SAMPLING
		this->lineage.setActorName("serveHashmapServerInterface");
		LineageScope _(&this->lineage);
		#endif
		this->a_body1();

	}
	void cancel() override
	{
		auto wait_state = this->actor_wait_state;
		this->actor_wait_state = -1;
		switch (wait_state) {
		case 1: this->a_callback_error((ActorSingleCallback< ServeHashmapServerInterfaceActor, 0, HashmapInterfaceRequest >*)0, actor_cancelled()); break;
		}

	}
};
} // namespace
															#line 20 "/flow_compile/src/hashmap_server.cpp"
[[nodiscard]] Future<Void> serveHashmapServerInterface(  ) {
															#line 20 "/flow_compile/src/hashmap_server.cpp"
	return Future<Void>(new ServeHashmapServerInterfaceActor());
															#line 542 "/flow_compile/tmp/hashmap_server.out.cpp"
}

#line 62 "/flow_compile/src/hashmap_server.cpp"

int main() {
    auto f = stopAfter(serveHashmapServerInterface());
    g_network->run();
}