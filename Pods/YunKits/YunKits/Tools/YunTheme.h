//
// Created by yun on 16/11/30.
// Copyright (c) 2016 成都晟堃科技有限责任公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YunTheme : NSObject

// 默认 UIFontTextStyleHeadline
@property (nonatomic, assign) CGFloat baseFontSize;

// 默认 当前屏幕相对于6p屏幕的比列大小
@property (nonatomic, assign) CGFloat screenScale;

+ (YunTheme *)instance;

- (void)reloadDefSize;

- (UIFont *)fontWithSize:(CGFloat)size;

- (UIFont *)screenFontWithSize:(CGFloat)size;

- (UIFont *)baseFontWithSizeOffset:(CGFloat)sizeOffset;

- (UIFont *)baseFontWithSizeMultipliedBy:(CGFloat)sizeMlt;

- (UIFont *)baseScreenFontWithSizeOffset:(CGFloat)sizeOffset;

- (UIFont *)baseScreenFontWithSizeMultipliedBy:(CGFloat)sizeMlt;

- (UIFont *)fontWithName:(NSString *)name size:(CGFloat)size;

- (UIFont *)screenFontName:(NSString *)name size:(CGFloat)size;

- (UIFont *)baseFontWithName:(NSString *)name sizeOffset:(CGFloat)sizeOffset;

- (UIFont *)baseFontWithName:(NSString *)name sizeMultipliedBy:(CGFloat)sizeMlt;

- (UIFont *)baseScreenFontWithName:(NSString *)name sizeOffset:(CGFloat)sizeOffset;

- (UIFont *)baseScreenFontWithName:(NSString *)name sizeMultipliedBy:(CGFloat)sizeMlt;

- (CGFloat)screenSize:(CGFloat)size;

@end