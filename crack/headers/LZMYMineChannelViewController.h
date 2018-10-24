//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LZMViewController.h"

#import "MGSwipeTableCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UITableView, UIView;

@interface LZMYMineChannelViewController : LZMViewController <UITableViewDelegate, UITableViewDataSource, MGSwipeTableCellDelegate>
{
    UITableView *_tableView;
    NSMutableArray *_historyDataArray;
    NSMutableArray *_colloctDataArray;
    NSMutableArray *_selfAddDataArray;
    UIView *_bottomBackView;
    UIView *_bottomView;
    UIButton *_surebtn;
    UIButton *_cancelbtn;
}

@property(retain, nonatomic) UIButton *cancelbtn; // @synthesize cancelbtn=_cancelbtn;
@property(retain, nonatomic) UIButton *surebtn; // @synthesize surebtn=_surebtn;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *bottomBackView; // @synthesize bottomBackView=_bottomBackView;
@property(retain, nonatomic) NSMutableArray *selfAddDataArray; // @synthesize selfAddDataArray=_selfAddDataArray;
@property(retain, nonatomic) NSMutableArray *colloctDataArray; // @synthesize colloctDataArray=_colloctDataArray;
@property(retain, nonatomic) NSMutableArray *historyDataArray; // @synthesize historyDataArray=_historyDataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)isPlayAdress:(id)arg1;
- (void)bottomClearBtnAction:(id)arg1;
- (void)delSectionData:(id)arg1;
- (void)eidtCustomChannelActionWithModel:(id)arg1;
- (void)addCustomChannelAction;
- (void)hiddlebottomView;
- (void)showbottomView;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestProgramListDataChannelModel:(long long)arg1 withIndexPath:(id)arg2;
- (void)visibleChannelProgramListManage;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)getSelfAddData;
- (void)getCollectData;
- (void)getHistoryData;
- (void)getData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
