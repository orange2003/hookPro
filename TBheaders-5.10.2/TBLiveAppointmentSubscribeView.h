//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIColor;

@interface TBLiveAppointmentSubscribeView : UIView
{
    _Bool _isSubscribed;	// 8 = 0x8
    UIColor *_subscribedTitleColor;	// 16 = 0x10
    UIColor *_unSubscribeTitleColor;	// 24 = 0x18
    UIColor *_subscribedBorderColor;	// 32 = 0x20
    UIColor *_unSubscribeBorderColor;	// 40 = 0x28
    UIColor *_subscribedBackgroundColor;	// 48 = 0x30
    UIColor *_unSubscribeBackgroundColor;	// 56 = 0x38
    double _subscribeBorderWidth;	// 64 = 0x40
    double _unSubscribeBorderWidth;	// 72 = 0x48
    long long _source;	// 80 = 0x50
    UIButton *_subscribeBtn;	// 88 = 0x58
    NSString *_appointmentId;	// 96 = 0x60
    NSString *_accountId;	// 104 = 0x68
}

+ (struct CGSize)viewSize;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(copy, nonatomic) NSString *appointmentId; // @synthesize appointmentId=_appointmentId;
@property(nonatomic) _Bool isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(retain, nonatomic) UIButton *subscribeBtn; // @synthesize subscribeBtn=_subscribeBtn;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) double unSubscribeBorderWidth; // @synthesize unSubscribeBorderWidth=_unSubscribeBorderWidth;
@property(nonatomic) double subscribeBorderWidth; // @synthesize subscribeBorderWidth=_subscribeBorderWidth;
@property(retain, nonatomic) UIColor *unSubscribeBackgroundColor; // @synthesize unSubscribeBackgroundColor=_unSubscribeBackgroundColor;
@property(retain, nonatomic) UIColor *subscribedBackgroundColor; // @synthesize subscribedBackgroundColor=_subscribedBackgroundColor;
@property(retain, nonatomic) UIColor *unSubscribeBorderColor; // @synthesize unSubscribeBorderColor=_unSubscribeBorderColor;
@property(retain, nonatomic) UIColor *subscribedBorderColor; // @synthesize subscribedBorderColor=_subscribedBorderColor;
@property(retain, nonatomic) UIColor *unSubscribeTitleColor; // @synthesize unSubscribeTitleColor=_unSubscribeTitleColor;
@property(retain, nonatomic) UIColor *subscribedTitleColor; // @synthesize subscribedTitleColor=_subscribedTitleColor;
- (void).cxx_destruct;
- (void)updateSubscribeState;
- (void)actionUserTrack;
- (void)onClickSubscribeBtn:(id)arg1;
- (void)refreshWithAppointmentId:(id)arg1 accountId:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

