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

#import <UIKit/UIKit.h>
//header from StreetHawk
#import "SHTipDef.h"

/**
 Base class for tip element, providing basic functions. 
 The tip elements will be separated step by step.
 */
@interface SHTipBaseElement : NSObject

#pragma mark - public APIs

/**
 Create an instance from feed dict. Must let child class to implement.
 */
+ (instancetype)createFromFeed:(NSDictionary *)dictPayload;

/**
 Serialize this object into mutable dictionary. Must let child class to implement.
 */
- (NSDictionary *)serializeToDictionary;

/**
 Serialize this object from dictionary. Must let child class to implement.
 */
+ (instancetype)deserializeFromDictionary:(NSDictionary *)dict;

/**
 Whether equal to an object.
 */
- (BOOL)isEqual:(id)object;

#pragma mark - override APIs

/**
 Serialize this object into mutable dictionary. The excluded name properties are ignored.
 */
- (void)serializeToDictionary:(NSMutableDictionary *)dict withExcludeProperties:(NSArray<NSString *> *)arrayProperties;

/**
 Serialize this object from dictionary. The excluded name properties are ignored.
 */
- (BOOL)deserializeFromDictionary:(NSDictionary *)dict withExcludeProperties:(NSArray<NSString *> *)arrayProperties;

/**
 Whether equal to an object. The excluded name properties are ignored.
 */
- (BOOL)isEqual:(id)object withExcludeProperties:(NSArray<NSString *> *)arrayProperties;

@end
