//
//  ZXApplication.h
//  ZXTools
//
//  Created by 张 玺 on 12-9-4.
//  Copyright (c) 2012年 张玺. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZXApplication : NSObject


+(NSString *)documentPath;
+(NSString *)appVersion;
+(BOOL)isJailBreak;
+(float)iOSVersion;     //返回iOS版本号，整形，例如 3,4,5
+(BOOL)isIpad;
+(NSString *)language;




+(void)showInfo;
@end