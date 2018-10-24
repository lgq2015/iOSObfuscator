//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface DRAgentSplashControl : UIView
{
    id <DRAgentSplashControlDelegate> _delegate;
    UIButton *_muteBtn;
    UILabel *_alreadyLabel;
}

@property(retain, nonatomic) UILabel *alreadyLabel; // @synthesize alreadyLabel=_alreadyLabel;
@property(retain, nonatomic) UIButton *muteBtn; // @synthesize muteBtn=_muteBtn;
@property(nonatomic) __weak id <DRAgentSplashControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)muteBtnAction:(id)arg1;
- (void)drawLine;
- (void)layoutControlViews;
- (void)setupUI;
- (void)setVolumeButton:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
