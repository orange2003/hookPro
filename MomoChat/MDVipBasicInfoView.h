//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface MDVipBasicInfoView : UIView
{
    int _sex;
    NSString *_name;
    long long _age;
    NSString *_constellation;
    UIImage *_vipIconImage;
    UILabel *_nameLabel;
    UIImageView *_nameLabelBgImageView;
    UIImageView *_vipIcon;
    UIImageView *_vipIconBgImageView;
    UIImageView *_sexIcon;
    UILabel *_ageLabel;
    UIImageView *_ageLabelBgImageView;
}

@property(retain, nonatomic) UIImageView *ageLabelBgImageView; // @synthesize ageLabelBgImageView=_ageLabelBgImageView;
@property(retain, nonatomic) UILabel *ageLabel; // @synthesize ageLabel=_ageLabel;
@property(retain, nonatomic) UIImageView *sexIcon; // @synthesize sexIcon=_sexIcon;
@property(retain, nonatomic) UIImageView *vipIconBgImageView; // @synthesize vipIconBgImageView=_vipIconBgImageView;
@property(retain, nonatomic) UIImageView *vipIcon; // @synthesize vipIcon=_vipIcon;
@property(retain, nonatomic) UIImageView *nameLabelBgImageView; // @synthesize nameLabelBgImageView=_nameLabelBgImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImage *vipIconImage; // @synthesize vipIconImage=_vipIconImage;
@property(nonatomic) int sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *constellation; // @synthesize constellation=_constellation;
@property(nonatomic) long long age; // @synthesize age=_age;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)refreshView;
- (void)refreshByUserProfile:(id)arg1;
- (void)refreshByPersonalProfile:(id)arg1;
- (void)refreshAge;
- (void)setupAge;
- (void)refreshVipIcon;
- (void)setupVipIcon;
- (void)refreshName;
- (void)setupName;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

