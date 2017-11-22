//
//  NSDate+JJDateTool.h
//  JJNSDate
//
//  Created by lucy on 2017/11/22.
//  Copyright © 2017年 com.daoKeLegend. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (JJDateTool)

/**
 *  是否为今年
 */
- (BOOL)isThisYear;

/**
 *  是否是24小时
 
 @return YES或者NO
 */
- (BOOL)is24SystemHour;

/**
 *  是否为今天
 
 @return YES或者NO
 */
- (BOOL)isToday;

/**
 *  是否为昨天
 
 @return YES或者NO
 */
- (BOOL)isYesterday;

/**
 *  是否为前天
 
 @return YES或者NO
 */
- (BOOL)isTheDayBefore;

/**
 *  是否是明天
 
 @return YES或者NO
 */
- (BOOL)isTomorrow;

/**
 *  是否是当前周
 
 @return YES或者NO
 */
- (BOOL)isThisWeek;

/**
 *  根据时间戳转化为ISO 8601字符串
 
 @return 时间字符串
 */
+ (NSString *)ISO8601StringByTimeInterval:(NSTimeInterval)time;

/**
 *  根据ISO 8601字符串转化为nsdate
 
 @return NSDate
 */

+ (NSDate *)dateFromISO8601String:(NSString *)iso8601;

/**
 *  转化为ISO 8601字符串
 
 */
- (NSString *)ISO8601String;

@end
