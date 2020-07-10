//
//  SFNewTaskViewController.h
//  TestAdA
//
//  Created by lurich on 2020/2/2.
//  Copyright © 2020 YX. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFNewTaskViewController : UIViewController

@property (nonatomic, copy) NSString *channelID;
@property (nonatomic, copy) NSString *vuid;
@property (nonatomic, copy) NSString *pushID;//mark值
//可选
@property (nonatomic, strong) UIImage *backImage;
@property (nonatomic, assign) BOOL isAddNavigation;

@end

NS_ASSUME_NONNULL_END
