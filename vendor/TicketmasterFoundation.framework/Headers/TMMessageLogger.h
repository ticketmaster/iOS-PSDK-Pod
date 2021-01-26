//
//  TMMessageLogger.h
//  TicketmasterFoundation
//
//  Created by Jonathan Backer on 3/27/17.
//  Copyright © 2017 Ticketmaster. All rights reserved.
//


#ifndef __TMMESSAGELOGGER_H__
#define __TMMESSAGELOGGER_H__

@import Foundation;

#define logTrace(format, args...) [TMMessageLogger trace:format FSQ_LOCATION , ## args]
#define logNetwork(format, args...) [TMMessageLogger network:format FSQ_LOCATION , ## args]
#define logDebug(format, args...) [TMMessageLogger debug:format FSQ_LOCATION , ## args]
#define logInfo(format, args...) [TMMessageLogger info:format FSQ_LOCATION , ## args]
#define logWarning(format, args...) [TMMessageLogger warning:format FSQ_LOCATION , ## args]
#define logError(format, args...) [TMMessageLogger error:format FSQ_LOCATION , ## args]
#define logFatal(format, args...) [TMMessageLogger fatal:format FSQ_LOCATION , ## args]

#define FSQ_LOCATION lineNumber: __LINE__ fileName: __FILE__ methodName: __PRETTY_FUNCTION__

@interface TMMessageLogger : NSObject

/// do not call TMMessageLogger.trace() directly, use logTrace() instead
+ (void) trace: (id)aFormat
    lineNumber: (int) lineNumber
      fileName: (char *)fileName
    methodName: (const char *)methodName,...;

/// do not call TMMessageLogger.network() directly, use logNetwork() instead
+ (void) network: (id)aFormat
      lineNumber: (int) lineNumber
        fileName: (char *)fileName
      methodName: (const char *)methodName,...;

/// do not call TMMessageLogger.debug() directly, use logDebug() instead
+ (void) debug: (id)aFormat
    lineNumber: (int) lineNumber
      fileName: (char *)fileName
    methodName: (const char *)methodName,...;

/// do not call TMMessageLogger.info() directly, use logInfo() instead
+ (void) info: (id)aFormat
   lineNumber: (int) lineNumber
     fileName: (char *)fileName
   methodName: (const char *)methodName,...;

/// do not call TMMessageLogger.warning() directly, use logWarning() instead
+ (void) warning: (id)aFormat
      lineNumber: (int) lineNumber
        fileName: (char *)fileName
      methodName: (const char *)methodName,...;

/// do not call TMMessageLogger.error() directly, use logError() instead
+ (void) error: (id)aFormat
    lineNumber: (int) lineNumber
      fileName: (char *)fileName
    methodName: (const char *)methodName,...;

/// do not call TMMessageLogger.fatal() directly, use logFatal() instead
+ (void) fatal: (id)aFormat
    lineNumber: (int) lineNumber
      fileName: (char *)fileName
    methodName: (const char *)methodName,...;

@end

#endif
