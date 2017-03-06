//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINIBTableViewController.h"

@class MBProgressHUD, NSString, UILabel;

@interface ReminderViewController : UINIBTableViewController
{
    UILabel *hideContentLabel;
    UILabel *remindFooter;
    MBProgressHUD *hud;
    _Bool settingFromSessioin;
    NSString *_textHeaderMuteSetting;
}

@property(retain, nonatomic) NSString *textHeaderMuteSetting; // @synthesize textHeaderMuteSetting=_textHeaderMuteSetting;
@property(nonatomic) _Bool settingFromSessioin; // @synthesize settingFromSessioin;
- (void)removeHud;
- (void)showHud;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)gotoMuteTimeViewController;
- (void)gotoNotifyDetailViewController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)momoLivePushChanged:(id)arg1;
- (void)saveVibrateSwticherOnLocal;
- (void)saveSoundSwitcherOnLocal;
- (void)pushDetailSwitchChanged:(id)arg1;
- (void)setPushDisabledError:(id)arg1;
- (void)setPushDisabledFail:(id)arg1;
- (void)setPushDisabledSuccess:(id)arg1;
- (void)pushSwitchValueChanged:(id)arg1;
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (void)reloadSettings;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)addNavigationBar;
- (void)commitPushDetailControlFinish:(id)arg1;
- (void)commitPushSoundFinish:(id)arg1;
- (void)commitPushControlFinish:(id)arg1;
- (void)addNotifications;
- (id)headerViewWithText:(id)arg1;
- (void)initGroupCellsInCHMode;
- (void)initGroupCells;

@end
