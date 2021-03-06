//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (TBUIKitForMTOPError)
- (_Bool)isResponseDataUnknowTypeError;
- (_Bool)isResponseDataIsHtmlOrScriptError;
- (_Bool)isResponseDataParseError;
- (_Bool)isAuthenticationError;
- (_Bool)isAuthRejectError;
- (_Bool)isInvalidSIDError;
- (_Bool)isMTOPAuthenticationError;
- (_Bool)isTopAuthenticationError;
- (_Bool)isNetWorkError;
- (_Bool)isMtopErrorResponse;
- (id)mtopSubMsg;
- (id)mtopSubCode;
- (id)mtopMsg;
- (id)mtopCode;
@end

