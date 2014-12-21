//
//  UIView+Tools.h
//  shike
//
//  Created by Mango on 14/12/12.
//  Copyright (c) 2014年 shixun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Tools)

//将正方形的View裁剪为圆形
- (void)ClipSquareViewToRound;



//封装gestureRecognizer到UIView中，用的时候直接把需触发的block传入即可
- (void)touchEndedBlock:(void(^)(UIView *selfView))block;

- (void)touchEndedGesture;

- (void)longPressEndedBlock:(void(^)(UIView *selfView))block;

- (void)longPressEndedGesture:(UIGestureRecognizer*)gesture;
@end