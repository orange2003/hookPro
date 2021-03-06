//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DBReadMsgstProvider;

@interface MDReadMsgstManager : NSObject
{
    DBReadMsgstProvider *dbProvider;
}

- (id)getAllReadInDB;
- (void)finishSendReadMsgst:(id)arg1;
- (void)sendShopMsgRead:(id)arg1 to:(id)arg2 type:(int)arg3 stype:(int)arg4;
- (void)sendRead:(id)arg1 to:(id)arg2 type:(int)arg3;
- (void)dealloc;
- (id)initWithMessageReadStateProvider:(id)arg1;

@end

