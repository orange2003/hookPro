//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DBContactChatRoomDetail : NSObject <PBCoding>
{
    unsigned int chatRoomInfoVersion;
    unsigned int chatRoomInfoSvrVersion;
    unsigned int _chatRoomStatus;
    unsigned int _chatRoomLocalInfoVersion;
    NSString *chatRoomDesc;
    NSString *chatRoomDescModer;
    unsigned long long chatRoomDescTime;
}

+ (void)initialize;
@property(nonatomic) unsigned int chatRoomLocalInfoVersion; // @synthesize chatRoomLocalInfoVersion=_chatRoomLocalInfoVersion;
@property(nonatomic) unsigned int chatRoomStatus; // @synthesize chatRoomStatus=_chatRoomStatus;
@property(nonatomic) unsigned long long chatRoomDescTime; // @synthesize chatRoomDescTime;
@property(retain, nonatomic) NSString *chatRoomDescModer; // @synthesize chatRoomDescModer;
@property(retain, nonatomic) NSString *chatRoomDesc; // @synthesize chatRoomDesc;
@property(nonatomic) unsigned int chatRoomInfoSvrVersion; // @synthesize chatRoomInfoSvrVersion;
@property(nonatomic) unsigned int chatRoomInfoVersion; // @synthesize chatRoomInfoVersion;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

