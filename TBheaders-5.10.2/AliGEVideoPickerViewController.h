//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AGEConfigModel, NSArray, NSString, UICollectionView;

@interface AliGEVideoPickerViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    NSString *_itemId;	// 8 = 0x8
    CDUnknownBlockType _fileCallback;	// 16 = 0x10
    UICollectionView *_mainCollectionView;	// 24 = 0x18
    NSArray *_dataSource;	// 32 = 0x20
    AGEConfigModel *_configModel;	// 40 = 0x28
}

@property(retain, nonatomic) AGEConfigModel *configModel; // @synthesize configModel=_configModel;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
@property(copy, nonatomic) CDUnknownBlockType fileCallback; // @synthesize fileCallback=_fileCallback;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)buttonDidPress;
- (void)popBack;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

