//
//  HomeModel.h
//  coding-ios-master
//
//  Created by MAC on 2018/4/21.
//  Copyright © 2018年 kk. All rights reserved.
//

#import "BaseModel.h"

/// 轮播图
@interface HomeAdModel : BaseModel
@property (nonatomic, copy  ) NSString *image;
@property (nonatomic, copy  ) NSString *url;
@end

/// 分类
@interface HomeSortModel : BaseModel
@property (nonatomic, copy  ) NSString *objectId;   // id
@property (nonatomic, copy  ) NSString *title;      // 标题
@property (nonatomic, copy  ) NSString *image;      // 图片
@property (nonatomic, assign) NSInteger number;     // 查看人数
@end

/// 推荐
@interface HomeRecommendModel : BaseModel
@property (nonatomic, copy  ) NSString *objectId;   // id
@property (nonatomic, copy  ) NSString *title;      // 标题
@property (nonatomic, copy  ) NSString *image;      // 图片
@property (nonatomic, assign) NSInteger number;     // 查看人数
@end

/// 热门
@interface HomeHotModel : BaseModel
/// id
@property (nonatomic, copy  ) NSString *objectId;
/// 标题
@property (nonatomic, copy  ) NSString *title;
/// 图片
@property (nonatomic, copy  ) NSString *image;
/// 人数
@property (nonatomic, assign) NSInteger number;
/// tag
@property (nonatomic, strong) NSArray<TagModel *> *tag;
@end


/// 首页Model
@interface HomeModel : BaseModel
/// 轮播图
@property (nonatomic, strong) NSArray<HomeAdModel *> *ad;
/// 头条
@property (nonatomic, strong) NSArray<NSString *> *headlines;
/// 技术点
@property (nonatomic, strong) NSArray<TechnicalModel *> *technical;
/// 分类
@property (nonatomic, strong) NSArray<HomeSortModel *> *sort;
/// 推荐
@property (nonatomic, strong) NSArray<HomeRecommendModel *> *recommend;
/// 推荐
@property (nonatomic, strong) NSArray<HomeHotModel *> *hot;
/// 组头试图
@property (nonatomic, strong) NSArray<NSString *> *sectionHeader;
@end


