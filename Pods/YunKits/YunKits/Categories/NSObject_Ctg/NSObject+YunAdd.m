//
//  Created by yun on 16/5/15.
//  Copyright © 2016年 成都晟堃科技有限责任公司. All rights reserved.
//

#import "NSObject+YunAdd.h"
#import <objc/runtime.h>

@implementation NSObject (YunAdd)

- (id)yunDeepCopy {
    id obj = nil;
    @try {
        obj = [NSKeyedUnarchiver unarchiveObjectWithData:[NSKeyedArchiver archivedDataWithRootObject:self]];
    }
    @catch (NSException *exception) {
        NSLog(@"%@", exception);
    }
    return obj;
}

/* 获取对象的所有属性 */
- (NSDictionary *)getAllProperties {
    NSMutableDictionary *props = [NSMutableDictionary dictionary];

    unsigned int outCount, i;
    objc_property_t *properties = class_copyPropertyList([self class], &outCount);
    for (i = 0; i < outCount; i++) {
        objc_property_t property = properties[i];
        const char *char_f = property_getName(property);
        NSString *propertyName = [NSString stringWithUTF8String:char_f];
        id propertyValue = [self valueForKey:propertyName];
        if (propertyValue) {props[propertyName] = propertyValue;}
    }

    free(properties);

    return props;
}

/* 获取对象的所有方法 */
- (void)printAllMethods {
    unsigned int mothCout_f = 0;
    Method *mothList_f = class_copyMethodList([self class], &mothCout_f);

    for (int i = 0; i < mothCout_f; i++) {
        Method temp_f = mothList_f[i];
        const char *name_s = sel_getName(method_getName(temp_f));
        int arguments = method_getNumberOfArguments(temp_f);
        const char *encoding = method_getTypeEncoding(temp_f);
        NSLog(@"方法名：%@,参数个数：%d,编码方式：%@", [NSString stringWithUTF8String:name_s],
              arguments,
              [NSString stringWithUTF8String:encoding]);
    }

    free(mothList_f);
}

@end
