//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSString, UIButton, UIImageView, UILabel, UITextView;

@interface LZMPrivacyView : UIView <UITextViewDelegate>
{
    CDUnknownBlockType _agreePrivacyBlock;
    UIImageView *_backgoroundView;
    UILabel *_titleLabel;
    UITextView *_contentTextView;
    UIButton *_confirmButton;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UITextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *backgoroundView; // @synthesize backgoroundView=_backgoroundView;
@property(copy, nonatomic) CDUnknownBlockType agreePrivacyBlock; // @synthesize agreePrivacyBlock=_agreePrivacyBlock;
- (void).cxx_destruct;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)confirmButtonAction:(id)arg1;
- (void)buildUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
