//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBAccsDazaer : NSObject
{
    _Bool _bindapping;	// 8 = 0x8
    _Bool _needBindApp;	// 9 = 0x9
}

+ (id)shareInstance;
@property(nonatomic) _Bool needBindApp; // @synthesize needBindApp=_needBindApp;
- (void)bindapp;
- (void)applicationWillEnterBackground;
- (void)applicationWillEnterForeground;
- (void)handle:(id)arg1 response:(id)arg2 error:(id)arg3 parameters:(id)arg4;
- (id)init;

@end

