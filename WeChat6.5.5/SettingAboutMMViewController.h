//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CrossfadeAnimationDelegate-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "whatsnewViewDelegateEx-Protocol.h"

@class CrossfadeAnimationController, MMTableViewInfo, NSString, UILabel, WCOutWhatsNewViewController;

__attribute__((visibility("hidden")))
@interface SettingAboutMMViewController : MMUIViewController <whatsnewViewDelegateEx, CrossfadeAnimationDelegate, ILinkEventExt>
{
    MMTableViewInfo *m_tableViewInfo;
    UILabel *m_labelProduct;
    _Bool m_bFullVersion;
    _Bool m_bFromSetting;
    WCOutWhatsNewViewController *m_whatsNewViewController;
    CrossfadeAnimationController *m_transitionInstance;
}

- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)showWhatsNewWillEnd;
- (void)showWhatsNewEnd;
- (void)ShowWhatsNew;
- (void)onLaw;
- (void)onAboutVersion;
- (void)showSystemNotice;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)getHeaderView;
- (void)updateProduct;
- (void)reloadData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

