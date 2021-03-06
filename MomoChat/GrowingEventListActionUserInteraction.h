//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GrowingEventListAction.h"

@class NSString;

@interface GrowingEventListActionUserInteraction : NSObject <GrowingEventListAction>
{
}

- (id)screenShotForReplayWithTriggerNode:(id)arg1 thisNode:(id)arg2 item:(id)arg3;
- (id)screenShotForEventListWithTriggerNode:(id)arg1 thisNode:(id)arg2 item:(id)arg3;
- (void)addElementFromItem:(id)arg1 chartStyle:(long long)arg2 forPanel:(id)arg3;
- (_Bool)item:(id)arg1 canShowWithStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

