#if defined( DEFINE_INTERFACE_HERE ) || defined( DEFINE_SERVER_HERE )
	#undef LOGIN_INT_INTERFACE_HPP
#endif

#ifndef LOGIN_INT_INTERFACE_HPP
#define LOGIN_INT_INTERFACE_HPP

#include "network/basictypes.hpp"

#undef INTERFACE_NAME
#define INTERFACE_NAME LoginIntInterface
#include "network/common_interface_macros.hpp"

#include "server/common.hpp"
#include "server/anonymous_channel_client.hpp"

#ifdef MF_SERVER
#include "server/reviver_subject.hpp"
#else
#define MF_REVIVER_PING_MSG()
#endif


BW_BEGIN_NAMESPACE

// -----------------------------------------------------------------------------
// Section: Interior interface
// -----------------------------------------------------------------------------

// clang++ \
//  -E \
//  -CC \
//  -P \
//  -Iprogramming/bigworld/lib/ \
//  -DDEFINE_SERVER_HERE \
//  -DDEFINE_INTERFACE_HERE \
//  programming/bigworld/server/loginapp/login_int_interface.hpp | clang-format-21 > test.h
//
//
// namespace BW {
// namespace LoginIntInterface {
//   Mercury::InterfaceMinder gMinder("LoginIntInterface");
//
//   void registerWithInterface(Mercury::NetworkInterface &networkInterface) {
//     gMinder.registerWithInterface(networkInterface);
//   }
//
//   Mercury::Reason registerWithMachined(Mercury::NetworkInterface &networkInterface, int id) {
//     return gMinder.registerWithMachined(networkInterface.address(), id);
//   }
//
//   Mercury::Reason registerWithMachinedAs(const char *name, Mercury::NetworkInterface &networkInterface, int id) {
//     return gMinder.registerWithMachinedAs(name, networkInterface.address(), id);
//   }
//
//   const Mercury::InterfaceElement &DBAppMgrInterfaceBirth =
//       gMinder.add("DBAppMgrInterfaceBirth", Mercury::FIXED_LENGTH_MESSAGE, sizeof(Mercury::Address), nullptr);
//
//   const Mercury::InterfaceElement &controlledShutDown =
//       gMinder.add("controlledShutDown", Mercury::FIXED_LENGTH_MESSAGE, 0, &gShutDownHandler);
//
//   typedef StructMessageHandler<LoginApp, LoginIntInterface::handleDBAppMgrBirthArgs> LoginApp_handleDBAppMgrBirth_Handler;
//   LoginApp_handleDBAppMgrBirth_Handler gHandler_handleDBAppMgrBirth(&LoginApp::handleDBAppMgrBirth);
//
//   const Mercury::InterfaceElement &handleDBAppMgrBirth =
//       gMinder.add("handleDBAppMgrBirth", Mercury::FIXED_LENGTH_MESSAGE, sizeof(struct handleDBAppMgrBirthArgs), &gHandler_handleDBAppMgrBirth);
//
//   Mercury::Bundle &operator<<(Mercury::Bundle &b, const struct handleDBAppMgrBirthArgs &s) {
//     b.startMessage(handleDBAppMgrBirth);
//     (*(BinaryOStream *)(&b)) << s;
//     return b;
//   }
//
//   struct __Garbage__handleDBAppMgrBirthArgs {
//     static handleDBAppMgrBirthArgs &start(Mercury::Bundle &b, Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//       return *(handleDBAppMgrBirthArgs *)b.startStructMessage(handleDBAppMgrBirth, reliable);
//     }
//
//     static handleDBAppMgrBirthArgs &startRequest(Mercury::Bundle &b,
//                                                  Mercury::ReplyMessageHandler *handler,
//                                                  void *arg = nullptr,
//                                                  int timeout = Mercury::DEFAULT_REQUEST_TIMEOUT,
//                                                  Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//       return *(handleDBAppMgrBirthArgs *)b.startStructRequest(handleDBAppMgrBirth, handler, arg, timeout, reliable);
//     }
//
//     static const Mercury::InterfaceElement &interfaceElement() {
//       return handleDBAppMgrBirth;
//     }
//
//     Mercury::Address addr;
//   };
//
//   typedef StructMessageHandler<LoginApp, LoginIntInterface::notifyDBAppAlphaArgs> LoginApp_notifyDBAppAlpha_Handler;
//   LoginApp_notifyDBAppAlpha_Handler gHandler_notifyDBAppAlpha(&LoginApp::notifyDBAppAlpha);
//
//   const Mercury::InterfaceElement &notifyDBAppAlpha =
//       gMinder.add("notifyDBAppAlpha", Mercury::FIXED_LENGTH_MESSAGE, sizeof(struct notifyDBAppAlphaArgs), &gHandler_notifyDBAppAlpha);
//
//   Mercury::Bundle &operator<<(Mercury::Bundle &b, const struct notifyDBAppAlphaArgs &s) {
//     b.startMessage(notifyDBAppAlpha);
//     (*(BinaryOStream *)(&b)) << s;
//     return b;
//   }
//
//   struct __Garbage__notifyDBAppAlphaArgs {
//     static notifyDBAppAlphaArgs &start(Mercury::Bundle &b, Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//       return *(notifyDBAppAlphaArgs *)b.startStructMessage(notifyDBAppAlpha, reliable);
//     }
//
//     static notifyDBAppAlphaArgs &startRequest(Mercury::Bundle &b,
//                                               Mercury::ReplyMessageHandler *handler,
//                                               void *arg = nullptr,
//                                               int timeout = Mercury::DEFAULT_REQUEST_TIMEOUT,
//                                               Mercury::ReliableType reliable = Mercury::RELIABLE_DRIVER) {
//       return *(notifyDBAppAlphaArgs *)b.startStructRequest(notifyDBAppAlpha, handler, arg, timeout, reliable);
//     }
//
//     static const Mercury::InterfaceElement &interfaceElement() {
//       return notifyDBAppAlpha;
//     }
//
//     Mercury::Address addr;
//   };
//
// } // namespace LoginIntInterface
// } // namespace BW

#pragma pack(push,1)
BEGIN_MERCURY_INTERFACE( LoginIntInterface )

	BW_ANONYMOUS_CHANNEL_CLIENT_MSG( DBAppMgrInterface )

	MERCURY_EMPTY_MESSAGE( controlledShutDown, &gShutDownHandler )

	BW_BEGIN_STRUCT_MSG( LoginApp, handleDBAppMgrBirth )
		Mercury::Address	addr;
	END_STRUCT_MESSAGE()

	BW_BEGIN_STRUCT_MSG( LoginApp, notifyDBAppAlpha )
		Mercury::Address addr;
	END_STRUCT_MESSAGE()

	MF_REVIVER_PING_MSG()

END_MERCURY_INTERFACE()
#pragma pack(pop)

BW_END_NAMESPACE

#endif // LOGIN__INT_INTERFACE_HPP

