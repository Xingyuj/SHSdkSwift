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
#import "SHTipDef.h"
#import "SHTipImageElement.h"
#import "SHTipTextElement.h"
#import "SHTipButtonElement.h"
#import "SHTipWebElement.h"
#import "SHTipDismissElement.h"
#import "SHTipLauncherElement.h"
#import "SHTipCoachmarkElement.h"
#import "SHTipTargetElement.h"
#import "SHTipSeriesElement.h"
#import "SHTipAnimationElement.h"
#import "SHTipCarouselElement.h"
#import "SHTipFeedbackElement.h"

@interface SHTipElement : SHTipBaseElement

/**
 "id" field of a tip. It's unique in a series.
 */
@property (nonatomic, strong) NSString *suid;

/**
 A unique identifier for the containing feed. This is got from parent feed object.
 */
@property (nonatomic) NSString * feed_id;

/**
 Type of current tip.
 */
@property (nonatomic) SHTipType tipType;

/**
 The view string of current tip.
 */
@property (nonatomic, strong) NSString *view;

/**
 Target of current tip.
 */
@property (nonatomic, strong) SHTipTargetElement *target;

/**
 Position of the tip relative to target UI element.
 */
@property (nonatomic) SHTipPlacement placement;

/**
 Delay seconds before this tip show.
 */
@property (nonatomic) double delaySeconds;

/**
 The tip's padding.
 */
@property (nonatomic) FourSide padding;

/*
 The tip's margin.
 */
@property (nonatomic) FourSide margin;

/**
 The tip's box shadow.
 */
@property (nonatomic) CGFloat boxShadow;

/**
 Background of the tip.
 */
@property (nonatomic, strong) UIColor *backgroundColor;

/**
 The tip's border color.
 */
@property (nonatomic, strong) UIColor *borderColor;

/**
 The tip's border width.
 */
@property (nonatomic) CGFloat borderWidth;

/**
 The tip's border corner radius.
 */
@property (nonatomic) CGFloat borderCornerRadius;

/**
 The tip's width if `tipPercentage` not exist.
 */
@property (nonatomic) CGFloat width;

/**
 The tip's height if `tipPercentage` not exist.
 */
@property (nonatomic) CGFloat height;

/**
 The color of overlay of the tip.
 */
@property (nonatomic, strong) UIColor *overlayColor;

/**
 The transparency of the overlay.
 */
@property (nonatomic) CGFloat overlayAlpha;

/**
 The coach mark of the tip.
 */
@property (nonatomic, strong) SHTipCoachmarkElement *coachmark;

/**
 The carousel of the tip.
 */
@property (nonatomic, strong) SHTipCarouselElement *carousel;

/**
 The feedback of the tip.
 */
@property (nonatomic, strong) SHTipFeedbackElement *feedback;

/**
 The array of images.
 */
@property (nonatomic, strong) NSArray<SHTipImageElement *> *arrayImages;

/**
 The structure of title.
 */
@property (nonatomic, strong) SHTipTextElement *title;

/**
 The structure of content.
 */
@property (nonatomic, strong) SHTipTextElement *content;

/**
 Web structure of this tip.
 */
@property (nonatomic, strong) SHTipWebElement *web;

/**
 Button Prev of the tip.
 */
@property (nonatomic, strong) SHTipButtonElement *prev;

/**
 Button Next of the tip.
 */
@property (nonatomic, strong) SHTipButtonElement *next;

/**
 Pair of predefined buttons. //TODO: not implement now.
 */
@property (nonatomic, strong) NSString *pair;

/**
 Whether buttons layout horizontal.
 */
@property (nonatomic) BOOL isHorizontal;

/**
 Whether dismiss the tip (equal next button is clicked) when touching inside of the tip.
 */
@property (nonatomic) BOOL dismissWhenTouchInside;

/**
 Whether dismiss the tip (equal next button is clicked) when touching outside of the tip.
 */
@property (nonatomic) BOOL dismissWhenTouchOutside;

/**
 Dismiss button of the tip.
 */
@property (nonatomic, strong) SHTipDismissElement *dismiss;

/**
 Animation of the tip.
 */
@property (nonatomic, strong) SHTipAnimationElement *animation;

/**
 Weak reference to containing series. This is assigned when a tip is added into a series.
 */
@property (nonatomic, weak) SHTipSeriesElement *series;

/**
 Weak reference to this tip's view controller. It's assigned when showing a view controller and match this tip's. In a series the tips' view controller can be different in case of multiple page.
 */
@property (nonatomic, weak) UIViewController *viewController;

/**
 Weak reference of the target control which this tip is aligned with. It's assigned when parsing tip for a view controller. It decides the position of tip.
 */
@property (nonatomic, weak) UIView *targetControl;

@end

