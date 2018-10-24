//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LZMLiveModel, LZMLiveUrlModel, LZMReportInfoModel;

@protocol LZMPlayerDelegate <NSObject>

@optional
- (void)rePlay;
- (void)playEnd;
- (void)playerSearchThirdPlay:(long long)arg1;
- (void)isCollect:(_Bool)arg1;
- (void)playerLoadNextPageSection:(long long)arg1;
- (void)playerChooseSection:(long long)arg1;
- (void)playerNextSection;
- (void)playerChooseNumber:(long long)arg1;
- (void)playerNextNumber;
- (void)playerWebPlay;
- (void)playerRefreshError;
- (void)playerAutoChangeSourceManage:(LZMLiveUrlModel *)arg1;
- (void)playerChanngeChannel:(LZMLiveModel *)arg1;
- (void)playerChangeSource:(LZMLiveUrlModel *)arg1;
- (void)playerReportError:(long long)arg1 withErrorInfo:(LZMReportInfoModel *)arg2;
- (void)playerBackAction;
@end
