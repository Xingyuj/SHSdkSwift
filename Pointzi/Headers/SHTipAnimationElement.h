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

#import "SHTipBaseElement.h"
#import "SHTipDef.h"

@interface SHTipAnimationElement : SHTipBaseElement

/**
 Animation type when transition in
 */
@property (nonatomic) SHTipAnimationType inType;

/**
 Animation duration when transition in
 */
@property (nonatomic) CGFloat inDuration;

/**
 Animation direction when transition in
 */
@property (nonatomic) SHTipAnimationDirection inDirection;

/**
 Animation type when transition out
 */
@property (nonatomic) SHTipAnimationType outType;

/**
 Animation duration when transition out
 */
@property (nonatomic) CGFloat outDuration;

/**
 Animation direction when transition out
 */
@property (nonatomic) SHTipAnimationDirection outDirection;

@end
