//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTUIGalleryViewDelegate-Protocol.h"

@class NSArray, NSString, TBHTUIGalleryView;

@interface TBHTHomeSelectedShopView : UIView <HTUIGalleryViewDelegate>
{
    NSString *_pageName;	// 8 = 0x8
    NSArray *_shops;	// 16 = 0x10
    NSString *_url;	// 24 = 0x18
    TBHTUIGalleryView *_panel;	// 32 = 0x20
    double _scaleRate;	// 40 = 0x28
}

@property(nonatomic) double scaleRate; // @synthesize scaleRate=_scaleRate;
@property(retain, nonatomic) TBHTUIGalleryView *panel; // @synthesize panel=_panel;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSArray *shops; // @synthesize shops=_shops;
- (void).cxx_destruct;
- (void)didSelectViewAtIndex:(long long)arg1;
- (void)setPageName:(id)arg1;
- (id)viewAtIndex:(long long)arg1 frame:(struct CGRect)arg2;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

