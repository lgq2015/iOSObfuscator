//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "DRAgentAVPlayerDelegate.h"
#import "DRAgentScrollImageViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class DRAgentAVPlayer, DRAgentRedVideoModel, NSMutableArray, NSString;

@interface DRAgentPlayerScrollView : UIScrollView <UIScrollViewDelegate, DRAgentAVPlayerDelegate, DRAgentScrollImageViewDelegate>
{
    id <DRAgentPlayerScrollViewDelegate> _playerDelegate;
    long long _index;
    DRAgentAVPlayer *_upPerPlayer;
    DRAgentAVPlayer *_middlePlayer;
    DRAgentAVPlayer *_downPlayer;
    NSMutableArray *_lives;
    DRAgentRedVideoModel *_live;
    DRAgentRedVideoModel *_upperLive;
    DRAgentRedVideoModel *_middleLive;
    DRAgentRedVideoModel *_downLive;
    long long _currentIndex;
    long long _previousIndex;
    long long _dataCount;
}

@property(nonatomic) long long dataCount; // @synthesize dataCount=_dataCount;
@property(nonatomic) long long previousIndex; // @synthesize previousIndex=_previousIndex;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) DRAgentRedVideoModel *downLive; // @synthesize downLive=_downLive;
@property(retain, nonatomic) DRAgentRedVideoModel *middleLive; // @synthesize middleLive=_middleLive;
@property(retain, nonatomic) DRAgentRedVideoModel *upperLive; // @synthesize upperLive=_upperLive;
@property(retain, nonatomic) DRAgentRedVideoModel *live; // @synthesize live=_live;
@property(retain, nonatomic) NSMutableArray *lives; // @synthesize lives=_lives;
@property(retain, nonatomic) DRAgentAVPlayer *downPlayer; // @synthesize downPlayer=_downPlayer;
@property(retain, nonatomic) DRAgentAVPlayer *middlePlayer; // @synthesize middlePlayer=_middlePlayer;
@property(retain, nonatomic) DRAgentAVPlayer *upPerPlayer; // @synthesize upPerPlayer=_upPerPlayer;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) __weak id <DRAgentPlayerScrollViewDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
- (void).cxx_destruct;
- (void)promptPlayer:(id)arg1 statusOrErrorWith:(long long)arg2;
- (void)repeatButtonClick:(id)arg1 sender:(id)arg2;
- (void)down:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)playerScrollViewCurrentPlayerIndex:(long long)arg1;
- (void)replaceForVideo:(id)arg1 withLive:(id)arg2;
- (void)prepareForVideo:(id)arg1 withLive:(id)arg2;
- (id)setupAVPlayer:(struct CGRect)arg1;
- (id)setupImageView:(struct CGRect)arg1;
- (void)updateForLives:(id)arg1 withCurrentIndex:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 dataCount:(long long)arg2 playerDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
