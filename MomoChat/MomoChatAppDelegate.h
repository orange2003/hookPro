//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "AVAudioPlayerDelegate.h"
#import "CLLocationManagerDelegate.h"
#import "MDChunkSenderManagerDelegate.h"
#import "MDFileSenderDelegate.h"
#import "MDUnreadCounterDelegate.h"
#import "MFDispatchSourceDelegate.h"
#import "TabBarControllerDelegate.h"
#import "UIAccelerometerDelegate.h"
#import "UIApplicationDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "WCSessionDelegate.h"

@class AMapDiscoverManager, CLLocation, IMJBizClient, MDAPICached, MDChatSessionViewController, MDContactsRootViewController, MDContext, MDLiveController, MDNewNearbyContainerController, MDPushUtil, MDSettingViewController, MDWatchAppHelper, MDWeakProxy, MFDispatchSource, MomoTabBarController, NSDate, NSDictionary, NSMutableDictionary, NSString, NSTimer, UINavigationController, UIWindow, VersionMgr;

@interface MomoChatAppDelegate : UIResponder <MDUnreadCounterDelegate, MDFileSenderDelegate, MDChunkSenderManagerDelegate, WCSessionDelegate, UIApplicationDelegate, CLLocationManagerDelegate, TabBarControllerDelegate, AVAudioPlayerDelegate, UIAccelerometerDelegate, UINavigationControllerDelegate, MFDispatchSourceDelegate>
{
    NSTimer *locationTimer;
    UIWindow *window;
    VersionMgr *versionMgr;
    NSDictionary *launchingNotification;
    CLLocation *location;
    CLLocation *serverLocation;
    long long needChangeToChatSession;
    IMJBizClient *imjClient;
    MFDispatchSource *dispatchSource;
    _Bool handlingBackground;
    MDContext *context;
    NSMutableDictionary *UnreadCounterListener;
    NSDate *appLaunchTime;
    _Bool hasRegisteredWeiboSDK;
    NSString *weiboToken;
    _Bool _orientEnable;
    _Bool _forceLandscape;
    _Bool _soundAndVibrateDisable;
    _Bool _videoActived;
    UINavigationController *rootNavController;
    MomoTabBarController *tabBarController;
    MDNewNearbyContainerController *nearbyController;
    MDLiveController *liveViewController;
    MDChatSessionViewController *chatSessionController;
    MDContactsRootViewController *contactRootViewController;
    MDSettingViewController *settingController;
    NSMutableDictionary *_launchingInfo;
    NSString *_sourceApplication;
    UIWindow *_layOverWindow;
    MDWatchAppHelper *_watchAppHelper;
    MDAPICached *_apiCache;
    MDWeakProxy *_activeAlertViewProxy;
    MDWeakProxy *_activeActionSheetProxy;
    MDWeakProxy *_activeMDUKActionSheetProxy;
    MDWeakProxy *_activeMiniPickTopicViewProxy;
    AMapDiscoverManager *_gaodeDiscoverManager;
    NSString *_lastAppBecomeActiveIdentifier;
    long long _lastUploadedTotalUnreadCount;
    MDPushUtil *_pushUtil;
}

