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

#define TagButtonLauncher  888900

@class SHTipElement;

@interface SHTipLauncherElement : SHTipBaseElement

/**
 The trigger is launcher, and its indicator's image.
 */
@property (nonatomic, strong) NSString *image;

/**
 The trigger is launcher, and its indicator's placement.
 */
@property (nonatomic) SHTipPlacement placement;

/**
 TThe trigger is launcher, and its indicator's width.
 */
@property (nonatomic) CGFloat width;

/**
 The trigger is launcher, and its indicator's height.
 */
@property (nonatomic) CGFloat height;

/**
 The trigger is launcher, and its indicator's color.
 */
@property (nonatomic, strong) UIColor *color;

/**
 The trigger is launcher, and its indicator's background color.
 */
@property (nonatomic, strong) UIColor *backgroundColor;

/**
 The trigger is launcher, and its indicator's padding.
 */
@property (nonatomic) FourSide padding;

/**
 The trigger is launcher, and its indicator's top margin.
 */
@property (nonatomic) FourSide margin;

/**
 Utility for adding launcher button.
 */
+ (UIButton *)addLauncherForTip:(SHTipElement *)tip forTargetControl:(UIView *)launcherTarget;

@end
