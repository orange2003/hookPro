//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBFestivalManager : NSObject
{
}

+ (id)getValueWithKey:(id)arg1 module:(id)arg2;
+ (id)currentImageModuleName;
+ (_Bool)prepareResourcesWithKeys:(id)arg1 module:(id)arg2 complete:(CDUnknownBlockType)arg3;
+ (id)dateWithKey:(id)arg1;
+ (id)dateWithKey:(id)arg1 module:(id)arg2;
+ (_Bool)boolWithKey:(id)arg1 module:(id)arg2 defaultValue:(_Bool)arg3;
+ (_Bool)boolWithKey:(id)arg1 defaultValue:(_Bool)arg2;
+ (id)textWithKey:(id)arg1;
+ (id)textWithKey:(id)arg1 module:(id)arg2;
+ (id)colorWithKey:(id)arg1;
+ (id)colorWithKey:(id)arg1 module:(id)arg2;
+ (_Bool)isFestivalOnAtTime:(id)arg1;
+ (_Bool)isFestivalOnAtTime:(id)arg1 forModule:(id)arg2;
+ (_Bool)isFestivalOnForModule:(id)arg1;
+ (_Bool)isFestivalOn;

@end

