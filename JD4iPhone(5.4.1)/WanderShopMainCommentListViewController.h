//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDReloadViewDelegate.h"
#import "NewRefreshTableHeaderViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WanderShopCommentTableViewCellDelegate.h"
#import "WanderShopDetailPalletDelegate.h"
#import "WanderShopDetailPublishCommentDelegate.h"

@class JDFooterLoadingView, JDStoreNetwork, NSMutableArray, NSString, NewRefreshTableHeaderView, UITableView, WanderShopDetailCommentNullView, WanderShopDetailPublishCommentView, WanderShopDetailPublishPalletView;

@interface WanderShopMainCommentListViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, NewRefreshTableHeaderViewDelegate, JDReloadViewDelegate, WanderShopCommentTableViewCellDelegate, WanderShopDetailPalletDelegate, WanderShopDetailPublishCommentDelegate>
{
    WanderShopDetailPublishCommentView *_publishCommentView;
    WanderShopDetailPublishPalletView *_palletView;
    NSString *deleteCommentId;
    _Bool _canPubComment;
    _Bool _isLoading;
    _Bool _isGetMore;
    _Bool _isLoadEnd;
    _Bool _isFirstLoaded;
    NSString *_authorID;
    NSString *_authorName;
    NSString *_commendID;
    long long _commentCount;
    NSString *_MTAPageID;
    NSString *_LASTMTAPageID;
    WanderShopDetailCommentNullView *_emptyView;
    UITableView *_commentListTableview;
    NewRefreshTableHeaderView *_refreshHeaderView;
    NSString *_replyCommentId;
    NSMutableArray *_userCommentList;
    JDFooterLoadingView *_footerView;
    JDStoreNetwork *_getCommentListDao;
    JDStoreNetwork *_deleteDao;
    JDStoreNetwork *_sendCommentDao;
}

@property(nonatomic) _Bool isFirstLoaded; // @synthesize isFirstLoaded=_isFirstLoaded;
@property(retain, nonatomic) JDStoreNetwork *sendCommentDao; // @synthesize sendCommentDao=_sendCommentDao;
@property(retain, nonatomic) JDStoreNetwork *deleteDao; // @synthesize deleteDao=_deleteDao;
@property(retain, nonatomic) JDStoreNetwork *getCommentListDao; // @synthesize getCommentListDao=_getCommentListDao;
@property(retain, nonatomic) JDFooterLoadingView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSMutableArray *userCommentList; // @synthesize userCommentList=_userCommentList;
@property(copy, nonatomic) NSString *replyCommentId; // @synthesize replyCommentId=_replyCommentId;
@property(nonatomic) _Bool isLoadEnd; // @synthesize isLoadEnd=_isLoadEnd;
@property(nonatomic) _Bool isGetMore; // @synthesize isGetMore=_isGetMore;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NewRefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) UITableView *commentListTableview; // @synthesize commentListTableview=_commentListTableview;
@property(retain, nonatomic) WanderShopDetailCommentNullView *emptyView; // @synthesize emptyView=_emptyView;
@property(copy, nonatomic) NSString *LASTMTAPageID; // @synthesize LASTMTAPageID=_LASTMTAPageID;
@property(copy, nonatomic) NSString *MTAPageID; // @synthesize MTAPageID=_MTAPageID;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) _Bool canPubComment; // @synthesize canPubComment=_canPubComment;
@property(copy, nonatomic) NSString *commendID; // @synthesize commendID=_commendID;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(copy, nonatomic) NSString *authorID; // @synthesize authorID=_authorID;
- (void).cxx_destruct;
- (void)didFinishInToastView:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadData;
- (void)keyboardFrameChange:(id)arg1;
- (void)showInputView;
- (void)tapEncourageButton;
- (void)tapLikeButton:(_Bool)arg1;
- (void)tapInputView;
- (void)tapComment;
- (void)sendTap:(id)arg1;
- (void)cancelTap:(id)arg1;
- (void)commentCell:(id)arg1 clickUserHeadWithUserID:(id)arg2;
- (void)notificationRefresh;
- (void)commentFinishLogin;
- (void)sendButtonClicked:(id)arg1;
- (void)moveInputPadUp:(_Bool)arg1 height:(int)arg2;
- (void)loadCommentData:(_Bool)arg1;
- (void)checkAuthorModel;
- (void)scrollViewDidScroll:(id)arg1;
- (void)refreshData;
- (void)backTopButtonPressed:(id)arg1;
- (void)finishLoading;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)showLoadErrorView;
- (void)reconnect;
- (void)removeReloadView;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
