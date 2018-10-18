/*
 * Copyright (c) StreetHawk, All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3.0 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.
 */

#import <Foundation/Foundation.h>

/**
 Singleton to access PZApp.
 */
#define Pointzi          [PZApp sharedInstance]

/**
 Api for Pointzi. 
 */
@interface PZApp : NSObject

/**
 Singleton creator of PZApp. Normally use `Pointzi` to represent `[PZApp sharedInstance]`.
 @return Singleton PZApp instance.
 */
+ (nonnull PZApp *)sharedInstance;


/**
 Handle deeplinking url.
 @param url The received deeplinking url. 
 @return If Pointzi can handle this url, return YES; otherwise return NO.
 */
- (BOOL)openURL:(nullable NSURL *)url;

@end
