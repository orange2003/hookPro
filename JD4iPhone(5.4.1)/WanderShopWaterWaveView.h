//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, CAShapeLayer, UIColor;

@interface WanderShopWaterWaveView : UIView
{
    double waveAmplitude;
    double waveCycle;
    double waveSpeed;
    double waveGrowth;
    double waterWaveHeight;
    double waterWaveWidth;
    double offsetX;
    double currentWavePointY;
    float variable;
    _Bool increase;
    UIColor *_firstWaveColor;
    UIColor *_secondWaveColor;
    double _percent;
    CADisplayLink *_waveDisplaylink;
    CAShapeLayer *_firstWaveLayer;
    CAShapeLayer *_secondWaveLayer;
    CDUnknownBlockType _animationFinished;
}

@property(copy, nonatomic) CDUnknownBlockType animationFinished; // @synthesize animationFinished=_animationFinished;
@property(retain, nonatomic) CAShapeLayer *secondWaveLayer; // @synthesize secondWaveLayer=_secondWaveLayer;
@property(retain, nonatomic) CAShapeLayer *firstWaveLayer; // @synthesize firstWaveLayer=_firstWaveLayer;
@property(retain, nonatomic) CADisplayLink *waveDisplaylink; // @synthesize waveDisplaylink=_waveDisplaylink;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(retain, nonatomic) UIColor *secondWaveColor; // @synthesize secondWaveColor=_secondWaveColor;
@property(retain, nonatomic) UIColor *firstWaveColor; // @synthesize firstWaveColor=_firstWaveColor;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopWave;
- (void)setCurrentSecondWaveLayerPath;
- (void)setCurrentFirstWaveLayerPath;
- (void)getCurrentWave:(id)arg1;
- (void)animateWave;
- (void)reset;
- (void)startWave;
- (void)resetProperty;
- (void)setUp;
- (void)beginPercent:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

