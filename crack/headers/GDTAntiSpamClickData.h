//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GDTAntiSpamClickData : NSObject
{
    long long _touchBeginTime;
    long long _touchEndTime;
    struct CGPoint _touchBeginPoint;
    struct CGPoint _touchEndPoint;
    struct CGSize _viewSize;
}

@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) struct CGPoint touchEndPoint; // @synthesize touchEndPoint=_touchEndPoint;
@property(nonatomic) struct CGPoint touchBeginPoint; // @synthesize touchBeginPoint=_touchBeginPoint;
@property(nonatomic) long long touchEndTime; // @synthesize touchEndTime=_touchEndTime;
@property(nonatomic) long long touchBeginTime; // @synthesize touchBeginTime=_touchBeginTime;

@end
