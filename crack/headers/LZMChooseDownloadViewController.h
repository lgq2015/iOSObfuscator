//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LZMViewController.h"

#import "LZMDownloadDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class LZMDownloadManager, LZMDownloadOptionButton, LZMDownloadQualityView, LZMImageView, LZMLongVideoSourceView, LZMMemoryView, LZMSourceInfoModel, LZMVideoModel, NSArray, NSMutableArray, NSString, UIButton, UICollectionView, UIView;

@interface LZMChooseDownloadViewController : LZMViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, LZMDownloadDelegate>
{
    _Bool _isFromVideoPlayPage;
    _Bool _isNotice;
    long long _videoId;
    LZMVideoModel *_videoModel;
    NSMutableArray *_downloadAbleArray;
    UIView *_topView;
    LZMImageView *_souceIconImageView;
    LZMDownloadOptionButton *_souceNameButton;
    LZMDownloadOptionButton *_qualityButton;
    UIView *_bottomView;
    UIButton *_allDownloadButton;
    UIButton *_downloadingButton;
    LZMMemoryView *_memoryView;
    UICollectionView *_collectionView;
    LZMLongVideoSourceView *_sourceView;
    LZMDownloadQualityView *_qualityView;
    NSMutableArray *_sourceDataList;
    NSArray *_qualityList;
    long long _curSourceIndex;
    long long _curQuailtyIndex;
    LZMSourceInfoModel *_curSourceInfo;
    long long _cellType;
    NSMutableArray *_dataList;
    LZMDownloadManager *_downloadManager;
    long long _page;
}

@property(nonatomic) _Bool isNotice; // @synthesize isNotice=_isNotice;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) LZMDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) LZMSourceInfoModel *curSourceInfo; // @synthesize curSourceInfo=_curSourceInfo;
@property(nonatomic) long long curQuailtyIndex; // @synthesize curQuailtyIndex=_curQuailtyIndex;
@property(nonatomic) long long curSourceIndex; // @synthesize curSourceIndex=_curSourceIndex;
@property(retain, nonatomic) NSArray *qualityList; // @synthesize qualityList=_qualityList;
@property(retain, nonatomic) NSMutableArray *sourceDataList; // @synthesize sourceDataList=_sourceDataList;
@property(retain, nonatomic) LZMDownloadQualityView *qualityView; // @synthesize qualityView=_qualityView;
@property(retain, nonatomic) LZMLongVideoSourceView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) LZMMemoryView *memoryView; // @synthesize memoryView=_memoryView;
@property(retain, nonatomic) UIButton *downloadingButton; // @synthesize downloadingButton=_downloadingButton;
@property(retain, nonatomic) UIButton *allDownloadButton; // @synthesize allDownloadButton=_allDownloadButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) LZMDownloadOptionButton *qualityButton; // @synthesize qualityButton=_qualityButton;
@property(retain, nonatomic) LZMDownloadOptionButton *souceNameButton; // @synthesize souceNameButton=_souceNameButton;
@property(retain, nonatomic) LZMImageView *souceIconImageView; // @synthesize souceIconImageView=_souceIconImageView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSMutableArray *downloadAbleArray; // @synthesize downloadAbleArray=_downloadAbleArray;
@property(retain, nonatomic) LZMVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) _Bool isFromVideoPlayPage; // @synthesize isFromVideoPlayPage=_isFromVideoPlayPage;
@property(nonatomic) long long videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (void)downloadStatusChanged:(id)arg1;
- (void)userAllowedWifiDownloadNotice;
- (void)userNotAllowWifiDownloadNotice;
- (void)delDownloadWithModel:(id)arg1 indexPath:(id)arg2;
- (void)addDownloadWithDownloadItemModel:(id)arg1;
- (void)configDownloadEnable;
- (id)configSourceSortArrayWithVideoSource:(id)arg1;
- (void)basedOnDownloadAbleArrayConfigDownloadInfo;
- (void)getData;
- (void)initDefaultConfig;
- (void)downloadingButtonAction;
- (void)allDownloadButtonAction;
- (void)changeQualityAction;
- (void)changeSourceAction;
- (void)closeButtonAction:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)buildBottomView;
- (void)buildCollectionView;
- (id)createTopButtonViewWithBtn:(id)arg1 withIconImageView:(id)arg2 andTitle:(id)arg3;
- (void)addUmengSourceRecord:(long long)arg1;
- (void)addUmengQualityRecord:(long long)arg1;
- (void)buildTopView;
- (void)buildNavBar;
- (void)buildUI;
- (void)requsetVarietySectionsWithPage:(long long)arg1;
- (void)requestVideoDetailMessage;
- (void)requestDownloadEnable;
- (void)requestVideoSourceInfoList;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
