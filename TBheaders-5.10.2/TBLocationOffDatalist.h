//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface TBLocationOffDatalist : NSObject
{
    NSMutableArray *_wifiList;	// 8 = 0x8
    NSMutableArray *_cityCodeList;	// 16 = 0x10
    NSString *_strDelayTime;	// 24 = 0x18
    NSString *_strDataTime;	// 32 = 0x20
    NSString *_strStatus;	// 40 = 0x28
    NSString *_strTimeUnit;	// 48 = 0x30
    NSString *_strVersion;	// 56 = 0x38
}

@property(retain, nonatomic) NSString *strVersion; // @synthesize strVersion=_strVersion;
@property(retain, nonatomic) NSString *strTimeUnit; // @synthesize strTimeUnit=_strTimeUnit;
@property(retain, nonatomic) NSString *strStatus; // @synthesize strStatus=_strStatus;
@property(retain, nonatomic) NSString *strDataTime; // @synthesize strDataTime=_strDataTime;
@property(retain, nonatomic) NSString *strDelayTime; // @synthesize strDelayTime=_strDelayTime;
@property(retain, nonatomic) NSMutableArray *cityCodeList; // @synthesize cityCodeList=_cityCodeList;
@property(retain, nonatomic) NSMutableArray *wifiList; // @synthesize wifiList=_wifiList;
- (void).cxx_destruct;
- (void)unPacketOfflineData:(id)arg1;
- (id)init;

@end
