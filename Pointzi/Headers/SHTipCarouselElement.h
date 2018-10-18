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
#import "SHTipButtonElement.h"

@interface SHTipCarouselItem : SHTipBaseElement

/**
 Id of the carousel item.
 */
@property (nonatomic, strong) NSString *suid;

/**
 Image of this carousel item. It can be a local image name, or a web download url.
 */
@property (nonatomic, strong) NSString *imageSource;

/**
 The download image. It's directly pass to paper onboarding.
 */
@property (nonatomic, strong) UIImage *image;

/**
 Icon of this carousel item. It can be a local image name, or a web download url.
 */
@property (nonatomic, strong) NSString *iconSource;

/**
 The download image. It's directly pass to paper onboarding.
 */
@property (nonatomic, strong) UIImage *icon;

/**
 Background color of this carousel.
 */
@property (nonatomic, strong) UIColor *backgroundColor;

/**
 Title text of this carousel item.
 */
@property (nonatomic, strong) NSString *titleText;

/**
 Title color of this carousel item.
 */
@property (nonatomic, strong) UIColor *titleColor;

/**
 The text's font name.
 */
@property (nonatomic, strong) NSString *titleFontName;

/**
 The text's font size.
 */
@property (nonatomic) CGFloat titleFontSize;

/**
 The text's font weight. Just keep original data from payload.
 */
@property (nonatomic, strong) NSString *titleFontWeight;

/**
 The font of title.
 */
@property (nonatomic, readonly) UIFont *titleFont;

/**
 Content text of this carousel item.
 */
@property (nonatomic, strong) NSString *contentText;

/**
 Content color of this carousel item.
 */
@property (nonatomic, strong) UIColor *contentColor;

/**
 The text's font name.
 */
@property (nonatomic, strong) NSString *contentFontName;

/**
 The text's font size.
 */
@property (nonatomic) CGFloat contentFontSize;

/**
 The text's font weight. Just keep original data from payload.
 */
@property (nonatomic, strong) NSString *contentFontWeight;

/**
 The font of content.
 */
@property (nonatomic, readonly) UIFont *contentFont;

/**
 The button on this carousel.
 */
@property (nonatomic, strong) SHTipButtonElement *button;

@end

@interface SHTipCarouselElement : SHTipBaseElement

/**
 Margin of the carousel.
 */
@property (nonatomic) FourSide margin;

/**
 The carousel's box shadow.
 */
@property (nonatomic) CGFloat boxShadow;

/**
 Color of border.
 */
@property (nonatomic, strong) UIColor *borderColor;

/**
 Width of border.
 */
@property (nonatomic) CGFloat borderWidth;

/**
 Corner radius.
 */
@property (nonatomic) CGFloat cornerRadius;

/**
 Items of the carousel content.
 */
@property (nonatomic, strong) NSArray<SHTipCarouselItem *> *items;

@end
