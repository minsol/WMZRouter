//
//  BaseTabVC.h
//  WMZRouter
//
//  Created by wmz on 2018/11/13.
//  Copyright © 2018年 wmz. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaseTabVC : UITabBarController<WMZRouterProtocol>

@property(nonatomic,copy)NSString *test;

@end

NS_ASSUME_NONNULL_END
