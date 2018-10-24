//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LZMViewController.h"

#import "LZMAdManagerDelegate.h"
#import "LZMPlayBackDelegate.h"
#import "LZMPlayerDelegate.h"

@class LZMAnalysisModel, LZMDownloadModel, LZMImageView, LZMLongVideoAnalysisManager, LZMPlayerModel, LZMPlayerView, LZMSourceInfoModel, LZMVideoContrlView, LZMVideoModel, NSMutableArray, NSString, NSTimer;

@interface LZMVideoPlayViewController : LZMViewController <LZMPlayerDelegate, LZMPlayBackDelegate, LZMAdManagerDelegate>
{
    _Bool _isFromHistory;
    _Bool _isVideoShow;
    _Bool _startVideo;
    _Bool _isCanGoWeb;
    _Bool _isAutoChange;
    LZMVideoModel *_videoModel;
    LZMDownloadModel *_downloadModel;
    NSString *_wherePushStr;
    NSString *_categoryStr;
    LZMImageView *_playerFatherView;
    LZMVideoContrlView *_videoContrlView;
    LZMPlayerModel *_playerModel;
    LZMPlayerView *_player;
    NSTimer *_playerStatsTimer;
    NSMutableArray *_sourceList;
    LZMLongVideoAnalysisManager *_analysisManager;
    LZMAnalysisModel *_analysisModel;
    long long _targetId;
    LZMSourceInfoModel *_sourceInfo;
    NSString *_fullScreen;
}

@property(nonatomic) _Bool isAutoChange; // @synthesize isAutoChange=_isAutoChange;
@property(nonatomic) _Bool isCanGoWeb; // @synthesize isCanGoWeb=_isCanGoWeb;
@property(nonatomic) _Bool startVideo; // @synthesize startVideo=_startVideo;
@property(nonatomic) _Bool isVideoShow; // @synthesize isVideoShow=_isVideoShow;
@property(copy, nonatomic) NSString *fullScreen; // @synthesize fullScreen=_fullScreen;
@property(retain, nonatomic) LZMSourceInfoModel *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(nonatomic) long long targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) LZMAnalysisModel *analysisModel; // @synthesize analysisModel=_analysisModel;
@property(retain, nonatomic) LZMLongVideoAnalysisManager *analysisManager; // @synthesize analysisManager=_analysisManager;
@property(retain, nonatomic) NSMutableArray *sourceList; // @synthesize sourceList=_sourceList;
@property(retain, nonatomic) NSTimer *playerStatsTimer; // @synthesize playerStatsTimer=_playerStatsTimer;
@property(retain, nonatomic) LZMPlayerView *player; // @synthesize player=_player;
@property(retain, nonatomic) LZMPlayerModel *playerModel; // @synthesize playerModel=_playerModel;
@property(retain, nonatomic) LZMVideoContrlView *videoContrlView; // @synthesize videoContrlView=_videoContrlView;
@property(retain, nonatomic) LZMImageView *playerFatherView; // @synthesize playerFatherView=_playerFatherView;
@property(copy, nonatomic) NSString *categoryStr; // @synthesize categoryStr=_categoryStr;
@property(copy, nonatomic) NSString *wherePushStr; // @synthesize wherePushStr=_wherePushStr;
@property(nonatomic) _Bool isFromHistory; // @synthesize isFromHistory=_isFromHistory;
@property(retain, nonatomic) LZMDownloadModel *downloadModel; // @synthesize downloadModel=_downloadModel;
@property(retain, nonatomic) LZMVideoModel *videoModel; // @synthesize videoModel=_videoModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)backButtonAcion;
- (void)videoDetailADClose;
- (void)videoADSucceed;
- (void)requeProllVideoAd;
- (void)videoADFailedByUser:(_Bool)arg1;
- (void)prollADExitFullScreen:(_Bool)arg1;
- (void)prollADShowCompleted;
- (void)nativeAdObjectsSuccessLoad:(id)arg1 palceId:(long long)arg2 andAdSupportType:(long long)arg3;
- (void)playerStateDidChangeWithReason:(long long)arg1;
- (void)playerDidFinishWithReason:(long long)arg1;
- (void)playerReportError:(long long)arg1 withErrorInfo:(id)arg2;
- (void)playerLoadNextPageSection:(long long)arg1;
- (void)rePlay;
- (void)isCollect:(_Bool)arg1;
- (void)playerChooseSection:(long long)arg1;
- (void)playerNextSection;
- (void)playerChooseNumber:(long long)arg1;
- (void)playerNextNumber;
- (void)playerRefreshError;
- (void)playerWebPlay;
- (void)playerBackAction;
- (void)configLocalPlayerInfo:(id)arg1;
- (void)configWebPlayerInfo:(id)arg1;
- (void)configFengXPlayerInfo:(id)arg1;
- (void)configPPTVPlayerInfo:(id)arg1;
- (void)configAVPlayerInfo:(id)arg1;
- (void)configPlayerMessageWithSourceInfo:(id)arg1;
- (void)videoUrlModelManageWithModel:(id)arg1;
- (void)autoChangeSourceManage;
- (void)stopTimer;
- (void)creatTimer;
- (void)videoDownloadWithDownloadEnableArray:(id)arg1;
- (void)videoCollect;
- (void)videoChangeSourceWithIndex:(long long)arg1 isChangeVideo:(_Bool)arg2;
- (void)videoPlayInfoWithModel:(id)arg1;
- (void)controlViewCallBack;
- (void)feedBack;
- (void)addUMCAnalytics;
- (void)addUMengStatistics:(id)arg1;
- (void)addHistoryWithCurrentVideoModel:(id)arg1;
- (void)buildPlayer;
- (void)initPlayerModel;
- (void)resetVideoModel:(id)arg1;
- (void)buildUI;
- (void)networkReachability:(id)arg1;
- (void)applicationWillTerminate;
- (void)applicationDidEnterBackground;
- (void)addNotification;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
