//
//  SmartechConfig.h
//  Smartech
//
//  Created by Netcore Solutions on 04/03/25.
//  Copyright © 2025 Netcore Solutions. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SmartechConfig : NSObject

@property (nonatomic, strong, nullable) NSString *customInitUrl;
@property (nonatomic, strong, nullable) NSString *smartechAppId;
@property (nonatomic, strong, nullable) NSString *appGroup;
@property (nonatomic, strong, nullable) NSString *hanselAppId;
@property (nonatomic, strong, nullable) NSString *hanselAppKey;
@property (nonatomic, assign, readwrite) BOOL isHanselDisabled;
@property (nonatomic, assign, readwrite) BOOL isInternetCheckDisabled;

+ (instancetype)sharedInstance;

- (void)saveData;

- (BOOL)isSmartechConfigInitialized;

@end

NS_ASSUME_NONNULL_END
