//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSString, UIPickerView;

@interface JDJPCertTypePicker : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *certTypePicker;
    NSArray *certTypeArray;
    _Bool _showIdentity;
}

@property(nonatomic) _Bool showIdentity; // @synthesize showIdentity=_showIdentity;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)setShow:(_Bool)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
