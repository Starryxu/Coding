//
//  HomeView.h
//  iOS
//
//  Created by 郑业强 on 2018/4/1.
//  Copyright © 2018年 郑业强. All rights reserved.
//

#import "BaseView.h"

#pragma mark - 代理
@protocol HomeViewDelegate<NSObject>

@optional
- (void)homeCollection:(UICollectionView *)collection didSelectItemAtIndexPath:(NSIndexPath *)indexPath;

@end

#pragma mark - 声明
@interface HomeView : BaseView

@property (nonatomic, weak  ) id<HomeViewDelegate> delegate;

+ (instancetype)init;

@end
