 

#import <UIKit/UIKit.h>

@interface YXWebViewController : UIViewController

@property(nonatomic,copy)NSString *URLString;  //链接url
@property (nonatomic, assign) BOOL show; //填NO就行
@property (nonatomic, copy) NSString *catIdStr;  //频道ID
@property (nonatomic, copy) NSString *newsIdStr;  //新闻ID
@property (nonatomic, copy) NSString *mLocationId; //内容位

@end
