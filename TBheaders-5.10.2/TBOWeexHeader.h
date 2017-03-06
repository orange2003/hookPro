//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSMutableArray, TBOCommunity;
@protocol TBOMenuItemInfo, TBOTag;

@interface TBOWeexHeader : TBJSONModel
{
    _Bool _subscribed;	// 8 = 0x8
    NSArray<TBOTag> *_circleTabs;	// 16 = 0x10
    TBOCommunity *_community;	// 24 = 0x18
    NSArray<TBOMenuItemInfo> *_tabs;	// 32 = 0x20
    NSMutableArray *_circleActions;	// 40 = 0x28
}

@property(retain, nonatomic) NSMutableArray *circleActions; // @synthesize circleActions=_circleActions;
@property(retain, nonatomic) NSArray<TBOMenuItemInfo> *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) TBOCommunity *community; // @synthesize community=_community;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(retain, nonatomic) NSArray<TBOTag> *circleTabs; // @synthesize circleTabs=_circleTabs;
- (void).cxx_destruct;

@end
