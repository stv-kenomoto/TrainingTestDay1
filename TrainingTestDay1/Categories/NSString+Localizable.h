//
//  NSString+Localizable.h
//  TrainingTestDay1
//
//  Created by Kouki Enomoto on 2016/12/22.
//  Copyright © 2016年 enomt. All rights reserved.
//

@import UIKit;

@interface NSString (Localizable)

UIKIT_EXTERN NSString *const NSStringCalendarTitleFormat;
UIKIT_EXTERN NSString *const NSStringDayFormat;
UIKIT_EXTERN NSString *const NSStringWeekFormat;

- (NSString *)localized;

@end
