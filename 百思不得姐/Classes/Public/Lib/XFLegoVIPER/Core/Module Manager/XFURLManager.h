//
//  XFURLManager.h
//  XFLegoVIPERExample
//
//  Created by 付星 on 2016/11/7.
//  Copyright © 2016年 yizzuide. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XFURLManager : NSObject
/**
 *  一次性初始化多个URL组件
 *
 *  @param urlGroup 参数必需是NSDictionary<URLString,ModuleName>类型或NSArray<URLString(最后一个路径必需是模块名)>类型
 */
+ (void)initURLGroup:(id)urlGroup;
/**
 *  初始化单个URL组件
 *
 *  @param url URLString
 */
+ (void)register:(NSString *)url;
/**
 *  初始化单个URL组件
 *
 *  @param url        URLString
 *  @param moduleName 绑定的模块名
 */
+ (void)register:(NSString *)url forModule:(NSString *)moduleName;
/**
 *  移除单个URL组件
 *
 *  @param url URLString
 */
+ (void)remove:(NSString *)url;
/**
 *  打一个URL组件
 *
 *  @param url URLString
 *
 *  @return 打开是否成功
 */
/**
 *  打一个URL组件
 *
 *  @param url             URLString
 *  @param transitionBlock 界面切换代码
 *
 *  @return 打开是否成功
 */
+ (BOOL)open:(NSString *)url transitionBlock:(void(^)(NSString *moduleName,NSDictionary *params))transitionBlock;
@end
