//
//  TMNetworkLogger.h
//  TicketmasterFoundation
//
//  Created by Jonathan Backer on 9/12/19.
//  Copyright © 2019 Ticketmaster. All rights reserved.
//

#ifndef __TMNETWORKLOGGER_H__
#define __TMNETWORKLOGGER_H__

#import <TicketmasterFoundation/TMMessageLogger.h>

#define logSendRequest(urlRequest) [TMNetworkLogger logSendRequestPath:urlRequest FSQ_LOCATION]
#define logReceiveResponse(urlResponse, urlRequest, urlData, urlError, duration) [TMNetworkLogger logReceiveURLResponse:urlResponse forRequest:urlRequest data:urlData error:urlError duration:duration FSQ_LOCATION]

@interface TMNetworkLogger : NSObject

/// do not call TMNetworkLogger.logSendRequestPath() directly, use logSendRequest() instead
+ (void)logSendRequestPath:(nonnull NSURLRequest *)request
                lineNumber:(int)lineNumber
                  fileName:(nonnull char *)fileName
                methodName:(nonnull const char *)methodName;

/// do not call TMNetworkLogger.logReceiveURLResponse() directly, use logReceiveResponse() instead
+ (void)logReceiveURLResponse:(nonnull NSURLResponse *)response
                   forRequest:(nonnull NSURLRequest *)request
                         data:(nullable NSData *)data
                        error:(nullable NSError *)error
                     duration:(NSTimeInterval)duration
                   lineNumber:(int)lineNumber
                     fileName:(nonnull char *)fileName
                   methodName:(nonnull const char *)methodName;

@end

#endif
