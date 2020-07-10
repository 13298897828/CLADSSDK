//
//  YSTFindViewController.h
//  TestAdA
//
//  Created by lurich on 2019/12/12.
//  Copyright © 2019 YX. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YSTFindViewController : UIViewController

/** 必传参数 **/
@property (nonatomic, copy) NSString *mLocationId;
/** 用户userID **/
@property (nonatomic, copy) NSString *userId;
/** 导航栏颜色 **/
@property (nonatomic, strong) UIColor *navColor;

@end

NS_ASSUME_NONNULL_END
