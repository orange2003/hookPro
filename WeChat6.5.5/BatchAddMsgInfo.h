//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

__attribute__((visibility("hidden")))
@interface BatchAddMsgInfo : NSObject
{
    _Bool isCanAddDB;
    _Bool addDBResult;
    _Bool isNotify;
    _Bool isNeedChangeDisplay;
    _Bool isInsertNew;
    unsigned int uiDes;
    CMessageWrap *wrapMsg;
    NSString *chatName;
    NSString *clusterType;
    unsigned long long _addMsgType;
}

@property(nonatomic) unsigned long long addMsgType; // @synthesize addMsgType=_addMsgType;
@property(nonatomic) _Bool isInsertNew; // @synthesize isInsertNew;
@property(nonatomic) _Bool isNeedChangeDisplay; // @synthesize isNeedChangeDisplay;
@property(nonatomic) _Bool isNotify; // @synthesize isNotify;
@property(nonatomic) _Bool addDBResult; // @synthesize addDBResult;
@property(retain, nonatomic) NSString *clusterType; // @synthesize clusterType;
@property(nonatomic) _Bool isCanAddDB; // @synthesize isCanAddDB;
@property(nonatomic) unsigned int uiDes; // @synthesize uiDes;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName;
@property(retain, nonatomic) CMessageWrap *wrapMsg; // @synthesize wrapMsg;
- (void).cxx_destruct;

@end

