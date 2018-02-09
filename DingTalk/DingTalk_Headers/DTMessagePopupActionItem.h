//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTIconFontConf, NSDictionary, NSString, UIColor, UIImage;

@interface DTMessagePopupActionItem : NSObject
{
    _Bool _enableHotDot;
    NSString *_title;
    UIImage *_backgroundImage;
    NSString *_iconUrl;
    UIImage *_backgroundImageHigh;
    UIColor *_titleColor;
    NSDictionary *_userInfo;
    DTIconFontConf *_icon;
    DTIconFontConf *_iconHigh;
    id _target;
    SEL _action;
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) DTIconFontConf *iconHigh; // @synthesize iconHigh=_iconHigh;
@property(retain, nonatomic) DTIconFontConf *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool enableHotDot; // @synthesize enableHotDot=_enableHotDot;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIImage *backgroundImageHigh; // @synthesize backgroundImageHigh=_backgroundImageHigh;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
