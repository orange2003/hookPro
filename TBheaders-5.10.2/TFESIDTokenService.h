//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet;

@interface TFESIDTokenService : NSObject
{
    NSSet *_allowHeaders;	// 8 = 0x8
}

+ (id)sharedInstance;
@property(retain) NSSet *allowHeaders; // @synthesize allowHeaders=_allowHeaders;
- (void).cxx_destruct;
- (id)refreashSid;
- (id)getSid;
- (id)getBySid:(id)arg1 space:(id)arg2 error:(id *)arg3;
- (id)refreashAndGetToken:(id)arg1 error:(id *)arg2;
- (id)getToken:(id)arg1 error:(id *)arg2;
- (id)init;

@end
