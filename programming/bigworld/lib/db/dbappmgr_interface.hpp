#if defined( DEFINE_INTERFACE_HERE ) || defined( DEFINE_SERVER_HERE )
	#undef DB_APP_MGR_INTERFACE_HPP
#endif

#ifndef DB_APP_MGR_INTERFACE_HPP
#define DB_APP_MGR_INTERFACE_HPP


#include "network/basictypes.hpp"

#undef INTERFACE_NAME
#define INTERFACE_NAME DBAppMgrInterface
#include "network/common_interface_macros.hpp"

#include "server/common.hpp"
#include "server/reviver_subject.hpp"


BW_BEGIN_NAMESPACE

// -----------------------------------------------------------------------------
// Section: DB App Manager interface
// -----------------------------------------------------------------------------

// namespace BW {
// namespace DBAppMgrInterface {
// Mercury::InterfaceMinder gMinder("DBAppMgrInterface");
// void registerWithInterface(Mercury::NetworkInterface &networkInterface) {
//   gMinder.registerWithInterface(networkInterface);
// }
// Mercury::Reason
// registerWithMachined(Mercury::NetworkInterface &networkInterface, int id) {
//   return gMinder.registerWithMachined(networkInterface.address(), id);
// }
// Mercury::Reason
// registerWithMachinedAs(const char *name,
//                        Mercury::NetworkInterface &networkInterface, int id) {
//   return gMinder.registerWithMachinedAs(name, networkInterface.address(), id);
// }
// typedef StructMessageHandlerEx<DBAppMgr,
//                                DBAppMgrInterface::handleDBAppDeathArgs>
//     DBAppMgr_handleDBAppDeath_Handler;
// DBAppMgr_handleDBAppDeath_Handler
//     gHandler_handleDBAppDeath(&DBAppMgr::handleDBAppDeath);
// const Mercury::InterfaceElement &handleDBAppDeath = gMinder.add(
//     "handleDBAppDeath", Mercury::FIXED_LENGTH_MESSAGE,
//     sizeof(struct handleDBAppDeathArgs), &gHandler_handleDBAppDeath);
// Mercury::Bundle &operator<<(Mercury::Bundle &b,
//                             const struct handleDBAppDeathArgs &s) {
//   b.startMessage(handleDBAppDeath);
//   (*(BinaryOStream *)(&b)) << s;
//   return b;
// }
// struct __Garbage__handleDBAppDeathArgs {
//   static handleDBAppDeathArgs &
//   start(Mercury::Bundle &b,
//         Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(handleDBAppDeathArgs *)b.startStructMessage(handleDBAppDeath,
//                                                          reliable);
//   }
//   static handleDBAppDeathArgs &
//   startRequest(Mercury::Bundle &b, Mercury::ReplyMessageHandler *handler,
//                void *arg = __null,
//                int timeout = Mercury::DEFAULT_REQUEST_TIMEOUT,
//                Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(handleDBAppDeathArgs *)b.startStructRequest(
//         handleDBAppDeath, handler, arg, timeout, reliable);
//   }
//   static const Mercury::InterfaceElement &interfaceElement() {
//     return handleDBAppDeath;
//   }
//   Mercury::Address addr;
// };
// typedef StructMessageHandler<DBAppMgr,
//                              DBAppMgrInterface::handleLoginAppDeathArgs>
//     DBAppMgr_handleLoginAppDeath_Handler;
// DBAppMgr_handleLoginAppDeath_Handler
//     gHandler_handleLoginAppDeath(&DBAppMgr::handleLoginAppDeath);
// const Mercury::InterfaceElement &handleLoginAppDeath = gMinder.add(
//     "handleLoginAppDeath", Mercury::FIXED_LENGTH_MESSAGE,
//     sizeof(struct handleLoginAppDeathArgs), &gHandler_handleLoginAppDeath);
// Mercury::Bundle &operator<<(Mercury::Bundle &b,
//                             const struct handleLoginAppDeathArgs &s) {
//   b.startMessage(handleLoginAppDeath);
//   (*(BinaryOStream *)(&b)) << s;
//   return b;
// }
// struct __Garbage__handleLoginAppDeathArgs {
//   static handleLoginAppDeathArgs &
//   start(Mercury::Bundle &b,
//         Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(handleLoginAppDeathArgs *)b.startStructMessage(handleLoginAppDeath,
//                                                             reliable);
//   }
//   static handleLoginAppDeathArgs &
//   startRequest(Mercury::Bundle &b, Mercury::ReplyMessageHandler *handler,
//                void *arg = __null,
//                int timeout = Mercury::DEFAULT_REQUEST_TIMEOUT,
//                Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(handleLoginAppDeathArgs *)b.startStructRequest(
//         handleLoginAppDeath, handler, arg, timeout, reliable);
//   }
//   static const Mercury::InterfaceElement &interfaceElement() {
//     return handleLoginAppDeath;
//   }
//   Mercury::Address addr;
// };
// typedef StructMessageHandler<DBAppMgr,
//                              DBAppMgrInterface::handleDBAppMgrBirthArgs>
//     DBAppMgr_handleDBAppMgrBirth_Handler;
// DBAppMgr_handleDBAppMgrBirth_Handler
//     gHandler_handleDBAppMgrBirth(&DBAppMgr::handleDBAppMgrBirth);
// const Mercury::InterfaceElement &handleDBAppMgrBirth = gMinder.add(
//     "handleDBAppMgrBirth", Mercury::FIXED_LENGTH_MESSAGE,
//     sizeof(struct handleDBAppMgrBirthArgs), &gHandler_handleDBAppMgrBirth);
// Mercury::Bundle &operator<<(Mercury::Bundle &b,
//                             const struct handleDBAppMgrBirthArgs &s) {
//   b.startMessage(handleDBAppMgrBirth);
//   (*(BinaryOStream *)(&b)) << s;
//   return b;
// }
// struct __Garbage__handleDBAppMgrBirthArgs {
//   static handleDBAppMgrBirthArgs &
//   start(Mercury::Bundle &b,
//         Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(handleDBAppMgrBirthArgs *)b.startStructMessage(handleDBAppMgrBirth,
//                                                             reliable);
//   }
//   static handleDBAppMgrBirthArgs &
//   startRequest(Mercury::Bundle &b, Mercury::ReplyMessageHandler *handler,
//                void *arg = __null,
//                int timeout = Mercury::DEFAULT_REQUEST_TIMEOUT,
//                Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(handleDBAppMgrBirthArgs *)b.startStructRequest(
//         handleDBAppMgrBirth, handler, arg, timeout, reliable);
//   }
//   static const Mercury::InterfaceElement &interfaceElement() {
//     return handleDBAppMgrBirth;
//   }
//   Mercury::Address addr;
// };
// typedef StructMessageHandler<DBAppMgr,
//                              DBAppMgrInterface::handleBaseAppMgrBirthArgs>
//     DBAppMgr_handleBaseAppMgrBirth_Handler;
// DBAppMgr_handleBaseAppMgrBirth_Handler
//     gHandler_handleBaseAppMgrBirth(&DBAppMgr::handleBaseAppMgrBirth);
// const Mercury::InterfaceElement &handleBaseAppMgrBirth = gMinder.add(
//     "handleBaseAppMgrBirth", Mercury::FIXED_LENGTH_MESSAGE,
//     sizeof(struct handleBaseAppMgrBirthArgs), &gHandler_handleBaseAppMgrBirth);
// Mercury::Bundle &operator<<(Mercury::Bundle &b,
//                             const struct handleBaseAppMgrBirthArgs &s) {
//   b.startMessage(handleBaseAppMgrBirth);
//   (*(BinaryOStream *)(&b)) << s;
//   return b;
// }
// struct __Garbage__handleBaseAppMgrBirthArgs {
//   static handleBaseAppMgrBirthArgs &
//   start(Mercury::Bundle &b,
//         Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(handleBaseAppMgrBirthArgs *)b.startStructMessage(
//         handleBaseAppMgrBirth, reliable);
//   }
//   static handleBaseAppMgrBirthArgs &
//   startRequest(Mercury::Bundle &b, Mercury::ReplyMessageHandler *handler,
//                void *arg = __null,
//                int timeout = Mercury::DEFAULT_REQUEST_TIMEOUT,
//                Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(handleBaseAppMgrBirthArgs *)b.startStructRequest(
//         handleBaseAppMgrBirth, handler, arg, timeout, reliable);
//   }
//   static const Mercury::InterfaceElement &interfaceElement() {
//     return handleBaseAppMgrBirth;
//   }
//   Mercury::Address addr;
// };
// typedef StructMessageHandler<DBAppMgr,
//                              DBAppMgrInterface::handleCellAppMgrBirthArgs>
//     DBAppMgr_handleCellAppMgrBirth_Handler;
// DBAppMgr_handleCellAppMgrBirth_Handler
//     gHandler_handleCellAppMgrBirth(&DBAppMgr::handleCellAppMgrBirth);
// const Mercury::InterfaceElement &handleCellAppMgrBirth = gMinder.add(
//     "handleCellAppMgrBirth", Mercury::FIXED_LENGTH_MESSAGE,
//     sizeof(struct handleCellAppMgrBirthArgs), &gHandler_handleCellAppMgrBirth);
// Mercury::Bundle &operator<<(Mercury::Bundle &b,
//                             const struct handleCellAppMgrBirthArgs &s) {
//   b.startMessage(handleCellAppMgrBirth);
//   (*(BinaryOStream *)(&b)) << s;
//   return b;
// }
// struct __Garbage__handleCellAppMgrBirthArgs {
//   static handleCellAppMgrBirthArgs &
//   start(Mercury::Bundle &b,
//         Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(handleCellAppMgrBirthArgs *)b.startStructMessage(
//         handleCellAppMgrBirth, reliable);
//   }
//   static handleCellAppMgrBirthArgs &
//   startRequest(Mercury::Bundle &b, Mercury::ReplyMessageHandler *handler,
//                void *arg = __null,
//                int timeout = Mercury::DEFAULT_REQUEST_TIMEOUT,
//                Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(handleCellAppMgrBirthArgs *)b.startStructRequest(
//         handleCellAppMgrBirth, handler, arg, timeout, reliable);
//   }
//   static const Mercury::InterfaceElement &interfaceElement() {
//     return handleCellAppMgrBirth;
//   }
//   Mercury::Address addr;
// };
// typedef StructMessageHandler<DBAppMgr,
//                              DBAppMgrInterface::controlledShutDownArgs>
//     DBAppMgr_controlledShutDown_Handler;
// DBAppMgr_controlledShutDown_Handler
//     gHandler_controlledShutDown(&DBAppMgr::controlledShutDown);
// const Mercury::InterfaceElement &controlledShutDown = gMinder.add(
//     "controlledShutDown", Mercury::FIXED_LENGTH_MESSAGE,
//     sizeof(struct controlledShutDownArgs), &gHandler_controlledShutDown);
// Mercury::Bundle &operator<<(Mercury::Bundle &b,
//                             const struct controlledShutDownArgs &s) {
//   b.startMessage(controlledShutDown);
//   (*(BinaryOStream *)(&b)) << s;
//   return b;
// }
// struct __Garbage__controlledShutDownArgs {
//   static controlledShutDownArgs &
//   start(Mercury::Bundle &b,
//         Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(controlledShutDownArgs *)b.startStructMessage(controlledShutDown,
//                                                            reliable);
//   }
//   static controlledShutDownArgs &
//   startRequest(Mercury::Bundle &b, Mercury::ReplyMessageHandler *handler,
//                void *arg = __null,
//                int timeout = Mercury::DEFAULT_REQUEST_TIMEOUT,
//                Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(controlledShutDownArgs *)b.startStructRequest(
//         controlledShutDown, handler, arg, timeout, reliable);
//   }
//   static const Mercury::InterfaceElement &interfaceElement() {
//     return controlledShutDown;
//   }
//   ShutDownStage stage;
// };
// EmptyMessageHandlerEx<DBAppMgr> gHandler_addDBApp(&DBAppMgr::addDBApp);
// const Mercury::InterfaceElement &addDBApp = gMinder.add(
//     "addDBApp", Mercury::FIXED_LENGTH_MESSAGE, 0, &gHandler_addDBApp);
// typedef StructMessageHandlerEx<DBAppMgr, DBAppMgrInterface::recoverDBAppArgs>
//     DBAppMgr_recoverDBApp_Handler;
// DBAppMgr_recoverDBApp_Handler gHandler_recoverDBApp(&DBAppMgr::recoverDBApp);
// const Mercury::InterfaceElement &recoverDBApp =
//     gMinder.add("recoverDBApp", Mercury::FIXED_LENGTH_MESSAGE,
//                 sizeof(struct recoverDBAppArgs), &gHandler_recoverDBApp);
// Mercury::Bundle &operator<<(Mercury::Bundle &b,
//                             const struct recoverDBAppArgs &s) {
//   b.startMessage(recoverDBApp);
//   (*(BinaryOStream *)(&b)) << s;
//   return b;
// }
// struct __Garbage__recoverDBAppArgs {
//   static recoverDBAppArgs &
//   start(Mercury::Bundle &b,
//         Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(recoverDBAppArgs *)b.startStructMessage(recoverDBApp, reliable);
//   }
//   static recoverDBAppArgs &
//   startRequest(Mercury::Bundle &b, Mercury::ReplyMessageHandler *handler,
//                void *arg = __null,
//                int timeout = Mercury::DEFAULT_REQUEST_TIMEOUT,
//                Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(recoverDBAppArgs *)b.startStructRequest(recoverDBApp, handler, arg,
//                                                      timeout, reliable);
//   }
//   static const Mercury::InterfaceElement &interfaceElement() {
//     return recoverDBApp;
//   }
//   DBAppID id;
//   // More to come in later phases.
// };
// StreamMessageHandlerEx<DBAppMgr> gHandler_addLoginApp(&DBAppMgr::addLoginApp);
// const Mercury::InterfaceElement &addLoginApp = gMinder.add(
//     "addLoginApp", Mercury::VARIABLE_LENGTH_MESSAGE, 2, &gHandler_addLoginApp);
// ;
// typedef StructMessageHandlerEx<DBAppMgr, DBAppMgrInterface::recoverLoginAppArgs>
//     DBAppMgr_recoverLoginApp_Handler;
// DBAppMgr_recoverLoginApp_Handler
//     gHandler_recoverLoginApp(&DBAppMgr::recoverLoginApp);
// const Mercury::InterfaceElement &recoverLoginApp =
//     gMinder.add("recoverLoginApp", Mercury::FIXED_LENGTH_MESSAGE,
//                 sizeof(struct recoverLoginAppArgs), &gHandler_recoverLoginApp);
// Mercury::Bundle &operator<<(Mercury::Bundle &b,
//                             const struct recoverLoginAppArgs &s) {
//   b.startMessage(recoverLoginApp);
//   (*(BinaryOStream *)(&b)) << s;
//   return b;
// }
// struct __Garbage__recoverLoginAppArgs {
//   static recoverLoginAppArgs &
//   start(Mercury::Bundle &b,
//         Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(recoverLoginAppArgs *)b.startStructMessage(recoverLoginApp,
//                                                         reliable);
//   }
//   static recoverLoginAppArgs &
//   startRequest(Mercury::Bundle &b, Mercury::ReplyMessageHandler *handler,
//                void *arg = __null,
//                int timeout = Mercury::DEFAULT_REQUEST_TIMEOUT,
//                Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(recoverLoginAppArgs *)b.startStructRequest(
//         recoverLoginApp, handler, arg, timeout, reliable);
//   }
//   static const Mercury::InterfaceElement &interfaceElement() {
//     return recoverLoginApp;
//   };
//   LoginAppID id;
// };
// StreamMessageHandler<DBAppMgr>
//     gHandler_handleBaseAppDeath(&DBAppMgr::handleBaseAppDeath);
// const Mercury::InterfaceElement &handleBaseAppDeath =
//     gMinder.add("handleBaseAppDeath", Mercury::VARIABLE_LENGTH_MESSAGE, 2,
//                 &gHandler_handleBaseAppDeath);
// EmptyMessageHandler<DBApp> gHandler_retireApp(&DBApp::retireApp);
// const Mercury::InterfaceElement &retireApp = gMinder.add(
//     "retireApp", Mercury::FIXED_LENGTH_MESSAGE, 0, &gHandler_retireApp);
// EmptyMessageHandler<DBAppMgr>
//     gHandler_serverHasStarted(&DBAppMgr::serverHasStarted);
// const Mercury::InterfaceElement &serverHasStarted =
//     gMinder.add("serverHasStarted", Mercury::FIXED_LENGTH_MESSAGE, 0,
//                 &gHandler_serverHasStarted);
// const Mercury::InterfaceElement &reviverPing =
//     gMinder.add("reviverPing", Mercury::VARIABLE_LENGTH_MESSAGE, 2,
//                 &ReviverSubject::instance());
// } // namespace DBAppMgrInterface
// }// namespace BW


