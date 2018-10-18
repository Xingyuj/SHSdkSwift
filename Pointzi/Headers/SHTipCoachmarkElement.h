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

@interface SHTipCoachmarkElement : SHTipBaseElement

/**
 The highlight style of coach mark.
 */
@property (nonatomic) SHCoachMarkStyle style;

/**
 The highlight corner radius of coach mark.
 */
@property (nonatomic) CGFloat cornerRadius;

/**
 The highlight width of coach mark.
 */
@property (nonatomic) CGFloat width;

/**
 The highlight height of coach mark.
 */
@property (nonatomic) CGFloat height;

/**
 The diffuse of coach mark.
 */
@property (nonatomic) SHCoachMarkDiffuse diffuse;

@end
