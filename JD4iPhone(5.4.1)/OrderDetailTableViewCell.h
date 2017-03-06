//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSDictionary, NSString, OrderDetailAddressView, OrderDetailBusinessEntranceView, OrderDetailGiftMessageView, OrderDetailHeadView, OrderDetailInfoView, OrderDetailPriceView, OrderDetailUploadIDView, OrderDetailWareTableView;

@interface OrderDetailTableViewCell : UITableViewCell
{
    OrderDetailHeadView *orderIdView;
    OrderDetailAddressView *addressView;
    OrderDetailAddressView *recipientAddressView;
    OrderDetailAddressView *giverAddressView;
    OrderDetailWareTableView *wareTableView;
    OrderDetailInfoView *payTypeAndInvoiceView;
    OrderDetailPriceView *priceView;
    OrderDetailUploadIDView *uploadIDView;
    OrderDetailGiftMessageView *giftMessageView;
    OrderDetailBusinessEntranceView *businessEntranceView;
    _Bool isGiftOrder;
    _Bool isHaveCardInfo;
    _Bool isHaveUploadIDInfo;
    _Bool isHavePriceInfo;
    _Bool isHaveAddressInfo;
    double offsetY;
    _Bool _isShowingAll;
    _Bool _isShowAllCustomerMessage;
    NSDictionary *_orderInfo;
    NSString *_orderId;
    NSArray *_wareList;
    NSArray *_amountList;
    id <OrderDetailTraceViewDelegate><OrderDetailWareTableViewDelegate><UploadIDDelegate><OrderDetailInfoViewDelegate><OrderDetailHeadViewDelegate><OrderDetailWareTableViewCellDelegate><OrderDetailBusinessDelegate><OrderDetailAddressViewDelegate> _delegate;
}

@property(nonatomic) id <OrderDetailTraceViewDelegate><OrderDetailWareTableViewDelegate><UploadIDDelegate><OrderDetailInfoViewDelegate><OrderDetailHeadViewDelegate><OrderDetailWareTableViewCellDelegate><OrderDetailBusinessDelegate><OrderDetailAddressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isShowAllCustomerMessage; // @synthesize isShowAllCustomerMessage=_isShowAllCustomerMessage;
@property(nonatomic) _Bool isShowingAll; // @synthesize isShowingAll=_isShowingAll;
@property(retain, nonatomic) NSArray *amountList; // @synthesize amountList=_amountList;
@property(retain, nonatomic) NSArray *wareList; // @synthesize wareList=_wareList;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) NSDictionary *orderInfo; // @synthesize orderInfo=_orderInfo;
- (double)getCellHeight;
- (void)setupPriceView;
- (void)setupGiftMessageView;
- (void)setupPayTypeAndInvoiceView;
- (void)setupWareTableView;
- (void)setupUploadIDView;
- (void)setupAddressView;
- (void)setBusinessEntranceView;
- (void)setupOrderIdView;
- (void)initData:(id)arg1;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
