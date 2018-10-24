//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UILabel, UIScrollView;

@interface LZMYChooseChannelView : UIView <UIScrollViewDelegate>
{
    CDUnknownBlockType _selectLiveBlock;
    CDUnknownBlockType _selectCustomBlock;
    UIView *_titleBackView;
    UILabel *_titleLB;
    UIButton *_beforeBtn;
    UIButton *_nextBtn;
    UIView *_lineView;
    UIScrollView *_tabContentView;
    NSMutableArray *_tabContentViewArray;
    NSMutableArray *_dataArray;
    long long _currentSelectIndex;
}

@property(nonatomic) long long currentSelectIndex; // @synthesize currentSelectIndex=_currentSelectIndex;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSMutableArray *tabContentViewArray; // @synthesize tabContentViewArray=_tabContentViewArray;
@property(retain, nonatomic) UIScrollView *tabContentView; // @synthesize tabContentView=_tabContentView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) UIButton *beforeBtn; // @synthesize beforeBtn=_beforeBtn;
@property(retain, nonatomic) UILabel *titleLB; // @synthesize titleLB=_titleLB;
@property(retain, nonatomic) UIView *titleBackView; // @synthesize titleBackView=_titleBackView;
@property(copy, nonatomic) CDUnknownBlockType selectCustomBlock; // @synthesize selectCustomBlock=_selectCustomBlock;
@property(copy, nonatomic) CDUnknownBlockType selectLiveBlock; // @synthesize selectLiveBlock=_selectLiveBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDataTotitleView;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)nextBtnAction;
- (void)beforeBtnAction;
- (void)getCustomModeAction:(id)arg1;
- (void)getModeAction:(id)arg1;
- (void)createUI;
- (id)initWithTabConfigArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
