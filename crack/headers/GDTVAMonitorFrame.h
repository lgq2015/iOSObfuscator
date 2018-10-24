//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate;

@interface GDTVAMonitorFrame : NSObject <NSCoding>
{
    _Bool _hidden;
    _Bool _isForground;
    double _alpha;
    NSDate *_captureDate;
    double _coverRate;
    struct CGRect _frame;
    struct CGRect _windowFrame;
    struct CGRect _showFrame;
}

@property(readonly, nonatomic) double coverRate; // @synthesize coverRate=_coverRate;
@property(readonly, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property(readonly, nonatomic) _Bool isForground; // @synthesize isForground=_isForground;
@property(readonly, nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) struct CGRect showFrame; // @synthesize showFrame=_showFrame;
@property(readonly, nonatomic) struct CGRect windowFrame; // @synthesize windowFrame=_windowFrame;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualFrame:(id)arg1;
- (_Bool)isVisible;
- (id)initWithView:(id)arg1;

@end
