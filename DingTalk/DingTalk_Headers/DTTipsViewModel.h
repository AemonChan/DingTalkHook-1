//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface DTTipsViewModel : NSObject
{
    NSString *_navbarTitle;
    NSString *_leftButtonTitle;
    UIImage *_icon;
    NSString *_title;
    NSString *_content;
    NSString *_action;
}

@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *leftButtonTitle; // @synthesize leftButtonTitle=_leftButtonTitle;
@property(copy, nonatomic) NSString *navbarTitle; // @synthesize navbarTitle=_navbarTitle;
- (void).cxx_destruct;

@end

