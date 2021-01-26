//
//  TicketmasterFoundation.h
//  TicketmasterFoundation
//
//  Created by Jonathan Backer on 11/11/19.
//  Copyright © 2019 Ticketmaster. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for TicketmasterFoundation.
FOUNDATION_EXPORT double TicketmasterFoundationVersionNumber;

//! Project version string for TicketmasterFoundation.
FOUNDATION_EXPORT const unsigned char TicketmasterFoundationVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <TicketmasterFoundation/PublicHeader.h>

// Xcode 11.2 Known Issues
//  If a module is built with BUILD_LIBRARIES_FOR_DISTRIBUTION and
//  contains a public type with the same name as the module itself,
//  clients will fail to import the module. (19481048) (FB5863238)
// Workaround: Rename either the type or the module to remove the conflict.

// import all the public objective-c headers of the framework
#import <TicketmasterFoundation/TMNetworkLogger.h>
#import <TicketmasterFoundation/TMMessageLogger.h>
