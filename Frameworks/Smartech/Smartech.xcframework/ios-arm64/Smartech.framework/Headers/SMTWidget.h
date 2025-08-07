//
//  SMTWidget.h
//  Smartech
//
//  Created by Netcore Solutions on 09/06/25.
//  Copyright © 2025 Netcore Solutions. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SMTWidgetContent;

NS_ASSUME_NONNULL_BEGIN

@interface SMTWidget : NSObject

@property (nonatomic, assign) NSNumber *campaignId;
@property (nonatomic, assign) NSNumber *widgetId;
@property (nonatomic, strong) NSString *widgetName;
@property (nonatomic, strong) NSNumber *audienceId;
@property (nonatomic, strong) NSString *contentId;
@property (nonatomic, strong) NSString *layoutType;
@property (nonatomic, strong) SMTWidgetContent *content;
@property (nonatomic, strong) NSDictionary *customKeyValueParams;
@property (nonatomic, strong) NSDictionary *gaParams;

@property (nonatomic) BOOL isUserInControlGroup;

- (NSDictionary *)toDictionary;

@end

NS_ASSUME_NONNULL_END
