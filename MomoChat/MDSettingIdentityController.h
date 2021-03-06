//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "MDLighthouseSelectedSitePickerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MBProgressHUD, MDAPICached, MDExtendSite, MDFilterModel, MDLighthouseSelectedSitePicker, NSDictionary, NSMutableArray, NSString, UITableView;

@interface MDSettingIdentityController : MDViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, MDLighthouseSelectedSitePickerDelegate>
{
    _Bool _isSwitchChanged;
    UITableView *_tableView;
    NSMutableArray *_filterList;
    NSDictionary *_filterDictionary;
    MDAPICached *_apiCached;
    MBProgressHUD *_hud;
    MDLighthouseSelectedSitePicker *_sitePicker;
    MDExtendSite *_homeTownSite;
    MDFilterModel *_selectedFilter;
    NSMutableArray *_oldFilterStateList;
}

@property(retain, nonatomic) NSMutableArray *oldFilterStateList; // @synthesize oldFilterStateList=_oldFilterStateList;
@property(nonatomic) _Bool isSwitchChanged; // @synthesize isSwitchChanged=_isSwitchChanged;
@property(retain, nonatomic) MDFilterModel *selectedFilter; // @synthesize selectedFilter=_selectedFilter;
@property(retain, nonatomic) MDExtendSite *homeTownSite; // @synthesize homeTownSite=_homeTownSite;
@property(retain, nonatomic) MDLighthouseSelectedSitePicker *sitePicker; // @synthesize sitePicker=_sitePicker;
@property(nonatomic) __weak MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) MDAPICached *apiCached; // @synthesize apiCached=_apiCached;
@property(retain, nonatomic) NSDictionary *filterDictionary; // @synthesize filterDictionary=_filterDictionary;
@property(retain, nonatomic) NSMutableArray *filterList; // @synthesize filterList=_filterList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)removeHud;
- (void)showHud;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)homeTownCellClicked;
- (void)schoolCellClicked;
- (void)houseLocationCellClicked;
- (void)workLocationCellClicked;
- (void)jobCellClicked;
- (void)saveHomeInfoErr:(id)arg1;
- (void)saveHomeInfoFailed:(id)arg1;
- (void)saveHomeInfoSuccess:(id)arg1;
- (void)saveHomeInfo;
- (void)didChangeFilter:(id)arg1 state:(_Bool)arg2 index:(long long)arg3;
- (void)clickSelectIcon:(id)arg1;
- (void)selectedSitePickerDidFinishHidingAnimation:(id)arg1;
- (void)selectedSitePicker:(id)arg1 didSelectedWithFirstItem:(id)arg2 secondItem:(id)arg3 selectedFirstRow:(long long)arg4 secondRow:(long long)arg5;
- (void)showSitePicker;
- (void)configSitePicker;
- (void)back:(id)arg1;
- (void)updateHeadCircleLabel;
- (id)buildHeaderView;
- (void)requestIdentityDataWithCachePolicy:(unsigned long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

