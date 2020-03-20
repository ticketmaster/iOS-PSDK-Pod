// Generated by Apple Swift version 5.1.3 (swiftlang-1100.0.282.1 clang-1100.0.33.15)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="iosExperienceSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif




SWIFT_CLASS("_TtC16iosExperienceSDK16ESWebViewRequest")
@interface ESWebViewRequest : NSObject
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nullable headers SWIFT_DEPRECATED_OBJC("Swift property 'ESWebViewRequest.headers' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)initFromTicketSystemSDK:(BOOL)fromTicketSystemSDK OBJC_DESIGNATED_INITIALIZER SWIFT_DEPRECATED_OBJC("Swift initializer 'ESWebViewRequest.init(fromTicketSystemSDK:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (NSString * _Nonnull)getPath SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_OBJC("Swift method 'ESWebViewRequest.getPath()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)addQueryParamWithName:(NSString * _Nonnull)name value:(NSString * _Nonnull)value override:(BOOL)override SWIFT_DEPRECATED_OBJC("Swift method 'ESWebViewRequest.addQueryParam(name:value:override:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (NSDictionary<NSString *, NSString *> * _Nonnull)getQueryParams SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_OBJC("Swift method 'ESWebViewRequest.getQueryParams()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC16iosExperienceSDK19ESAddTicketsRequest")
@interface ESAddTicketsRequest : ESWebViewRequest
- (nonnull instancetype)initFromTicketSystemSDK:(BOOL)fromTicketSystemSDK OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithEventId:(NSString * _Nonnull)eventId fromTicketSystemSDK:(BOOL)fromTicketSystemSDK SWIFT_DEPRECATED_OBJC("Swift initializer 'ESAddTicketsRequest.init(eventId:fromTicketSystemSDK:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (NSString * _Nonnull)getPath SWIFT_WARN_UNUSED_RESULT;
@end

@class ESUserInfo;
enum ESExternalTicketSystem : NSInteger;
@class ESEventInfoResponse;

SWIFT_CLASS("_TtC16iosExperienceSDK11ESApiClient")
@interface ESApiClient : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ESApiClient * _Nonnull sharedInstance SWIFT_DEPRECATED_OBJC("Swift property 'ESApiClient.sharedInstance' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");)
+ (ESApiClient * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_OBJC("Swift property 'ESApiClient.sharedInstance' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)getEventUserInfoWithUserInfo:(ESUserInfo * _Nonnull)userInfo eventIds:(NSArray<NSString *> * _Nonnull)eventIds ticketSystemId:(enum ESExternalTicketSystem)ticketSystemId onCompletion:(void (^ _Nonnull)(NSArray<ESEventInfoResponse *> * _Nullable))onCompletion;
- (void)getEventProductInfoWithUserInfo:(ESUserInfo * _Nonnull)userInfo eventIds:(NSArray<NSString *> * _Nonnull)eventIds ticketSystemId:(enum ESExternalTicketSystem)ticketSystemId onCompletion:(void (^ _Nonnull)(NSArray<ESEventInfoResponse *> * _Nullable))onCompletion;
- (void)getEventInfoWithUserInfo:(ESUserInfo * _Nonnull)userInfo eventIds:(NSArray<NSString *> * _Nonnull)eventIds ticketSystemId:(enum ESExternalTicketSystem)ticketSystemId onCompletion:(void (^ _Nonnull)(NSArray<ESEventInfoResponse *> * _Nullable))onCompletion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum ESCustomStyleKeys : NSInteger;

SWIFT_CLASS("_TtC16iosExperienceSDK8ESConfig")
@interface ESConfig : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified subdomain;
@property (nonatomic, copy) NSString * _Nonnull appId;
@property (nonatomic, copy) NSString * _Nonnull appName;
@property (nonatomic, copy) NSString * _Nonnull appSource;
@property (nonatomic) BOOL canEditAccount;
@property (nonatomic) BOOL openExternalLinksInApp;
@property (nonatomic, copy) NSString * _Nullable apiKey;
@property (nonatomic, copy) NSString * _Null_unspecified apiVersion;
@property (nonatomic, copy) NSString * _Null_unspecified baseUrl;
@property (nonatomic, copy) NSString * _Nullable baseApiUrl;
- (nonnull instancetype)initWithSubdomain:(NSString * _Nonnull)subdomain appId:(NSString * _Nonnull)appId appName:(NSString * _Nonnull)appName appSource:(NSString * _Nonnull)appSource OBJC_DESIGNATED_INITIALIZER;
- (void)initApiWithApiKey:(NSString * _Nonnull)apiKey apiSubdomain:(NSString * _Nonnull)apiSubdomain apiVersion:(NSString * _Nonnull)apiVersion SWIFT_METHOD_FAMILY(none);
- (void)addCustomStyleWithStyleKey:(enum ESCustomStyleKeys)styleKey value:(NSString * _Nonnull)value;
- (NSString * _Nullable)getCustomStyleValueWithStyleKey:(enum ESCustomStyleKeys)styleKey SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_OBJC("Swift method 'ESConfig.getCustomStyleValue(styleKey:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, ESCustomStyleKeys, open) {
  ESCustomStyleKeysPRIMARY_COLOR = 0,
  ESCustomStyleKeysSECONDARY_COLOR = 1,
  ESCustomStyleKeysLEFT_BAR_BUTTON_COLOR = 2,
  ESCustomStyleKeysRIGHT_BAR_BUTTON_COLOR = 3,
  ESCustomStyleKeysFULL_SCREEN = 4,
  ESCustomStyleKeysWEB_VIEW_TOP_SPACER = 5,
  ESCustomStyleKeysWEB_VIEW_BOTTOM_SPACER = 6,
  ESCustomStyleKeysWEB_VIEW_BACKGROUND_COLOR = 7,
};

@class ESUserInfoResponse;
@class ESProductInfosResponse;

SWIFT_CLASS("_TtC16iosExperienceSDK19ESEventInfoResponse")
@interface ESEventInfoResponse : NSObject
@property (nonatomic, copy) NSString * _Nullable eventId;
@property (nonatomic, copy) NSString * _Nullable gameId;
@property (nonatomic, strong) ESUserInfoResponse * _Nullable userInfoResponse;
@property (nonatomic, strong) ESProductInfosResponse * _Nullable productInfosResponse;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16iosExperienceSDK19ESEventsDoorRequest")
@interface ESEventsDoorRequest : ESWebViewRequest
- (nonnull instancetype)initFromTicketSystemSDK:(BOOL)fromTicketSystemSDK OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)getPath SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, ESExternalTicketSystem, open) {
  ESExternalTicketSystemTICKETMASTER = 0,
  ESExternalTicketSystemOUTBOX = 1,
  ESExternalTicketSystemPACIOLAN = 2,
  ESExternalTicketSystemVERITIX = 3,
  ESExternalTicketSystemTICKETS_DOTCOM = 4,
  ESExternalTicketSystemTICKETMASTER_TAP = 5,
  ESExternalTicketSystemTICKETMASTER_DC = 6,
  ESExternalTicketSystemPACIOLAN_MODERN = 7,
  ESExternalTicketSystemEMPTY = 1000,
};


SWIFT_CLASS("_TtC16iosExperienceSDK12ESFanDetails")
@interface ESFanDetails : NSObject
@property (nonatomic, copy) NSString * _Nullable experienceId;
@property (nonatomic, copy) NSString * _Nullable externalAccountId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end


SWIFT_CLASS("_TtC16iosExperienceSDK22ESFanExperienceRequest")
@interface ESFanExperienceRequest : ESWebViewRequest
- (nonnull instancetype)initFromTicketSystemSDK:(BOOL)fromTicketSystemSDK OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithEventId:(NSString * _Nonnull)eventId fromTicketSystemSDK:(BOOL)fromTicketSystemSDK SWIFT_DEPRECATED_OBJC("Swift initializer 'ESFanExperienceRequest.init(eventId:fromTicketSystemSDK:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)initWithTicketSystem:(enum ESExternalTicketSystem)ticketSystem ticketSystemEventId:(NSString * _Nonnull)ticketSystemEventId fromTicketSystemSDK:(BOOL)fromTicketSystemSDK SWIFT_DEPRECATED_OBJC("Swift initializer 'ESFanExperienceRequest.init(ticketSystem:ticketSystemEventId:fromTicketSystemSDK:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (NSString * _Nonnull)getPath SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC16iosExperienceSDK15ESFanHubRequest")
@interface ESFanHubRequest : ESWebViewRequest
- (nonnull instancetype)initFromTicketSystemSDK:(BOOL)fromTicketSystemSDK OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)getPath SWIFT_WARN_UNUSED_RESULT;
@end

@class NSCoder;

SWIFT_CLASS("_TtC16iosExperienceSDK24ESModelWebViewController")
@interface ESModelWebViewController : UIViewController
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16iosExperienceSDK25ESPassOneHandshakeRequest")
@interface ESPassOneHandshakeRequest : ESWebViewRequest
- (nonnull instancetype)initWithProgramId:(NSString * _Nonnull)programId fromTicketSystemSDK:(BOOL)fromTicketSystemSDK OBJC_DESIGNATED_INITIALIZER SWIFT_DEPRECATED_OBJC("Swift initializer 'ESPassOneHandshakeRequest.init(programId:fromTicketSystemSDK:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (NSString * _Nonnull)getPath SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initFromTicketSystemSDK:(BOOL)fromTicketSystemSDK SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC16iosExperienceSDK28ESPassOneRegistrationRequest")
@interface ESPassOneRegistrationRequest : ESWebViewRequest
- (nonnull instancetype)initWithProgramId:(NSString * _Nonnull)programId fromTicketSystemSDK:(BOOL)fromTicketSystemSDK OBJC_DESIGNATED_INITIALIZER SWIFT_DEPRECATED_OBJC("Swift initializer 'ESPassOneRegistrationRequest.init(programId:fromTicketSystemSDK:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (NSString * _Nonnull)getPath SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initFromTicketSystemSDK:(BOOL)fromTicketSystemSDK SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC16iosExperienceSDK13ESPassRequest")
@interface ESPassRequest : ESWebViewRequest
- (nonnull instancetype)initWithProgramId:(NSString * _Nonnull)programId fromTicketSystemSDK:(BOOL)fromTicketSystemSDK OBJC_DESIGNATED_INITIALIZER SWIFT_DEPRECATED_OBJC("Swift initializer 'ESPassRequest.init(programId:fromTicketSystemSDK:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (NSString * _Nonnull)getPath SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initFromTicketSystemSDK:(BOOL)fromTicketSystemSDK SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC16iosExperienceSDK19ESPassSelectRequest")
@interface ESPassSelectRequest : ESWebViewRequest
- (nonnull instancetype)initFromTicketSystemSDK:(BOOL)fromTicketSystemSDK OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithPartnerShortCode:(NSString * _Nonnull)partnerShortCode fromTicketSystemSDK:(BOOL)fromTicketSystemSDK SWIFT_DEPRECATED_OBJC("Swift initializer 'ESPassSelectRequest.init(partnerShortCode:fromTicketSystemSDK:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (NSString * _Nonnull)getPath SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, ESPaymentProcessor, open) {
  ESPaymentProcessorSTRIPE = 0,
  ESPaymentProcessorBRAINTREE = 1,
};


SWIFT_CLASS("_TtC16iosExperienceSDK13ESPerkRequest")
@interface ESPerkRequest : ESWebViewRequest
- (nonnull instancetype)initWithPerkProgramId:(NSString * _Nonnull)perkProgramId fromTicketSystemSDK:(BOOL)fromTicketSystemSDK OBJC_DESIGNATED_INITIALIZER SWIFT_DEPRECATED_OBJC("Swift initializer 'ESPerkRequest.init(perkProgramId:fromTicketSystemSDK:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (NSString * _Nonnull)getPath SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initFromTicketSystemSDK:(BOOL)fromTicketSystemSDK SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC16iosExperienceSDK21ESProductInfoResponse")
@interface ESProductInfoResponse : NSObject
@property (nonatomic, copy) NSDate * _Nullable openDate;
@property (nonatomic, copy) NSDate * _Nullable closeDate;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16iosExperienceSDK22ESProductInfosResponse")
@interface ESProductInfosResponse : NSObject
@property (nonatomic, strong) ESProductInfoResponse * _Nullable upgrades;
@property (nonatomic, strong) ESProductInfoResponse * _Nullable sitWithFriends;
@property (nonatomic, strong) ESProductInfoResponse * _Nullable notGoing;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16iosExperienceSDK22ESReturnTicketsRequest")
@interface ESReturnTicketsRequest : ESWebViewRequest
- (nonnull instancetype)initFromTicketSystemSDK:(BOOL)fromTicketSystemSDK OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithEventId:(NSString * _Nonnull)eventId fromTicketSystemSDK:(BOOL)fromTicketSystemSDK SWIFT_DEPRECATED_OBJC("Swift initializer 'ESReturnTicketsRequest.init(eventId:fromTicketSystemSDK:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (NSString * _Nonnull)getPath SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC16iosExperienceSDK15ESSignupRequest")
@interface ESSignupRequest : ESWebViewRequest
- (nonnull instancetype)initFromTicketSystemSDK:(BOOL)fromTicketSystemSDK OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithEventId:(NSString * _Nonnull)eventId fromTicketSystemSDK:(BOOL)fromTicketSystemSDK SWIFT_DEPRECATED_OBJC("Swift initializer 'ESSignupRequest.init(eventId:fromTicketSystemSDK:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (NSString * _Nonnull)getPath SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC16iosExperienceSDK17ESTeamPassRequest")
@interface ESTeamPassRequest : ESWebViewRequest
- (nonnull instancetype)initFromTicketSystemSDK:(BOOL)fromTicketSystemSDK OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithProgramId:(NSString * _Nonnull)programId fromTicketSystemSDK:(BOOL)fromTicketSystemSDK SWIFT_DEPRECATED_OBJC("Swift initializer 'ESTeamPassRequest.init(programId:fromTicketSystemSDK:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (NSString * _Nonnull)getPath SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC16iosExperienceSDK10ESUserInfo")
@interface ESUserInfo : NSObject
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable email;
@property (nonatomic, copy) NSString * _Nullable phoneNumber;
@property (nonatomic, copy) NSString * _Nullable eventId;
@property (nonatomic, copy) NSString * _Nullable orderId;
@property (nonatomic, copy) NSString * _Nullable userAccountId;
@property (nonatomic) enum ESExternalTicketSystem ticketSystemId;
@property (nonatomic, copy) NSString * _Nullable nonce;
@property (nonatomic, copy) NSString * _Nullable paymentProcessorUserId;
@property (nonatomic) enum ESPaymentProcessor paymentProcessorId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16iosExperienceSDK18ESUserInfoResponse")
@interface ESUserInfoResponse : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (NSArray<NSNumber *> * _Nonnull)objc_productNumsUsed SWIFT_WARN_UNUSED_RESULT;
- (BOOL)hasSeatUpgrades SWIFT_WARN_UNUSED_RESULT;
- (BOOL)hasNonSeatUpgrades SWIFT_WARN_UNUSED_RESULT;
- (BOOL)hasReturned SWIFT_WARN_UNUSED_RESULT;
- (BOOL)hasModified SWIFT_WARN_UNUSED_RESULT;
- (BOOL)hasPass SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_CLASS("_TtC16iosExperienceSDK13ExperienceSDK")
@interface ExperienceSDK : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nullable ssoSigningKey;)
+ (NSString * _Nullable)ssoSigningKey SWIFT_WARN_UNUSED_RESULT;
+ (void)setSsoSigningKey:(NSString * _Nullable)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL hasUpdates;)
+ (BOOL)hasUpdates SWIFT_WARN_UNUSED_RESULT;
+ (void)setHasUpdates:(BOOL)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) ESFanDetails * _Nullable fanDetails;)
+ (ESFanDetails * _Nullable)fanDetails SWIFT_WARN_UNUSED_RESULT;
+ (void)setFanDetails:(ESFanDetails * _Nullable)value;
+ (NSString * _Nonnull)getSdkVersion SWIFT_WARN_UNUSED_RESULT;
+ (ExperienceSDK * _Nonnull)getSharedExperienceSdkWithConfig:(ESConfig * _Nonnull)config SWIFT_WARN_UNUSED_RESULT;
+ (ExperienceSDK * _Nullable)getSharedExperienceSdk SWIFT_WARN_UNUSED_RESULT;
+ (void)logout;
- (void)launchExpViewFromDeepLinkWithQueryUrl:(NSURL * _Nonnull)queryUrl userInfo:(ESUserInfo * _Nullable)userInfo;
- (void)launchExpViewInModalFromView:(UIViewController * _Nonnull)fromView userInfo:(ESUserInfo * _Nonnull)userInfo doorRequest:(ESWebViewRequest * _Nonnull)doorRequest;
+ (ESApiClient * _Nullable)getExpApiClient SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end





#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
