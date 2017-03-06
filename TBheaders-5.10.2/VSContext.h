//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CIContext, EAGLContext;
@protocol MTLDevice;

@interface VSContext : NSObject
{
    CIContext *_CIContext;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    EAGLContext *_EAGLContext;	// 24 = 0x18
    id <MTLDevice> _MTLDevice;	// 32 = 0x20
    struct CGContext *_CGContext;	// 40 = 0x28
}

+ (id)contextWithType:(long long)arg1 options:(id)arg2;
+ (long long)suggestedContextType;
+ (_Bool)supportsType:(long long)arg1;
@property(readonly, nonatomic) struct CGContext *CGContext; // @synthesize CGContext=_CGContext;
@property(readonly, nonatomic) id <MTLDevice> MTLDevice; // @synthesize MTLDevice=_MTLDevice;
@property(readonly, nonatomic) EAGLContext *EAGLContext; // @synthesize EAGLContext=_EAGLContext;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) CIContext *CIContext; // @synthesize CIContext=_CIContext;
- (void).cxx_destruct;
- (id)initWithEAGLContext:(id)arg1;
- (id)initWithCGContextRef:(struct CGContext *)arg1;
- (id)initWithSoftwareRenderer:(_Bool)arg1;

@end
