//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DRAgentLaunchAd, NSData, NSURL, UIButton, UIImage, UIImageView, UIView;

@protocol DRAgentLaunchAdDelegate <NSObject>

@optional
- (void)xhLaunchAd:(DRAgentLaunchAd *)arg1 launchAdImageView:(UIImageView *)arg2 URL:(NSURL *)arg3;
- (void)xhLaunchAdShowFinish:(DRAgentLaunchAd *)arg1;
- (void)xhLaunchAd:(DRAgentLaunchAd *)arg1 customSkipView:(UIView *)arg2 duration:(long long)arg3;
- (void)xhLaunchAd:(DRAgentLaunchAd *)arg1 videoDownLoadProgress:(float)arg2 total:(unsigned long long)arg3 current:(unsigned long long)arg4;
- (void)xhLaunchAd:(DRAgentLaunchAd *)arg1 videoDownLoadFinish:(NSURL *)arg2;
- (void)xhLaunchAd:(DRAgentLaunchAd *)arg1 imageDownLoadFinish:(UIImage *)arg2 imageData:(NSData *)arg3;
- (void)xhLaunchAd:(DRAgentLaunchAd *)arg1 clickskipButton:(UIButton *)arg2;
- (void)xhLaunchAd:(DRAgentLaunchAd *)arg1 clickAndOpenModel:(id)arg2 clickPoint:(struct CGPoint)arg3;
@end
