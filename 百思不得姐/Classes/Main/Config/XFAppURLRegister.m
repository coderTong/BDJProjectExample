//
//  XFAppURLRegister.m
//  百思不得姐
//
//  Created by 付星 on 2016/11/9.
//  Copyright © 2016年 yizzuide. All rights reserved.
//

#import "XFAppURLRegister.h"
#import "XFURLManager.h"

@implementation XFAppURLRegister

+ (void)urlRegister
{
    [XFURLManager initURLGroup:@[
                                 @"xgm://indexTab",
                                 ]];
}
@end
