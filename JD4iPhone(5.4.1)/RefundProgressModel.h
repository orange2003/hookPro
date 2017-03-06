//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface RefundProgressModel : NSObject
{
    NSString *_code;
    NSString *_orderId;
    NSString *_refundReason;
    NSString *_refundState;
    NSString *_refundPrompt;
    NSArray *_priceList;
    NSArray *_refundMessage;
}

@property(retain, nonatomic) NSArray *refundMessage; // @synthesize refundMessage=_refundMessage;
@property(retain, nonatomic) NSArray *priceList; // @synthesize priceList=_priceList;
@property(retain, nonatomic) NSString *refundPrompt; // @synthesize refundPrompt=_refundPrompt;
@property(retain, nonatomic) NSString *refundState; // @synthesize refundState=_refundState;
@property(retain, nonatomic) NSString *refundReason; // @synthesize refundReason=_refundReason;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end
