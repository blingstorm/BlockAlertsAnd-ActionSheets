//
//  BlockBackground.h
//  arrived
//
//  Created by Gustavo Ambrozio on 29/11/11.
//  Copyright (c) 2011 N/A. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BlockBackground : UIWindow {
@private
    UIWindow *_previousKeyWindow;
}

+ (BlockBackground *) sharedInstance;

- (void)addToMainWindow:(UIView *)view;
- (void)reduceAlphaIfEmpty;
- (void)removeView:(UIView *)view;

@property (nonatomic) UIImage *backgroundImage;
@property (nonatomic, readwrite) BOOL vignetteBackground;
@property (retain) UIWindow *_previousKeyWindow;

@end
