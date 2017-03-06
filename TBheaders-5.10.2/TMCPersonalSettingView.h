//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SearchToolSubViewProtocol-Protocol.h"

@class NSString, TMCPersonalSettingViewData, UIButton, UIImageView, UILabel;
@protocol SearchToolSubViewsDelegate;

@interface TMCPersonalSettingView : UIView <SearchToolSubViewProtocol>
{
    UIView *_backgroundView;	// 8 = 0x8
    UILabel *_textLabel;	// 16 = 0x10
    UIView *_seperatorView;	// 24 = 0x18
    UIButton *_leftButton;	// 32 = 0x20
    UIButton *_rightButton;	// 40 = 0x28
    UIImageView *_icon;	// 48 = 0x30
    TMCPersonalSettingViewData *_data;	// 56 = 0x38
    id <SearchToolSubViewsDelegate> toolSubViewsDelegate;	// 64 = 0x40
}

@property(nonatomic) __weak id <SearchToolSubViewsDelegate> toolSubViewsDelegate; // @synthesize toolSubViewsDelegate;
- (void).cxx_destruct;
- (double)getViewHeight;
- (void)configData:(id)arg1;
- (void)switchPersonalSetting;
- (void)jumpToH5;
- (void)handleTap:(id)arg1;
- (void)formatToData:(id)arg1;
- (void)switchBtnClick:(id)arg1;
- (void)editClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
