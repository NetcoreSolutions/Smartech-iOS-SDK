//
//  SMTWidgetContent.h
//  Smartech
//
//  Created by Netcore Solutions on 14/06/25.
//  Copyright © 2025 Netcore Solutions. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SMTWidgetActionButton;

NS_ASSUME_NONNULL_BEGIN

@interface SMTWidgetContent : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) NSString *mediaUrl;
@property (nonatomic, strong) NSString *deeplink;
@property (nonatomic, strong) NSString *backgroundColor;
@property (nonatomic, strong) NSArray *backgroundGradientColor;
@property (nonatomic, strong) NSArray<SMTWidgetActionButton *> *actionButtons;
@property (nonatomic, strong) NSDictionary *json;
@property (nonatomic, strong) NSDictionary *customKeyValueParams;

- (NSDictionary *)toNSDictionary;

@end


@interface SMTWidgetActionButton : NSObject

@property (nonatomic, strong) NSString *actionName;
@property (nonatomic, strong) NSString *actionDeeplink;
@property (nonatomic, assign) NSInteger actionType;
@property (nonatomic, strong) NSString *cpText;
@property (nonatomic, strong) NSString *backgroundColor;
@property (nonatomic, strong) NSString *textColor;

- (NSDictionary *)toNSDictionary;

+ (NSArray *)toDictionaryArray:(NSArray <SMTWidgetActionButton *> *)actionButtonArray;

@end

NS_ASSUME_NONNULL_END
