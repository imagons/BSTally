//
//  PayLendDetail+CoreDataProperties.h
//  DataCenter
//
//  Created by Danyow on 16/8/7.
//  Copyright © 2016年 Danyow.Ed. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "PayLendDetail.h"

NS_ASSUME_NONNULL_BEGIN

@interface PayLendDetail (CoreDataProperties)

@property (nullable, nonatomic, retain) LendDetail *whichLendDatail;

@end

NS_ASSUME_NONNULL_END