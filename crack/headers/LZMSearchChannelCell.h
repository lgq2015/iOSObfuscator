//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class LZMImageView, LZMLiveModel, NSMutableArray, UILabel, UIView;

@interface LZMSearchChannelCell : UITableViewCell
{
    LZMLiveModel *_channelModel;
    LZMImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_watchingProgram;
    UIView *_bottomLine;
    NSMutableArray *_programListArray;
}

@property(retain, nonatomic) NSMutableArray *programListArray; // @synthesize programListArray=_programListArray;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *watchingProgram; // @synthesize watchingProgram=_watchingProgram;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) LZMImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) LZMLiveModel *channelModel; // @synthesize channelModel=_channelModel;
- (void).cxx_destruct;
- (void)buildUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
