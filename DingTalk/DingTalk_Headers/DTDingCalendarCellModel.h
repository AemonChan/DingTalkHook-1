//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTCalendarBaseCellItem.h"

@class NSAttributedString, NSString, UIColor;

@interface DTDingCalendarCellModel : DTCalendarBaseCellItem
{
    _Bool _showStatus;
    NSString *_leftSubTitle;
    NSAttributedString *_leftSubAttriTitle;
    NSAttributedString *_rightAttriTitle;
    NSString *_rightContent;
    NSString *_comment;
    long long _senderUid;
    long long _dingId;
    NSString *_iconMediaId;
    NSString *_iconUrl;
    UIColor *_bgColor;
}

+ (id)transferToHttpUrl:(id)arg1 maxSize:(struct CGSize)arg2;
+ (id)calendarTaskLeftSubTitleWithInstance:(id)arg1;
+ (id)calendarMeetingLeftSubTitleWithInstance:(id)arg1;
+ (id)calendarDingLeftSubTitleWithInstance:(id)arg1;
+ (id)sourceWithSourceType:(long long)arg1;
+ (id)convertFromEvent:(id)arg1;
+ (id)unSupportCalendarCellModel;
+ (_Bool)isSupportCalendarVersion:(long long)arg1;
+ (id)cellModelFromCalendarInstance:(id)arg1 date:(id)arg2;
+ (id)cellModelFromInstance:(id)arg1;
+ (id)calendarCellDateFormatter;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *iconMediaId; // @synthesize iconMediaId=_iconMediaId;
@property(nonatomic) long long dingId; // @synthesize dingId=_dingId;
@property(nonatomic) long long senderUid; // @synthesize senderUid=_senderUid;
@property(nonatomic) _Bool showStatus; // @synthesize showStatus=_showStatus;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *rightContent; // @synthesize rightContent=_rightContent;
@property(copy, nonatomic) NSAttributedString *rightAttriTitle; // @synthesize rightAttriTitle=_rightAttriTitle;
@property(copy, nonatomic) NSAttributedString *leftSubAttriTitle; // @synthesize leftSubAttriTitle=_leftSubAttriTitle;
@property(copy, nonatomic) NSString *leftSubTitle; // @synthesize leftSubTitle=_leftSubTitle;
- (void).cxx_destruct;
- (double)heightForCell;
- (id)reuseIdentifier;
- (id)cellForItem;
- (id)init;

@end
