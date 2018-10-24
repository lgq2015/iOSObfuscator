//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, DRAgentPlayerControlView, DRAgentResourceLoaderManager, UIImageView;

@interface DRAgentAVPlayer : UIView
{
    _Bool _isCanPlay;
    id <DRAgentAVPlayerDelegate> _delegate;
    UIImageView *_bgImageView;
    DRAgentPlayerControlView *_controlView;
    double _totalTime;
    double _loadRange;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    AVPlayerItem *_currentItem;
    id _timeObser;
    DRAgentResourceLoaderManager *_resourceLoaderManager;
}

@property(retain, nonatomic) DRAgentResourceLoaderManager *resourceLoaderManager; // @synthesize resourceLoaderManager=_resourceLoaderManager;
@property(nonatomic) _Bool isCanPlay; // @synthesize isCanPlay=_isCanPlay;
@property(retain, nonatomic) id timeObser; // @synthesize timeObser=_timeObser;
@property(retain, nonatomic) AVPlayerItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) double loadRange; // @synthesize loadRange=_loadRange;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) DRAgentPlayerControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) __weak id <DRAgentAVPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)videoPlayBecomeActive:(id)arg1;
- (void)videoPlayEnterBack:(id)arg1;
- (void)videoPlayError:(id)arg1;
- (void)videoPlayEnd:(id)arg1;
- (void)removeNotification;
- (void)addNotificatonForPlayer;
- (void)handleStatusWithPlayerItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserverWithPlayItem:(id)arg1;
- (void)addObserverWithPlayItem:(id)arg1;
- (void)removePlayerObserver;
- (void)addPlayerObserver;
- (void)useDelegateWith:(long long)arg1;
- (void)playOrPause:(CDUnknownBlockType)arg1;
- (void)pause;
- (void)play;
- (void)replacePlayerWithVideoModel:(id)arg1;
- (void)setupPlayerWithVideoModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
