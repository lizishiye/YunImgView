//
// Created by yun on 2017/11/28.
// Copyright (c) 2017 skkj. All rights reserved.
//

#import "YunImgViewConfig.h"

@interface YunImgViewConfig () {
}

@end

@implementation YunImgViewConfig

+ (YunImgViewConfig *)instance {
    static YunImgViewConfig *_instance = nil;

    @synchronized (self) {
        if (_instance == nil) {
            _instance = [[self alloc] init];
        }
    }

    return _instance;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _compressSize = 300;
    }

    return self;
}

@end