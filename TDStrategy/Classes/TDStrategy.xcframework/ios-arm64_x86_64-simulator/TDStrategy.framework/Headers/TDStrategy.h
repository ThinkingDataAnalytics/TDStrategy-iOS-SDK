//
//  TDStrategy.h
//  TDStrategy
//
//  Created by 杨雄 on 2024/2/27.
//

#import <Foundation/Foundation.h>

#if __has_include(<TDStrategy/TDStrategyTriggerDelegate.h>)
#import <TDStrategy/TDStrategyTriggerDelegate.h>
#else
#import "TDStrategyTriggerDelegate.h"
#endif

#if __has_include(<TDStrategy/TDStrategySettings.h>)
#import <TDStrategy/TDStrategySettings.h>
#else
#import "TDStrategySettings.h"
#endif

#if __has_include(<TDStrategy/TDStrategyResult.h>)
#import <TDStrategy/TDStrategyResult.h>
#else
#import "TDStrategyResult.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface TDStrategy : NSObject

+ (void)enableLog:(BOOL)enable;
+ (void)startWithSettings:(TDStrategySettings *)settings;
+ (void)setTriggerDelegate:(id<TDStrategyTriggerDelegate>)delegate;
+ (NSString *)version;

@end

NS_ASSUME_NONNULL_END
