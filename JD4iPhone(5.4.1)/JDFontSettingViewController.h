//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDFontTotalModel, JDNetwork, NSMutableArray, NSString, UITableView;

@interface JDFontSettingViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate>
{
    JDFontTotalModel *_fontTotalModel;
    NSMutableArray *_fontListArray;
    JDNetwork *_appFontRequest;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) JDNetwork *appFontRequest; // @synthesize appFontRequest=_appFontRequest;
@property(retain, nonatomic) NSMutableArray *fontListArray; // @synthesize fontListArray=_fontListArray;
@property(retain, nonatomic) JDFontTotalModel *fontTotalModel; // @synthesize fontTotalModel=_fontTotalModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reconnect;
- (void)startAppFontRequest;
- (void)initData;
- (void)initFontSettingView;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)shouldTakeCoupon;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)backButtonClicked;
- (void)p_handleDownload:(id)arg1;
- (void)p_setFontFilePaht:(id)arg1;
- (void)postFontChangedNotification;
- (void)cancelDownloadFontTapped:(id)arg1;
- (void)useFontTapped:(id)arg1;
- (void)downloadFontTapped:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
