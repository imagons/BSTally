//
//  AddDetailController.h
//  BSTally
//
//  Created by Danyow on 16/8/4.
//  Copyright © 2016年 Danyow.Ed. All rights reserved.
//

#import "BasicViewController.h"

@interface AddDetailController : BasicViewController

+ (instancetype)addDetailControllerWithAssetsName:(NSString *)assetsName completeCallback:(void(^)())completeCallback;

@end
