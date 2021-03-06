//
//  JSAnalogueStick.h
//  Controller
//
//  Created by xxxxxx on 01/02/2017.
//  Copyright (c) 2017 xxxxxx. All rights reserved.
//

#import <UIKit/UIKit.h>

@class  JSAnalogueStick;

@protocol JSAnalogueStickDelegate <NSObject>

@optional
- (void)analogueStickDidChangeValue:(JSAnalogueStick *)analogueStick;
-(void)analogueStickTouchEnd:(JSAnalogueStick *)stick;
@end

@interface JSAnalogueStick : UIView

@property (nonatomic, readonly) CGFloat xValue;
@property (nonatomic, readonly) CGFloat yValue;
@property (nonatomic, assign) BOOL invertedYAxis;

@property (nonatomic, assign) IBOutlet id <JSAnalogueStickDelegate> delegate;

@property (nonatomic, readonly) UIImageView *backgroundImageView;
@property (nonatomic, readonly) UIImageView *handleImageView;

@end
