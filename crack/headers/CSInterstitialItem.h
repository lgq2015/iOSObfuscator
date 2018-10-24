//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSAppStoreObject, NSArray, NSString;

@interface CSInterstitialItem : NSObject
{
    _Bool _forceFull;
    _Bool _closeEnabled;
    _Bool _openInApp;
    _Bool _useCacheTemplate;
    NSString *_orignalAdData;
    long long _plpd;
    double _scaleFromServer;
    NSString *_iTunesUrl;
    CSAppStoreObject *_appStoreObject;
    NSArray *_arrShowMonUrl;
    NSArray *_arrClickMonUrl;
    NSString *_templateUrl;
    NSString *_templateFilePath;
    NSArray *_adPageList;
    NSArray *_adOriginalPageList;
    struct CGSize _adSizeFromServer;
    struct CGSize _closeSize;
}

+ (id)parseFromAdData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSArray *adOriginalPageList; // @synthesize adOriginalPageList=_adOriginalPageList;
@property(nonatomic) _Bool useCacheTemplate; // @synthesize useCacheTemplate=_useCacheTemplate;
@property(retain, nonatomic) NSArray *adPageList; // @synthesize adPageList=_adPageList;
@property(retain, nonatomic) NSString *templateFilePath; // @synthesize templateFilePath=_templateFilePath;
@property(retain, nonatomic) NSString *templateUrl; // @synthesize templateUrl=_templateUrl;
@property(retain, nonatomic) NSArray *arrClickMonUrl; // @synthesize arrClickMonUrl=_arrClickMonUrl;
@property(retain, nonatomic) NSArray *arrShowMonUrl; // @synthesize arrShowMonUrl=_arrShowMonUrl;
@property(retain, nonatomic) CSAppStoreObject *appStoreObject; // @synthesize appStoreObject=_appStoreObject;
@property(nonatomic) _Bool openInApp; // @synthesize openInApp=_openInApp;
@property(retain, nonatomic) NSString *iTunesUrl; // @synthesize iTunesUrl=_iTunesUrl;
@property(nonatomic) struct CGSize closeSize; // @synthesize closeSize=_closeSize;
@property(nonatomic) _Bool closeEnabled; // @synthesize closeEnabled=_closeEnabled;
@property(nonatomic) double scaleFromServer; // @synthesize scaleFromServer=_scaleFromServer;
@property(nonatomic) struct CGSize adSizeFromServer; // @synthesize adSizeFromServer=_adSizeFromServer;
@property(nonatomic) _Bool forceFull; // @synthesize forceFull=_forceFull;
@property(nonatomic) long long plpd; // @synthesize plpd=_plpd;
@property(retain, nonatomic) NSString *orignalAdData; // @synthesize orignalAdData=_orignalAdData;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool oldStyle;

@end
