//
// Created by 王健 on 16/9/18.
// Copyright (c) 2016 成都晟堃科技有限责任公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YunUIBarButtonItemFactory : NSObject

+ (UIBarButtonItem *_Nonnull)barBtnWithFrame:(CGRect)btnFrame
                                         img:(NSString *_Nullable)image
                                        imgH:(CGFloat)imgH
                                      target:(id _Nullable)target
                                      action:(SEL _Nullable)action;

+ (UIBarButtonItem *_Nonnull)barBtnWithImg:(NSString *_Nullable)image
                                      imgH:(CGFloat)imgHeight
                                    target:(id _Nullable)target
                                    action:(SEL _Nullable)action;

+ (BOOL)setBarItem:(UIBarButtonItem *_Nonnull)item img:(NSString *_Nonnull)img;

@end