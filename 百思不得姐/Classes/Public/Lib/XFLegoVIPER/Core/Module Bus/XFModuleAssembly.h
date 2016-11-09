//
//  XFModuleAssembly.h
//  XFLegoVIPER
//
//  Created by 付星 on 2016/11/3.
//  Copyright © 2016年 yizzuide. All rights reserved.
//

#import <Foundation/Foundation.h>

@class XFRouting;
@interface XFModuleAssembly : NSObject

/**
 *  路由
 */
@property (nonatomic, weak) XFRouting *fromRouting;

/**
 *  初始化方法
 *
 *  @param fromRouting 路由
 *
 *  @return XFEventBus
 */
- (instancetype)initWithFromRouting:(XFRouting *)fromRouting;

/**
 *  通过Nav或Nib快速组建一个模块
 *
 *  @param navName               导航
 *  @param ibSymbol              ibSymbol
 *  @param DataManagerName 数据管理名
 *
 *  @return Routing
 */
- (__kindof XFRouting *)autoAssemblyModuleWithNav:(NSString *)navName ibSymbol:(NSString *)ibSymbol dataManagerName:(NSString *)dataManagerName;

/**
 *  构建关系层
 *
 *  @param activityClass    视图层
 *  @param navigatorClass   导航层
 *  @param perstentClass    交互层
 *  @param interactorClass  业务层
 *
 *  @return Routing
 */
- (__kindof XFRouting *)buildModulesAssemblyWithActivityClass:(Class)activityClass
                                       navigatorClass:(Class)navigatorClass
                                       presenterClass:(Class)perstentClass
                                      interactorClass:(Class)interactorClass
                                     dataManagerClass:(Class)dataManagerClass;

/**
 *  构建关系层(视图从xib或storyboard中加载)
 *
 *  @param ibSymbol         使用字符串符号加载视图（xib:x-xibName[-activityClass],Storyboard:s-storyboardName-controllerIdentifier）
 *  @param perstentClass    交互层
 *  @param interactorClass  业务层
 *  @param dataManagerClass 数据层
 *
 *  @return Routing
 */
- (__kindof XFRouting *)buildModulesAssemblyWithIB:(NSString *)ibSymbol
                           presenterClass:(Class)perstentClass
                          interactorClass:(Class)interactorClass
                         dataManagerClass:(Class)dataManagerClass;
@end
