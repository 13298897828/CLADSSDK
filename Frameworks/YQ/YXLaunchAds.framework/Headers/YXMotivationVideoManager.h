//
//  YXMotivationVideoManager.h
//  LunchAd
//
//  Created by shuai on 2018/11/29.
//  Copyright © 2018 YX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class YXMotivationDelegate;
NS_ASSUME_NONNULL_BEGIN

@protocol YXMotivationDelegate <NSObject>

@optional
/**
 adValid 激励视频广告-视频-加载成功
 @param adValid 物料有效 数据不为空且没有展示过为 YES, 重复展示不计费.
 */
- (void)rewardedVideoDidLoad:(BOOL)adValid;

/**
 adValid 激励视频广告点击下载
 
 @param adValid 物料有效 数据不为空且没有展示过为 YES, 重复展示不计费.
 */
- (void)rewardedVideoDidClick:(BOOL)adValid;

/**
 adValid 激励视频广告素材加载失败
  @param error 错误对象
 */
- (void)rewardedVideoDidFailWithError:(NSError *)error;

/**
 adValid 激励视频广告播放完成
 
 @param adValid 物料有效 数据不为空且没有展示过为 YES, 重复展示不计费.
 */
- (void)rewardedVideoDidPlayFinish:(BOOL)adValid;

/**
 adValid 激励视频广告已经关闭
 */
- (void)rewardedVideoDidClose;

/**
adValid 激励视频播放页即将打开
*/
- (void)rewardVideoAdWillVisible;

/**
 adValid 激励视频广告点击了跳过按钮
 */
- (void)rewardedVideoSkipBtnClick;

@end


@interface YXMotivationVideoManager : NSObject


@property(nonatomic,weak) id<YXMotivationDelegate> delegate;

/* 用于加载视频的控制器  */
@property (nonatomic,weak) UIViewController *showAdController;

/* 媒体位 */
@property (nonatomic, copy) NSString *mediaId;

/**
 开始请求视频
 */
- (void)loadVideoPlacement;


@end

NS_ASSUME_NONNULL_END
