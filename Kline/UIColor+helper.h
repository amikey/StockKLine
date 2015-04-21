//
//  UIColor+helper.h
//  Kline
//
//  Created by 朱彬海 on 14-2-9.
//  Copyright (c) 2014年 朱彬海. All rights reserved.
//

#import <UIKit/UIKit.h>
@class colorModel;
@interface UIColor (helper)

+ (UIColor *) colorWithHexString: (NSString *)color withAlpha:(CGFloat)alpha;
+ (colorModel *) RGBWithHexString: (NSString *)color withAlpha:(CGFloat)alpha;

@end
