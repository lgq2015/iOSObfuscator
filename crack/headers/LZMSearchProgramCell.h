//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class LZMProgramModel, MarqueeLabel, UIButton, UILabel, UIView;

@interface LZMSearchProgramCell : UITableViewCell
{
    LZMProgramModel *_programModel;
    CDUnknownBlockType _SearchprogramBtnActionBlock;
    UILabel *_timeLabel;
    UILabel *_channelNameLabel;
    MarqueeLabel *_programNameLaebl;
    UIView *_bottomLine;
    UIButton *_statusBtn;
}

@property(retain, nonatomic) UIButton *statusBtn; // @synthesize statusBtn=_statusBtn;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) MarqueeLabel *programNameLaebl; // @synthesize programNameLaebl=_programNameLaebl;
@property(retain, nonatomic) UILabel *channelNameLabel; // @synthesize channelNameLabel=_channelNameLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(copy, nonatomic) CDUnknownBlockType SearchprogramBtnActionBlock; // @synthesize SearchprogramBtnActionBlock=_SearchprogramBtnActionBlock;
@property(retain, nonatomic) LZMProgramModel *programModel; // @synthesize programModel=_programModel;
- (void).cxx_destruct;
- (void)statusBtnAction;
- (void)setBtnWithPlayingTitle:(id)arg1 withTitleColor:(id)arg2;
- (void)setBtnWithSeebackImage:(id)arg1;
- (long long)numberOfDaysWithDate:(id)arg1;
- (_Bool)returnIsHavePlayBack:(long long)arg1;
- (void)buildUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
