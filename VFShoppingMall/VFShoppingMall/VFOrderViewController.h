//
//  VFOrderViewController.h
//  DKDJForDeliver
//
//  Created by 张允鹏 on 16/9/29.
//  Copyright © 2016年 gushi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZJScrollPageViewDelegate.h"
@interface VFOrderViewController : UIViewController<ZJScrollPageViewChildVcDelegate>

@property (assign ,nonatomic) NSInteger  index;

@end
