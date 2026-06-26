//
//  SMTHostValidator.h
//  Smartech
//
//  Created by Netcore Solutions on 03/06/26.
//  Copyright © 2026 Netcore Solutions. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SMTHostValidator : NSObject

+ (instancetype)sharedInstance;

/**
 @brief Returns whether a URL is allowed to load inside a Smartech WKWebView.

 @discussion When `SmartechConfig.enableTrustedHostsValidation` is NO, all URLs are allowed.
             When YES, the URL must use https with no userinfo or explicit port, and its host must
             match an entry from `SmartechConfig.inAppTrustedHosts` (exact host, subdomain of that
             host, or URL prefix match — aligned with Android trusted-host validation).

 @param url The URL to validate.
 @return YES if the URL may load in the webview; NO otherwise.
 */
- (BOOL)isURLAllowedForWebView:(NSURL * _Nullable)url;

@end

NS_ASSUME_NONNULL_END
