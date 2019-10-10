//
//  JSONSupport.h
//  Rollbar
//
//  Created by Andrey Kornich on 2019-10-09.
//  Copyright © 2019 Rollbar. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol JSONSupport <NSObject>

@property (readonly) NSDictionary *data;

- (NSData *)serilaizeToJSONData;
- (BOOL)deserializeFromJSONData:(NSData *)jsonData;

- (NSString *)serilaizeToJSONString;
- (BOOL)deserializeFromJSONString:(NSString *)jsonString;

@end

NS_ASSUME_NONNULL_END
