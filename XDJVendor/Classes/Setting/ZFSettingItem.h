//
//  ZFSettingItem.h
//  ZFSetting
//
//  Created by 任子丰 on 15/9/19.
//  Copyright (c) 2013年 任子丰. All rights reserved.
//  一个Item对应一个Cell
// 用来描述当前cell里面显示的内容，描述点击cell后做什么事情

#import <Foundation/Foundation.h>

typedef enum : NSInteger{
    ZFSettingItemTypeNone, // 什么也没有
    ZFSettingItemTypeArrow, // 箭头
    ZFSettingItemTypeSwitch, // 开关
    ZFSettingItemTypeSubTitle // 子标题 add by csh
} ZFSettingItemType;

@interface ZFSettingItem : NSObject
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, assign) ZFSettingItemType type;// Cell的样式
/** cell上开关的操作事件 */
@property (nonatomic, copy) void (^switchBlock)(BOOL on) ;
@property (nonatomic, copy) void (^operation)() ; // 点击cell后要执行的操作

+ (id)itemWithIcon:(NSString *)icon title:(NSString *)title type:(ZFSettingItemType)type;
/**
 *  有子标题的时候  项目需要增加的方法
 *
 *  @param icon  <#icon description#>
 *  @param title <#title description#>
 *  @param title <#title description#>
 *
 *  @return <#return value description#>
 */
+ (id)itemWithIcon:(NSString *)icon title:(NSString *)title subTitle:(NSString *)subTitle;
@end
