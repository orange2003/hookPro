//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MMWebViewReportStatMgr : MMService <MMService>
{
    unsigned long long m_iMenuActionRet;
}

@property(nonatomic) unsigned long long m_iMenuActionRet; // @synthesize m_iMenuActionRet;
- (void)reportWebPageInfoWhenForwardMsgOrFav:(id)arg1 actionType:(unsigned long long)arg2 fromScene:(unsigned long long)arg3 ret:(unsigned long long)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

