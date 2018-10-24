//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BCFeedbackKit;

@interface LXWFeedbackManager : NSObject
{
    BCFeedbackKit *_feedbackKit;
    id <LXWFeedbackManagerDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <LXWFeedbackManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BCFeedbackKit *feedbackKit; // @synthesize feedbackKit=_feedbackKit;
- (void).cxx_destruct;
- (void)fetchUnreadCount:(CDUnknownBlockType)arg1;
- (void)openFeedbackViewController:(id)arg1;
- (void)setExinfo:(id)arg1 forKey:(id)arg2;

@end
