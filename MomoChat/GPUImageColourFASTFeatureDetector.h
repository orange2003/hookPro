//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageBoxBlurFilter, GPUImageColourFASTSamplingOperation;

@interface GPUImageColourFASTFeatureDetector : GPUImageFilterGroup
{
    GPUImageBoxBlurFilter *blurFilter;
    GPUImageColourFASTSamplingOperation *colourFASTSamplingOperation;
    double blurRadiusInPixels;
}

- (void).cxx_destruct;
@property(nonatomic) double blurRadiusInPixels; // @synthesize blurRadiusInPixels;
- (id)init;

@end
