//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageTwoInputFilter.h"

@interface GPUImageChromaKeyBlendFilter : GPUImageTwoInputFilter
{
    int colorToReplaceUniform;	// 296 = 0x128
    int thresholdSensitivityUniform;	// 300 = 0x12c
    int smoothingUniform;	// 304 = 0x130
    float _thresholdSensitivity;	// 308 = 0x134
    float _smoothing;	// 312 = 0x138
}

@property(nonatomic) float smoothing; // @synthesize smoothing=_smoothing;
@property(nonatomic) float thresholdSensitivity; // @synthesize thresholdSensitivity=_thresholdSensitivity;
- (void)setColorToReplaceRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (id)init;

@end

