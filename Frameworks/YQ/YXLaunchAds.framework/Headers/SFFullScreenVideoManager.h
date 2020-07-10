//
//  SFFullScreenVideoManager.h
//  TestAdA
//
//  Created by lurich on 2020/4/7.
//  Copyright © 2020 YX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SFFullScreenVideoDelegate <NSObject>

@optional
/**
 全屏视频广告-视频-加载成功
 @param adValid 物料有效 数据不为空且没有展示过为 YES, 重复展示不计费.
 */
- (void)fullScreenVideoDidLoad:(BOOL)adValid;

/**
 全屏视频广告点击下载
 
 @param adValid 物料有效 数据不为空且没有展示过为 YES, 重复展示不计费.
 */
- (void)fullScreenVideoDidClick:(BOOL)adValid;

/**
 全屏视频广告点击跳过
 
 @param adValid 物料有效 数据不为空且没有展示过为 YES, 重复展示不计费.
 */
- (void)fullScreenVideoDidSkipClick:(BOOL)adValid;

/**
 全屏视频广告素材加载失败
  @param error 错误对象
 */
- (void)fullScreenVideoDidFailWithError:(NSError *)error;

/**
 全屏视频广告播放完成
 
 @param adValid 物料有效 数据不为空且没有展示过为 YES, 重复展示不计费.
 */
- (void)fullScreenVideoDidPlayFinish:(BOOL)adValid;

/**
 全屏视频广告已经关闭
 */
- (void)fullScreenVideoDidClose;

/**
 全屏视频广告播放页即将打开
*/
- (void)fullScreenVideoAdWillVisible;

@end

@interface SFFullScreenVideoManager : NSObject


@property(nonatomic,weak) id<SFFullScreenVideoDelegate> delegate;

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
