//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface LxFTPRequest : NSObject
{
    CDStruct_4210025a _streamClientContext;
    NSURL *_serverURL;
    NSURL *_localFileURL;
    NSString *_username;
    NSString *_password;
    long long _finishedSize;
    long long _totalSize;
    CDUnknownBlockType _progressAction;
    CDUnknownBlockType _successAction;
    CDUnknownBlockType _failAction;
    struct __CFReadStream *_readStream;
    struct __CFWriteStream *_writeStream;
}

+ (id)destoryResourceRequest;
+ (id)createResourceRequest;
+ (id)uploadRequest;
+ (id)downloadRequest;
+ (id)resourceListRequest;
@property(nonatomic) struct __CFWriteStream *writeStream; // @synthesize writeStream=_writeStream;
@property(nonatomic) struct __CFReadStream *readStream; // @synthesize readStream=_readStream;
@property(copy, nonatomic) CDUnknownBlockType failAction; // @synthesize failAction=_failAction;
@property(copy, nonatomic) CDUnknownBlockType successAction; // @synthesize successAction=_successAction;
@property(copy, nonatomic) CDUnknownBlockType progressAction; // @synthesize progressAction=_progressAction;
@property(nonatomic) long long totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) long long finishedSize; // @synthesize finishedSize=_finishedSize;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSURL *localFileURL; // @synthesize localFileURL=_localFileURL;
@property(copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
- (void).cxx_destruct;
- (id)errorMessageOfCode:(long long)arg1;
- (void)stop;
- (_Bool)start;
- (id)initPrivate;
- (void)dealloc;

@end
