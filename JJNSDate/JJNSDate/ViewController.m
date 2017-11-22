//
//  ViewController.m
//  JJNSDate
//
//  Created by lucy on 2017/11/22.
//  Copyright © 2017年 com.daoKeLegend. All rights reserved.
//

#import "ViewController.h"
#import "NSDate+JJDateTool.h"

@interface ViewController ()

@end

@implementation ViewController

#pragma mark - Override Base Function

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    NSDate *date = [NSDate date];
    BOOL isToday = [date isToday];
    NSLog(@"isToday = %d", isToday);
    
    BOOL isYesterday = [date isYesterday];
    NSLog(@"isYesterday = %d", isYesterday);
}

@end
