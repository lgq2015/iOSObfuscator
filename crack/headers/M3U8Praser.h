//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class M3U8ModelList, NSString;

@interface M3U8Praser : NSObject
{
    id <M3U8PraseDelegate> _delegate;
    M3U8ModelList *_segmentList;
    NSString *_netfilePath;
    NSString *_praserURL;
    id _userdata;
    NSString *_localM3u8fileName;
    NSString *_returnStr;
    NSString *_keyHead;
    NSString *_keyUrl;
    NSString *_keyIV;
}

@property(copy, nonatomic) NSString *keyIV; // @synthesize keyIV=_keyIV;
@property(copy, nonatomic) NSString *keyUrl; // @synthesize keyUrl=_keyUrl;
@property(copy, nonatomic) NSString *keyHead; // @synthesize keyHead=_keyHead;
@property(copy, nonatomic) NSString *returnStr; // @synthesize returnStr=_returnStr;
@property(copy, nonatomic) NSString *localM3u8fileName; // @synthesize localM3u8fileName=_localM3u8fileName;
@property(retain, nonatomic) id userdata; // @synthesize userdata=_userdata;
@property(copy, nonatomic) NSString *praserURL; // @synthesize praserURL=_praserURL;
@property(copy, nonatomic) NSString *netfilePath; // @synthesize netfilePath=_netfilePath;
@property(retain, nonatomic) M3U8ModelList *segmentList; // @synthesize segmentList=_segmentList;
@property(nonatomic) id <M3U8PraseDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)getMyStringRepairForTS:(id)arg1 andURL:(id)arg2;
- (void)praseM3u8String:(id)arg1;
- (id)TopStringForArrayAndAppending:(id)arg1;
- (id)stringForUrlString:(id)arg1;
- (id)screenOutTsAnalysis:(id)arg1 urlTopString:(id)arg2 directory:(long long)arg3;
- (void)traversalUrlArray:(id)arg1 andcheckFile:(id)arg2 andTops:(long long)arg3;
- (void)screenOutBackString:(id)arg1 andURL:(id)arg2;
- (id)urlForNetCheck:(id)arg1;
- (_Bool)checkContainsTsOrM3u8:(id)arg1;
- (unsigned long long)checkContainsTsOrM3u8AndHTTP:(id)arg1;
- (void)praseM3u8Url:(id)arg1;

@end
