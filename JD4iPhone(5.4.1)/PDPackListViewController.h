//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "PDPackBottomCellProtocol.h"
#import "PDPackColorSizePopupViewProtocol.h"
#import "PDPackContentCellProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, NewProductModel, PDPackColorSizePopupView, UITableView, WareInfoDataAccessObject;

@interface PDPackListViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, PDPackContentCellProtocol, PDPackBottomCellProtocol, PDPackColorSizePopupViewProtocol>
{
    long long _selectedSection;
    long long _selectedRow;
    UITableView *_tableView;
    NewProductModel *_model;
    WareInfoDataAccessObject *_dataAcessObject;
    PDPackColorSizePopupView *_colorSizePopupView;
}

@property(retain, nonatomic) PDPackColorSizePopupView *colorSizePopupView; // @synthesize colorSizePopupView=_colorSizePopupView;
@property(retain, nonatomic) WareInfoDataAccessObject *dataAcessObject; // @synthesize dataAcessObject=_dataAcessObject;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property(nonatomic) long long selectedSection; // @synthesize selectedSection=_selectedSection;
- (void).cxx_destruct;
- (id)cretePackView:(id)arg1;
- (id)cellForIdentifier:(id)arg1;
- (void)confirmButtonTapped:(id)arg1 productModel:(id)arg2;
- (void)imageViewTapped:(id)arg1 miniSkuDetailModel:(id)arg2;
- (void)changeSku:(id)arg1;
- (void)updateShoppingCartCountWithAnimation:(_Bool)arg1;
- (void)addToCartNotification:(id)arg1;
- (void)addCart:(id)arg1;
- (void)colorSizeButtonTapped:(id)arg1 currentPackProductModel:(id)arg2 index:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)statusBarFrameChanged:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
