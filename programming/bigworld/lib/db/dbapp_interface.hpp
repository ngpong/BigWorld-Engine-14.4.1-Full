#if defined( DEFINE_INTERFACE_HERE ) || defined( DEFINE_SERVER_HERE )
	#undef DB_APP_INTERFACE_HPP
#endif

#ifndef DB_APP_INTERFACE_HPP
#define DB_APP_INTERFACE_HPP

// -----------------------------------------------------------------------------
// Section: Includes
// -----------------------------------------------------------------------------
#undef INTERFACE_NAME
#define INTERFACE_NAME DBAppInterface
#include "network/common_interface_macros.hpp"

#include "server/common.hpp"
#include "server/reviver_subject.hpp"


BW_BEGIN_NAMESPACE

// namespace BW {
// namespace DBAppInterface {
// Mercury::InterfaceMinder gMinder("DBAppInterface");
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
// const Mercury::InterfaceElement &reviverPing =
//     gMinder.add("reviverPing", Mercury::VARIABLE_LENGTH_MESSAGE, 2,
//                 &ReviverSubject::instance());
// typedef StructMessageHandler<DBApp, DBAppInterface::handleBaseAppMgrBirthArgs>
//     DBApp_handleBaseAppMgrBirth_Handler;
// DBApp_handleBaseAppMgrBirth_Handler
//     gHandler_handleBaseAppMgrBirth(&DBApp::handleBaseAppMgrBirth);
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
// typedef StructMessageHandler<DBApp, DBAppInterface::handleDBAppMgrBirthArgs>
//     DBApp_handleDBAppMgrBirth_Handler;
// DBApp_handleDBAppMgrBirth_Handler
//     gHandler_handleDBAppMgrBirth(&DBApp::handleDBAppMgrBirth);
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
// typedef StructMessageHandler<DBApp, DBAppInterface::handleDBAppMgrDeathArgs>
//     DBApp_handleDBAppMgrDeath_Handler;
// DBApp_handleDBAppMgrDeath_Handler
//     gHandler_handleDBAppMgrDeath(&DBApp::handleDBAppMgrDeath);
// const Mercury::InterfaceElement &handleDBAppMgrDeath = gMinder.add(
//     "handleDBAppMgrDeath", Mercury::FIXED_LENGTH_MESSAGE,
//     sizeof(struct handleDBAppMgrDeathArgs), &gHandler_handleDBAppMgrDeath);
// Mercury::Bundle &operator<<(Mercury::Bundle &b,
//                             const struct handleDBAppMgrDeathArgs &s) {
//   b.startMessage(handleDBAppMgrDeath);
//   (*(BinaryOStream *)(&b)) << s;
//   return b;
// }
// struct __Garbage__handleDBAppMgrDeathArgs {
//   static handleDBAppMgrDeathArgs &
//   start(Mercury::Bundle &b,
//         Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(handleDBAppMgrDeathArgs *)b.startStructMessage(handleDBAppMgrDeath,
//                                                             reliable);
//   }
//   static handleDBAppMgrDeathArgs &
//   startRequest(Mercury::Bundle &b, Mercury::ReplyMessageHandler *handler,
//                void *arg = __null,
//                int timeout = Mercury::DEFAULT_REQUEST_TIMEOUT,
//                Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(handleDBAppMgrDeathArgs *)b.startStructRequest(
//         handleDBAppMgrDeath, handler, arg, timeout, reliable);
//   }
//   static const Mercury::InterfaceElement &interfaceElement() {
//     return handleDBAppMgrDeath;
//   }
//   Mercury::Address addr;
// };
// StreamMessageHandler<DBApp>
//     gHandler_handleBaseAppDeath(&DBApp::handleBaseAppDeath);
// const Mercury::InterfaceElement &handleBaseAppDeath =
//     gMinder.add("handleBaseAppDeath", Mercury::VARIABLE_LENGTH_MESSAGE, 2,
//                 &gHandler_handleBaseAppDeath);
// typedef StructMessageHandler<DBApp, DBAppInterface::shutDownArgs>
//     DBApp_shutDown_Handler;
// DBApp_shutDown_Handler gHandler_shutDown(&DBApp::shutDown);
// const Mercury::InterfaceElement &shutDown =
//     gMinder.add("shutDown", Mercury::FIXED_LENGTH_MESSAGE,
//                 sizeof(struct shutDownArgs), &gHandler_shutDown);
// Mercury::Bundle &operator<<(Mercury::Bundle &b, const struct shutDownArgs &s) {
//   b.startMessage(shutDown);
//   (*(BinaryOStream *)(&b)) << s;
//   return b;
// }
// struct __Garbage__shutDownArgs {
//   static shutDownArgs &
//   start(Mercury::Bundle &b,
//         Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(shutDownArgs *)b.startStructMessage(shutDown, reliable);
//   }
//   static shutDownArgs &
//   startRequest(Mercury::Bundle &b, Mercury::ReplyMessageHandler *handler,
//                void *arg = __null,
//                int timeout = Mercury::DEFAULT_REQUEST_TIMEOUT,
//                Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(shutDownArgs *)b.startStructRequest(shutDown, handler, arg,
//                                                  timeout, reliable);
//   }
//   static const Mercury::InterfaceElement &interfaceElement() {
//     return shutDown;
//   }
//   // none
// };
// typedef StructMessageHandler<DBApp, DBAppInterface::controlledShutDownArgs>
//     DBApp_controlledShutDown_Handler;
// DBApp_controlledShutDown_Handler
//     gHandler_controlledShutDown(&DBApp::controlledShutDown);
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
// // TODO: Scalable DB: Move this to DBAppMgr
// typedef StructMessageHandler<DBApp, DBAppInterface::cellAppOverloadStatusArgs>
//     DBApp_cellAppOverloadStatus_Handler;
// DBApp_cellAppOverloadStatus_Handler
//     gHandler_cellAppOverloadStatus(&DBApp::cellAppOverloadStatus);
// const Mercury::InterfaceElement &cellAppOverloadStatus = gMinder.add(
//     "cellAppOverloadStatus", Mercury::FIXED_LENGTH_MESSAGE,
//     sizeof(struct cellAppOverloadStatusArgs), &gHandler_cellAppOverloadStatus);
// Mercury::Bundle &operator<<(Mercury::Bundle &b,
//                             const struct cellAppOverloadStatusArgs &s) {
//   b.startMessage(cellAppOverloadStatus);
//   (*(BinaryOStream *)(&b)) << s;
//   return b;
// }
// struct __Garbage__cellAppOverloadStatusArgs {
//   static cellAppOverloadStatusArgs &
//   start(Mercury::Bundle &b,
//         Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(cellAppOverloadStatusArgs *)b.startStructMessage(
//         cellAppOverloadStatus, reliable);
//   }
//   static cellAppOverloadStatusArgs &
//   startRequest(Mercury::Bundle &b, Mercury::ReplyMessageHandler *handler,
//                void *arg = __null,
//                int timeout = Mercury::DEFAULT_REQUEST_TIMEOUT,
//                Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(cellAppOverloadStatusArgs *)b.startStructRequest(
//         cellAppOverloadStatus, handler, arg, timeout, reliable);
//   }
//   static const Mercury::InterfaceElement &interfaceElement() {
//     return cellAppOverloadStatus;
//   }
//   bool hasOverloadedCellApps;
// };
// StreamMessageHandlerEx<DBApp> gHandler_logOn(&DBApp::logOn);
// const Mercury::InterfaceElement &logOn =
//     gMinder.add("logOn", Mercury::VARIABLE_LENGTH_MESSAGE, 2, &gHandler_logOn);
// // BW::string logOnName
// // BW::string password
// // Mercury::Address addrForProxy
// // MD5::Digest digest
// StreamMessageHandlerEx<DBApp>
//     gHandler_authenticateAccount(&DBApp::authenticateAccount);
// const Mercury::InterfaceElement &authenticateAccount =
//     gMinder.add("authenticateAccount", Mercury::VARIABLE_LENGTH_MESSAGE, 2,
//                 &gHandler_authenticateAccount);
// // BW::string username
// // BW::string password
// StreamMessageHandlerEx<DBApp> gHandler_loadEntity(&DBApp::loadEntity);
// const Mercury::InterfaceElement &loadEntity = gMinder.add(
//     "loadEntity", Mercury::VARIABLE_LENGTH_MESSAGE, 2, &gHandler_loadEntity);
// // EntityTypeID	entityTypeID;
// // EntityID entityID;
// // bool nameNotID;
// // nameNotID ? (BW::string name) : (DatabaseID id );
// StreamMessageHandlerEx<DBApp> gHandler_writeEntity(&DBApp::writeEntity);
// const Mercury::InterfaceElement &writeEntity = gMinder.add(
//     "writeEntity", Mercury::VARIABLE_LENGTH_MESSAGE, 4, &gHandler_writeEntity);
// // int16 flags; (cell? base? log off?)
// // EntityTypeID entityTypeID;
// // DatabaseID	databaseID;
// // properties
// typedef StructMessageHandlerEx<DBApp, DBAppInterface::deleteEntityArgs>
//     DBApp_deleteEntity_Handler;
// DBApp_deleteEntity_Handler gHandler_deleteEntity(&DBApp::deleteEntity);
// const Mercury::InterfaceElement &deleteEntity =
//     gMinder.add("deleteEntity", Mercury::FIXED_LENGTH_MESSAGE,
//                 sizeof(struct deleteEntityArgs), &gHandler_deleteEntity);
// Mercury::Bundle &operator<<(Mercury::Bundle &b,
//                             const struct deleteEntityArgs &s) {
//   b.startMessage(deleteEntity);
//   (*(BinaryOStream *)(&b)) << s;
//   return b;
// }
// struct __Garbage__deleteEntityArgs {
//   static deleteEntityArgs &
//   start(Mercury::Bundle &b,
//         Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(deleteEntityArgs *)b.startStructMessage(deleteEntity, reliable);
//   }
//   static deleteEntityArgs &
//   startRequest(Mercury::Bundle &b, Mercury::ReplyMessageHandler *handler,
//                void *arg = __null,
//                int timeout = Mercury::DEFAULT_REQUEST_TIMEOUT,
//                Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(deleteEntityArgs *)b.startStructRequest(deleteEntity, handler, arg,
//                                                      timeout, reliable);
//   }
//   static const Mercury::InterfaceElement &interfaceElement() {
//     return deleteEntity;
//   }
//   EntityTypeID entityTypeID;
//   DatabaseID dbid;
// };
// typedef StructMessageHandlerEx<DBApp, DBAppInterface::lookupEntityArgs>
//     DBApp_lookupEntity_Handler;
// DBApp_lookupEntity_Handler gHandler_lookupEntity(&DBApp::lookupEntity);
// const Mercury::InterfaceElement &lookupEntity =
//     gMinder.add("lookupEntity", Mercury::FIXED_LENGTH_MESSAGE,
//                 sizeof(struct lookupEntityArgs), &gHandler_lookupEntity);
// Mercury::Bundle &operator<<(Mercury::Bundle &b,
//                             const struct lookupEntityArgs &s) {
//   b.startMessage(lookupEntity);
//   (*(BinaryOStream *)(&b)) << s;
//   return b;
// }
// struct __Garbage__lookupEntityArgs {
//   static lookupEntityArgs &
//   start(Mercury::Bundle &b,
//         Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(lookupEntityArgs *)b.startStructMessage(lookupEntity, reliable);
//   }
//   static lookupEntityArgs &
//   startRequest(Mercury::Bundle &b, Mercury::ReplyMessageHandler *handler,
//                void *arg = __null,
//                int timeout = Mercury::DEFAULT_REQUEST_TIMEOUT,
//                Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(lookupEntityArgs *)b.startStructRequest(lookupEntity, handler, arg,
//                                                      timeout, reliable);
//   }
//   static const Mercury::InterfaceElement &interfaceElement() {
//     return lookupEntity;
//   }
//   EntityTypeID entityTypeID;
//   DatabaseID dbid;
// };
// StreamMessageHandlerEx<DBApp>
//     gHandler_lookupEntityByName(&DBApp::lookupEntityByName);
// const Mercury::InterfaceElement &lookupEntityByName =
//     gMinder.add("lookupEntityByName", Mercury::VARIABLE_LENGTH_MESSAGE, 2,
//                 &gHandler_lookupEntityByName);
// // EntityTypeID		entityTypeID;
// // BW::string 		name;
// StreamMessageHandlerEx<DBApp>
//     gHandler_lookupDBIDByName(&DBApp::lookupDBIDByName);
// const Mercury::InterfaceElement &lookupDBIDByName =
//     gMinder.add("lookupDBIDByName", Mercury::VARIABLE_LENGTH_MESSAGE, 2,
//                 &gHandler_lookupDBIDByName);
// // EntityTypeID	entityTypeID;
// // BW::string name;
// StreamMessageHandlerEx<DBApp> gHandler_lookupEntities(&DBApp::lookupEntities);
// const Mercury::InterfaceElement &lookupEntities =
//     gMinder.add("lookupEntities", Mercury::VARIABLE_LENGTH_MESSAGE, 2,
//                 &gHandler_lookupEntities);
// // EntityTypeID entityTypeID
// // BW::string property
// // BW::string value
// StreamMessageHandlerEx<DBApp>
//     gHandler_executeRawCommand(&DBApp::executeRawCommand);
// const Mercury::InterfaceElement &executeRawCommand =
//     gMinder.add("executeRawCommand", Mercury::VARIABLE_LENGTH_MESSAGE, 4,
//                 &gHandler_executeRawCommand);
// // char[] command;
// StreamMessageHandlerEx<DBApp> gHandler_putIDs(&DBApp::putIDs);
// const Mercury::InterfaceElement &putIDs = gMinder.add(
//     "putIDs", Mercury::VARIABLE_LENGTH_MESSAGE, 2, &gHandler_putIDs);
// // EntityID ids[];
// StreamMessageHandlerEx<DBApp> gHandler_getIDs(&DBApp::getIDs);
// const Mercury::InterfaceElement &getIDs = gMinder.add(
//     "getIDs", Mercury::VARIABLE_LENGTH_MESSAGE, 2, &gHandler_getIDs);
// // int numIDs;
// StreamMessageHandlerEx<DBApp> gHandler_writeSpaces(&DBApp::writeSpaces);
// const Mercury::InterfaceElement &writeSpaces = gMinder.add(
//     "writeSpaces", Mercury::VARIABLE_LENGTH_MESSAGE, 4, &gHandler_writeSpaces);
// typedef StructMessageHandler<DBApp, DBAppInterface::writeGameTimeArgs>
//     DBApp_writeGameTime_Handler;
// DBApp_writeGameTime_Handler gHandler_writeGameTime(&DBApp::writeGameTime);
// const Mercury::InterfaceElement &writeGameTime =
//     gMinder.add("writeGameTime", Mercury::FIXED_LENGTH_MESSAGE,
//                 sizeof(struct writeGameTimeArgs), &gHandler_writeGameTime);
// Mercury::Bundle &operator<<(Mercury::Bundle &b,
//                             const struct writeGameTimeArgs &s) {
//   b.startMessage(writeGameTime);
//   (*(BinaryOStream *)(&b)) << s;
//   return b;
// }
// struct __Garbage__writeGameTimeArgs {
//   static writeGameTimeArgs &
//   start(Mercury::Bundle &b,
//         Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(writeGameTimeArgs *)b.startStructMessage(writeGameTime, reliable);
//   }
//   static writeGameTimeArgs &
//   startRequest(Mercury::Bundle &b, Mercury::ReplyMessageHandler *handler,
//                void *arg = __null,
//                int timeout = Mercury::DEFAULT_REQUEST_TIMEOUT,
//                Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//     return *(writeGameTimeArgs *)b.startStructRequest(writeGameTime, handler,
//                                                       arg, timeout, reliable);
//   }
//   static const Mercury::InterfaceElement &interfaceElement() {
//     return writeGameTime;
//   }
//   GameTime gameTime;
// };
// StreamMessageHandlerEx<DBApp> gHandler_checkStatus(&DBApp::checkStatus);
// const Mercury::InterfaceElement &checkStatus = gMinder.add(
//     "checkStatus", Mercury::VARIABLE_LENGTH_MESSAGE, 2, &gHandler_checkStatus);
// StreamMessageHandlerEx<DBApp>
//     gHandler_secondaryDBRegistration(&DBApp::secondaryDBRegistration);
// const Mercury::InterfaceElement &secondaryDBRegistration =
//     gMinder.add("secondaryDBRegistration", Mercury::VARIABLE_LENGTH_MESSAGE, 2,
//                 &gHandler_secondaryDBRegistration);
// ;
// StreamMessageHandlerEx<DBApp>
//     gHandler_updateSecondaryDBs(&DBApp::updateSecondaryDBs);
// const Mercury::InterfaceElement &updateSecondaryDBs =
//     gMinder.add("updateSecondaryDBs", Mercury::VARIABLE_LENGTH_MESSAGE, 2,
//                 &gHandler_updateSecondaryDBs);
// ;
// StreamMessageHandlerEx<DBApp>
//     gHandler_getSecondaryDBDetails(&DBApp::getSecondaryDBDetails);
// const Mercury::InterfaceElement &getSecondaryDBDetails =
//     gMinder.add("getSecondaryDBDetails", Mercury::VARIABLE_LENGTH_MESSAGE, 2,
//                 &gHandler_getSecondaryDBDetails);
// ;
// StreamMessageHandler<DBApp> gHandler_updateDBAppHash(&DBApp::updateDBAppHash);
// const Mercury::InterfaceElement &updateDBAppHash =
//     gMinder.add("updateDBAppHash", Mercury::VARIABLE_LENGTH_MESSAGE, 2,
//                 &gHandler_updateDBAppHash);
// ;
// } // namespace DBAppInterface
// } // namespace BW