#pragma pack(push, 1)
BEGIN_MERCURY_INTERFACE( DBAppMgrInterface )

	BW_BEGIN_STRUCT_MSG_EX( DBAppMgr, handleDBAppDeath )
		Mercury::Address addr;
	END_STRUCT_MESSAGE()

	BW_BEGIN_STRUCT_MSG( DBAppMgr, handleLoginAppDeath )
		Mercury::Address	addr;
	END_STRUCT_MESSAGE()

	BW_BEGIN_STRUCT_MSG( DBAppMgr, handleDBAppMgrBirth )
		Mercury::Address	addr;
	END_STRUCT_MESSAGE()

	BW_BEGIN_STRUCT_MSG( DBAppMgr, handleBaseAppMgrBirth )
		Mercury::Address	addr;
	END_STRUCT_MESSAGE()

	BW_BEGIN_STRUCT_MSG( DBAppMgr, handleCellAppMgrBirth )
		Mercury::Address	addr;
	END_STRUCT_MESSAGE()

	BW_BEGIN_STRUCT_MSG( DBAppMgr, controlledShutDown )
		ShutDownStage stage;
	END_STRUCT_MESSAGE()

	BW_EMPTY_MSG_EX( DBAppMgr, addDBApp )

	BW_BEGIN_STRUCT_MSG_EX( DBAppMgr, recoverDBApp )
		DBAppID id;
		// More to come in later phases.
	END_STRUCT_MESSAGE()

	BW_STREAM_MSG_EX( DBAppMgr, addLoginApp );

	BW_BEGIN_STRUCT_MSG_EX( DBAppMgr, recoverLoginApp );
		LoginAppID	id;
	END_STRUCT_MESSAGE()

	BW_STREAM_MSG( DBAppMgr, handleBaseAppDeath )

	BW_EMPTY_MSG( DBApp, retireApp )

	BW_EMPTY_MSG( DBAppMgr, serverHasStarted )

	MF_REVIVER_PING_MSG()

END_MERCURY_INTERFACE()
#pragma pack(pop)

BW_END_NAMESPACE

#endif // DB_APP_MGR_INTERFACE_HPP
