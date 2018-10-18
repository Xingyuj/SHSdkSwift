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

@interface SHTipFeedbackElement : SHTipBaseElement

/**
 Topic title of this feedback.
 */
@property (nonatomic, strong) NSString *feedbackTitle;

/**
 Content message of this feedback.
 */
@property (nonatomic, strong) NSString *feedbackMessage;

/**
 Choice options of this feedback.
 */
@property (nonatomic, strong) NSArray *arrayOptions;

/**
 Whether allow customer to input message.
 */
@property (nonatomic) BOOL needInput;

@end