// -----------------------------------------------------------------------------
// Section: DBApp Interface
// -----------------------------------------------------------------------------

BEGIN_MERCURY_INTERFACE( DBAppInterface )

	MF_REVIVER_PING_MSG()

	BW_BEGIN_STRUCT_MSG( DBApp, handleBaseAppMgrBirth )
		Mercury::Address	addr;
	END_STRUCT_MESSAGE()

	BW_BEGIN_STRUCT_MSG( DBApp, handleDBAppMgrBirth )
		Mercury::Address	addr;
	END_STRUCT_MESSAGE()

	BW_BEGIN_STRUCT_MSG( DBApp, handleDBAppMgrDeath )
		Mercury::Address	addr;
	END_STRUCT_MESSAGE()

	BW_STREAM_MSG( DBApp, handleBaseAppDeath )

	BW_BEGIN_STRUCT_MSG( DBApp, shutDown )
		// none
	END_STRUCT_MESSAGE()

	BW_BEGIN_STRUCT_MSG( DBApp, controlledShutDown )
		ShutDownStage stage;
	END_STRUCT_MESSAGE()

	// TODO: Scalable DB: Move this to DBAppMgr
	BW_BEGIN_STRUCT_MSG( DBApp, cellAppOverloadStatus )
		bool hasOverloadedCellApps;
	END_STRUCT_MESSAGE()


	BW_STREAM_MSG_EX( DBApp, logOn )
		// BW::string logOnName
		// BW::string password
		// Mercury::Address addrForProxy
		// MD5::Digest digest

	BW_STREAM_MSG_EX( DBApp, authenticateAccount )
		// BW::string username
		// BW::string password

	BW_STREAM_MSG_EX( DBApp, loadEntity )
		// EntityTypeID	entityTypeID;
		// EntityID entityID;
		// bool nameNotID;
		// nameNotID ? (BW::string name) : (DatabaseID id );

	BW_BIG_STREAM_MSG_EX( DBApp, writeEntity )
		// int16 flags; (cell? base? log off?)
		// EntityTypeID entityTypeID;
		// DatabaseID	databaseID;
		// properties

	BW_BEGIN_STRUCT_MSG_EX( DBApp, deleteEntity )
		EntityTypeID	entityTypeID;
		DatabaseID		dbid;
	END_STRUCT_MESSAGE()

	BW_BEGIN_STRUCT_MSG_EX( DBApp, lookupEntity )
		EntityTypeID	entityTypeID;
		DatabaseID		dbid;
	END_STRUCT_MESSAGE()

	BW_STREAM_MSG_EX( DBApp, lookupEntityByName )
		// EntityTypeID		entityTypeID;
		// BW::string 		name;

	BW_STREAM_MSG_EX( DBApp, lookupDBIDByName )
		// EntityTypeID	entityTypeID;
		// BW::string name;

	BW_STREAM_MSG_EX( DBApp, lookupEntities )
		// EntityTypeID entityTypeID
		// BW::string property
		// BW::string value

	BW_BIG_STREAM_MSG_EX( DBApp, executeRawCommand )
		// char[] command;

	BW_STREAM_MSG_EX( DBApp, putIDs )
		// EntityID ids[];

	BW_STREAM_MSG_EX( DBApp, getIDs )
		// int numIDs;

	BW_BIG_STREAM_MSG_EX( DBApp, writeSpaces )

	BW_BEGIN_STRUCT_MSG( DBApp, writeGameTime )
		GameTime gameTime;
	END_STRUCT_MESSAGE()

	BW_STREAM_MSG_EX( DBApp, checkStatus )

	BW_STREAM_MSG_EX( DBApp, secondaryDBRegistration );
	BW_STREAM_MSG_EX( DBApp, updateSecondaryDBs );
	BW_STREAM_MSG_EX( DBApp, getSecondaryDBDetails );

	BW_STREAM_MSG( DBApp, updateDBAppHash );

END_MERCURY_INTERFACE()

BW_END_NAMESPACE

#endif // DB_APP_INTERFACE_HPP
