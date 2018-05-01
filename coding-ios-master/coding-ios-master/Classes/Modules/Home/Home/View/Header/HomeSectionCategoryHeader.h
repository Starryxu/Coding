//
//  HomeSectionHeader.h
//  coding-ios-master
//
//  Created by 郑业强 on 2018/4/17.
//  Copyright © 2018年 kk. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomeSectionCategoryHeader : UICollectionReusableView

@property (nonatomic, strong) UIImageView *icon;

+ (instancetype)initWithCollection:(UICollectionView *)collection kind:(NSString *)kind index:(NSIndexPath *)index;
- (void)createSubView:(NSArray *)titles;

@end