//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASDealloc2MainObject.h"

#import "ASDataControllerDelegate.h"

@class NSSet, NSString;

@interface ASRangeController : ASDealloc2MainObject <ASDataControllerDelegate>
{
    id <ASLayoutController> _layoutController;
    id <ASRangeControllerDataSource> _dataSource;
    id <ASRangeControllerDelegate> _delegate;
    _Bool _rangeIsValid;
    _Bool _queuedRangeUpdate;
    _Bool _layoutControllerImplementsSetVisibleIndexPaths;
    long long _scrollDirection;
    NSSet *_allPreviousIndexPaths;
    unsigned long long _currentRangeMode;
    _Bool _didUpdateCurrentRange;
    _Bool _didRegisterForNotifications;
    double _pendingDisplayNodesTimestamp;
}

+ (void)willEnterForeground:(id)arg1;
+ (void)didEnterBackground:(id)arg1;
+ (void)didReceiveMemoryWarning:(id)arg1;
+ (void)setRangeModeForMemoryWarnings:(unsigned long long)arg1;
+ (void)registerSharedApplicationNotifications;
+ (id)allRangeControllersWeakSet;
+ (unsigned long long)rangeModeForInterfaceState:(unsigned long long)arg1 currentRangeMode:(unsigned long long)arg2;
+ (_Bool)isFirstRangeUpdateForRangeMode:(unsigned long long)arg1;
@property(nonatomic) __weak id <ASRangeControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ASRangeControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) id <ASLayoutController> layoutController; // @synthesize layoutController=_layoutController;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)descriptionWithIndexPaths:(id)arg1;
- (void)clearFetchedData;
- (void)clearContents;
- (void)dataController:(id)arg1 didDeleteSectionsAtIndexSet:(id)arg2 withAnimationOptions:(unsigned long long)arg3;
- (void)dataController:(id)arg1 didInsertSections:(id)arg2 atIndexSet:(id)arg3 withAnimationOptions:(unsigned long long)arg4;
- (void)dataController:(id)arg1 didDeleteNodes:(id)arg2 atIndexPaths:(id)arg3 withAnimationOptions:(unsigned long long)arg4;
- (void)dataController:(id)arg1 didInsertNodes:(id)arg2 atIndexPaths:(id)arg3 withAnimationOptions:(unsigned long long)arg4;
- (void)dataController:(id)arg1 endUpdatesAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dataControllerBeginUpdates:(id)arg1;
- (CDStruct_c3b9c2ee)tuningParametersForRangeMode:(unsigned long long)arg1 rangeType:(long long)arg2;
- (void)setTuningParameters:(CDStruct_c3b9c2ee)arg1 forRangeMode:(unsigned long long)arg2 rangeType:(long long)arg3;
- (void)configureContentView:(id)arg1 forCellNode:(id)arg2;
- (void)scheduledNodesDidDisplay:(id)arg1;
- (void)registerForNotificationsForInterfaceStateIfNeeded:(unsigned long long)arg1;
- (void)_updateVisibleNodeIndexPaths;
- (void)performRangeUpdate;
- (void)scheduleRangeUpdate;
- (void)updateCurrentRangeWithMode:(unsigned long long)arg1;
- (void)visibleNodeIndexPathsDidChangeWithScrollDirection:(long long)arg1;
- (unsigned long long)interfaceState;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

