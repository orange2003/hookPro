//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton;

@interface TBSCQRFloatView : UIView
{
    NSString *_content;	// 8 = 0x8
    CDUnknownBlockType _copyBlock;	// 16 = 0x10
    CDUnknownBlockType _dismissBlock;	// 24 = 0x18
    UIView *_containerView;	// 32 = 0x20
    UIButton *_arrowButton;	// 40 = 0x28
}

@property(retain, nonatomic) UIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType copyBlock; // @synthesize copyBlock=_copyBlock;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)showInView:(id)arg1;
- (void)arrowClicked;
- (void)onCopy;
- (void)dismiss:(_Bool)arg1;
- (void)didTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)baseInit;
- (id)initWithContent:(id)arg1 copyBlock:(CDUnknownBlockType)arg2 dismissBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
