//
//  DiscoveryHeader.m
//  coding-ios-master
//
//  Created by MAC on 2018/4/19.
//  Copyright © 2018年 kk. All rights reserved.
//

#import "DiscoveryHeader.h"

#pragma mark - 声明
@interface DiscoveryHeader()

@end

#pragma mark - 实现
@implementation DiscoveryHeader

+ (instancetype)initWithFrame:(CGRect)frame {
    DiscoveryHeader *view = [DiscoveryHeader loadCode:frame];
    view.backgroundColor = MediumColor;
    return view;
}

@end