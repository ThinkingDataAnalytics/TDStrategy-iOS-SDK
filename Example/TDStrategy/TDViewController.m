//
//  TDViewController.m
//  TDStrategy
//
//  Created by 杨雄 on 02/27/2024.
//  Copyright (c) 2024 杨雄. All rights reserved.
//

#import "TDViewController.h"
#import <ThinkingDataCore/ThinkingDataCore.h>
#import <ThinkingSDK/ThinkingSDK.h>
#import <TDStrategy/TDStrategy.h>

@interface TDViewController ()

@end

@implementation TDViewController

- (void)viewDidLoad
{
    [super viewDidLoad];

    self.view.backgroundColor = [UIColor cyanColor];
    
    NSString *appId = @"app_id";
    NSString *serverUrl = @"server_url";
    
    TDSettings *settings = [[TDSettings alloc] init];
    settings.appId = appId;
    settings.serverUrl = serverUrl;
    settings.enableLog = YES;
    [TDApp startWithSetting:settings];
    
    [TDAnalytics track:@"test"];
    [TDAnalytics flush];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