+ (void)userInteractionEnable;
+ (void)disableUserInteractionDuration:(double)arg1;
+ (void)initialize;
@property(retain, nonatomic) MDPushUtil *pushUtil; // @synthesize pushUtil=_pushUtil;
@property(nonatomic) long long lastUploadedTotalUnreadCount; // @synthesize lastUploadedTotalUnreadCount=_lastUploadedTotalUnreadCount;
@property(retain, nonatomic) NSString *lastAppBecomeActiveIdentifier; // @synthesize lastAppBecomeActiveIdentifier=_lastAppBecomeActiveIdentifier;
@property(retain, nonatomic) AMapDiscoverManager *gaodeDiscoverManager; // @synthesize gaodeDiscoverManager=_gaodeDiscoverManager;
@property(retain, nonatomic) MDWeakProxy *activeMiniPickTopicViewProxy; // @synthesize activeMiniPickTopicViewProxy=_activeMiniPickTopicViewProxy;
@property(retain, nonatomic) MDWeakProxy *activeMDUKActionSheetProxy; // @synthesize activeMDUKActionSheetProxy=_activeMDUKActionSheetProxy;
@property(retain, nonatomic) MDWeakProxy *activeActionSheetProxy; // @synthesize activeActionSheetProxy=_activeActionSheetProxy;
@property(retain, nonatomic) MDWeakProxy *activeAlertViewProxy; // @synthesize activeAlertViewProxy=_activeAlertViewProxy;
@property(nonatomic, getter=isVideoActived) _Bool videoActived; // @synthesize videoActived=_videoActived;
@property(nonatomic) _Bool soundAndVibrateDisable; // @synthesize soundAndVibrateDisable=_soundAndVibrateDisable;
@property(retain, nonatomic) MDAPICached *apiCache; // @synthesize apiCache=_apiCache;
@property(retain, nonatomic) MDWatchAppHelper *watchAppHelper; // @synthesize watchAppHelper=_watchAppHelper;
@property(nonatomic) _Bool forceLandscape; // @synthesize forceLandscape=_forceLandscape;
@property(nonatomic) _Bool orientEnable; // @synthesize orientEnable=_orientEnable;
@property(retain, nonatomic) UIWindow *layOverWindow; // @synthesize layOverWindow=_layOverWindow;
@property(copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(retain, nonatomic) NSMutableDictionary *launchingInfo; // @synthesize launchingInfo=_launchingInfo;
@property(copy, nonatomic) NSString *weiboToken; // @synthesize weiboToken;
@property(nonatomic) _Bool hasRegisteredWeiboSDK; // @synthesize hasRegisteredWeiboSDK;
@property(retain) NSMutableDictionary *UnreadCounterListener; // @synthesize UnreadCounterListener;
@property(retain, nonatomic) VersionMgr *versionMgr; // @synthesize versionMgr;
@property(retain, nonatomic) NSDictionary *launchingNotification; // @synthesize launchingNotification;
@property(retain, nonatomic) MDSettingViewController *settingController; // @synthesize settingController;
@property(retain, nonatomic) MDContactsRootViewController *contactRootViewController; // @synthesize contactRootViewController;
@property(retain, nonatomic) MDChatSessionViewController *chatSessionController; // @synthesize chatSessionController;
@property(retain, nonatomic) MDLiveController *liveViewController; // @synthesize liveViewController;
@property(retain, nonatomic) MDNewNearbyContainerController *nearbyController; // @synthesize nearbyController;
@property(retain, nonatomic) MomoTabBarController *tabBarController; // @synthesize tabBarController;
@property(retain, nonatomic) UINavigationController *rootNavController; // @synthesize rootNavController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window;
- (void)handleGrowingIOLog;
- (_Bool)growingIOShouldOpenedInClient;
- (void)uploadUserSessionLengthFail:(id)arg1;
- (void)uploadUserSessionLengthSuccess:(id)arg1;
- (void)uploadUserSessionLength:(long long)arg1;
- (id)topNavigationController;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)animateDismissWindow;
- (void)dismissWindow;
- (void)presentWindowWithController:(id)arg1;
- (void)didReceiveWeiboResponse:(id)arg1;
- (void)didReceiveWeiboRequest:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)openAppStoreInappWithURL:(id)arg1 notifyReciver:(_Bool)arg2;
- (id)appLaunchTime;
- (void)setAppLaunchTime:(id)arg1;
- (void)processFeedback;
- (void)application:(id)arg1 didChangeStatusBarFrame:(struct CGRect)arg2;
- (void)application:(id)arg1 willChangeStatusBarFrame:(struct CGRect)arg2;
- (void)removeDelegate:(id)arg1 from:(id)arg2;
- (void)addDelegate:(id)arg1 to:(id)arg2;
- (void)rateApplication;
- (void)enterFeedBackView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkVersionFail;
- (void)checkVersionFinish;
- (void)checkVersion;
- (void)gotoChatSessionPage;
- (void)popToRootViewController;
- (void)dismissAllCurrentModalControllers:(id)arg1;
- (void)showUnreadOnContact;
- (void)showUnreadOnLive;
- (void)showUnreadOnPerson;
- (void)showUnreadMsgNumOnTabOnMainThread:(id)arg1;
- (void)showUnreadOnChatsession;
- (void)delayPopToRoot;
- (void)handleLogoutInGuestMode;
- (void)handleLogout;
- (void)logoutRequestError:(id)arg1;
- (void)logoutRequestFail:(id)arg1;
- (void)logoutRequestSuccess:(id)arg1;
- (void)sendLogoutRequest;
- (void)logout;
- (double)distanceFromLocation:(id)arg1;
- (void)showLoading;
- (void)didClickCoverView;
- (void)clearAndCheckTmpDir;
- (id)imjClient;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)dealloc;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)newUpdateSelfLocation;
- (id)titleForItem:(int)arg1;
- (id)selectImageForItem:(int)arg1;
- (id)nomalImageForItem:(int)arg1;
- (void)tabBar:(id)arg1 didSelectTabAtIndex:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setUpTabBar;
- (void)md_applicationWillResignActive:(id)arg1;
- (void)md_applicationWillEnterForeground:(id)arg1;
- (void)md_applicationWillTerminate:(id)arg1;
- (void)md_applicationDidEnterBackground:(id)arg1;
- (void)md_applicationDidBecomeActive:(id)arg1;
- (_Bool)md_application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)checkEnterLoginWithoutPasswordFial:(id)arg1;
- (void)checkEnterLoginWithoutPasswordSuccess:(id)arg1;
- (void)checkEnterLoginWithoutPassword:(id)arg1;
- (void)uploadTrustyWifiSuccess:(id)arg1;
- (void)uploadTrustyWifi;
- (void)uploadWifiInfo;
- (void)initMonitor;
- (void)tranferToHistoryTableIfNeeded;
- (void)accelerometer:(id)arg1 didAccelerate:(id)arg2;
- (void)swap:(id)arg1;
- (void)checkPhonebookDelay;
- (void)mommentDataMigration;
- (void)loginSuccessConnectIMJ;
- (void)didCheckAccountSuccess:(id)arg1;
- (void)regRemoteNotification;
- (void)checkGameTemplates;
- (void)checkOfficialAccount;
- (void)checkEmotionConfig;
- (void)checkAuthorStatus;
- (void)sdimageAsyncClose;
- (void)handleFabricLog;
- (void)clearDataForLoginWithoutPassword;
- (void)prepareDataForLoginWithoutPassword;
- (void)doHeavyInit;
- (void)autoLoginDoHeavyInit;
- (void)resetNearbyContainerController;
- (void)resetUserConfigAfterUserInit:(_Bool)arg1;
- (void)checkUserPrePayment;
- (void)checkConfigAndInit;
- (void)unreadCounter:(id)arg1 liveNoticeUnreadCountDidChange:(unsigned long long)arg2;
- (void)unreadCounter:(id)arg1 storeCommentUnreadCountIncreased:(unsigned long long)arg2;
- (void)unreadCounter:(id)arg1 storeCommentUnreadCountDecreased:(unsigned long long)arg2;
- (void)unreadCounterHasBeenClean:(id)arg1;
- (void)unreadCounter:(id)arg1 notificationCenterUnreadCountDidChange:(unsigned long long)arg2;
- (void)unreadCounter:(id)arg1 countChanged:(unsigned long long)arg2 forKey:(id)arg3;
- (void)unreadCounterInited:(id)arg1;
- (void)initAudio;
- (void)webReportAndBlockSuccess:(id)arg1;
- (void)blockProfileInfo:(id)arg1;
- (void)initNotification;
- (void)removeCurrentUser;
- (void)initChatSession;
- (void)setIMJClient;
- (void)configureFts;
- (void)configureEta;
- (void)setCurrentUser:(id)arg1;
- (void)initBackGroundRequest;
- (void)initUserConfig:(id)arg1 pwd:(id)arg2 session:(id)arg3;
- (void)initAppConfig;
- (void)initwithCacheData;
- (void)handleGaodeDiscoverSDK;
- (void)checkIfNeedOpenGrowingIOLog;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)crashlyticsDidDetectReportForLastExecution:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)notifyServerTotalUnreadCountOfApp;
- (void)handleDidEnterBackground;
- (void)applicationWillResignActive:(id)arg1;
- (void)refreshUnreadCountOnAppIconIfNeeded;
- (void)initDelegateListener;
- (void)initStatusBar:(id)arg1;
- (_Bool)addSkipBackupAttributeToItem;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)clearStatusAndLogout:(id)arg1;
- (void)forceLogout:(long long)arg1 em:(id)arg2;
- (void)removeAllCurrentAlerts;
- (void)findAllAlertAndAction:(id)arg1;
- (void)imjClient:(id)arg1 stateChanged:(int)arg2 error:(id)arg3;
- (void)fileSender:(id)arg1 didFailSendChunkAtIndex:(unsigned long long)arg2 responseMsg:(id)arg3;
- (void)fileSender:(id)arg1 didSendChunk:(id)arg2 progress:(float)arg3;
- (void)fileSender:(id)arg1 didFinishSendAll:(id)arg2;
- (void)moveFileWithSenderUserInfo:(id)arg1 withExt:(id)arg2;
- (void)chunkSenderManager:(id)arg1 didFailChunkSender:(id)arg2 error:(id)arg3;
- (void)chunkSenderManager:(id)arg1 didFinishChunkSender:(id)arg2;
- (void)profileVideoConvertFinish:(id)arg1 successAt:(id)arg2 videoTime:(unsigned long long)arg3 uuid:(id)arg4;
- (void)writeGlanceToGroup:(id)arg1;
- (id)readGlaceFromGroup;
- (void)updateApplicationContext;
- (void)backGroudNewToHuntWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
