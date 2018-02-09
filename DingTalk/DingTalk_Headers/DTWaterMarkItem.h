//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIFont;

@interface DTWaterMarkItem : NSObject
{
    NSString *_iconName;
    NSString *_title;
    NSString *_content;
    UIColor *_textColor;
    UIFont *_textFont;
    UIColor *_bgColor;
}

+ (id)showPhoneNum:(id)arg1;
+ (id)showOrgUserName:(id)arg1;
+ (id)contentWithOrgName:(id)arg1 phoneNum:(id)arg2;
+ (id)itemWithTitle:(id)arg1 orgUserName:(id)arg2 phoneNum:(id)arg3;
+ (id)itemWithTitle:(id)arg1 content:(id)arg2;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void).cxx_destruct;

@end
