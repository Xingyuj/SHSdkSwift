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

#import "SHTipElement.h"

/**
 Enum for pointzi result. 
 Same as SHResult but cannot incude SHResult's header file otherwise pod Pointzi and StreetHawk conflict.
 */
enum SHPointziResult
{
    /**
     Result when click positive button such as "Agree", "Yes Please".
     */
    SHPointziResult_Accept = 1,
    /**
     Result when click neutral button such as "Later", "Not now".
     */
    SHPointziResult_Postpone = 0,
    /**
     Result when click negative button such as "Never", "Cancel".
     */
    SHPointziResult_Decline = -1,
};
typedef enum SHPointziResult SHPointziResult;

/**
 Pointzi object definition.
 */
@interface SHPointziObject : NSObject

/**
 A unique identifier for the item.
 */
@property (nonatomic, strong) NSString *suid;

/**
 Title of this item.
 */
@property (nonatomic, strong) NSString *title;

/**
 Message of this item.
 */
@property (nonatomic, strong) NSString *message;

/**
 Campaign this item belongs to.
 */
@property (nonatomic, strong) NSString *campaign;

/**
 Json content, parse to NSDictionary.
 */
@property (nonatomic, strong) NSDictionary *content;

/**
 A timestamp when the item activates (it will not be visible to clients before). It's possible to be nil.
 */
@property (nonatomic, strong) NSDate *activates;

/**
 A timestamp when the item expires (it will not be visible to clients after). It's possible to be nil.
 */
@property (nonatomic, strong) NSDate *expires;

/**
 When the item item has been created.
 */
@property (nonatomic, strong) NSDate *created;

/**
 When the item item was modified the last time.
 */
@property (nonatomic, strong) NSDate *modified;

/**
 When the item item was deleted.
 */
@property (nonatomic, strong) NSDate *deleted;

/**
 Send ack for this item.
 */
- (void)sendAck;

/**
 Send result for this item.
 */
- (void)sendResult:(SHPointziResult)result;

@end

/**
 FAQ object definition. It's feed with display marked "faq".
 */
@interface SHPointziFAQObject : SHPointziObject

@end

/**
 Feed object definition. It's feed with display marked "feed".
 */
@interface SHPointziFeedObject : SHPointziObject

@end

@interface SHPointziApi : NSObject

/**
 Fetch FAQ items.
 @param handler Callback for fetch handler, which return NSArray of SHPointziFAQObject and error if meet.
 */
+ (void)fetchFAQWithHandler:(void (^)(NSArray<SHPointziFAQObject *> *arrayFAQ, NSError * error))handler;

/**
 Fetch Feed items.
 @param handler Callback for fetch handler, which return NSArray of SHPointziFeedObject and error if meet.
 */
+ (void)fetchFeedWithHandler:(void (^)(NSArray<SHPointziFeedObject *> *arrayFeed, NSError * error))handler;

@end
