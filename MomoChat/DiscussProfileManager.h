//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface DiscussProfileManager : NSObject
{
    NSMutableSet *runningIds;
    NSMutableSet *invalidIds;
}

- (void).cxx_destruct;
- (int)discussMessagePushStatus:(id)arg1;
- (void)queryDiscussProfileError:(id)arg1;
- (void)queryDiscussProfileFail:(id)arg1;
- (void)queryDiscussProfileSuccess:(id)arg1;
- (void)queryDiscussProfile:(id)arg1;
- (void)setDiscuss:(id)arg1 name:(id)arg2;
- (void)setDiscuss:(id)arg1 relation:(int)arg2;
- (void)setDiscussProfileArray:(id)arg1;
- (void)setDiscussProfile:(id)arg1;
- (id)discussProfile:(id)arg1;
- (id)localDiscussProfile:(id)arg1;
- (id)init;

@end

