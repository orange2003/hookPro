//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRecognizer, MRecognizerResult, NSData, NSError, NSString;

@protocol MRecognizerDelegate <NSObject>

@optional
- (void)recognizerWakeFail:(MRecognizer *)arg1 withText:(NSString *)arg2;
- (void)recognizerDidWake:(MRecognizer *)arg1;
- (void)recognizerExitWakingMode:(MRecognizer *)arg1 error:(NSError *)arg2;
- (void)recognizerEnterWakingMode:(MRecognizer *)arg1;
- (void)recognizerDidStopRecording:(MRecognizer *)arg1 withRecorderData:(NSData *)arg2;
- (void)recognizerDidStopRecording:(MRecognizer *)arg1;
- (void)recognizerDidStartRecording:(MRecognizer *)arg1;
- (void)recognizer:(MRecognizer *)arg1 recordingWithVoiceVolume:(unsigned long long)arg2;
- (void)recognizer:(MRecognizer *)arg1 didReceiveMessage:(MRecognizerResult *)arg2 error:(NSError *)arg3;
- (void)recognizer:(MRecognizer *)arg1 didCompleteRecognizingWithResult:(MRecognizerResult *)arg2 error:(NSError *)arg3;
@end

