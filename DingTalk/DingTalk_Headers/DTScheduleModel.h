//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTRecurRuleModel, NSArray, NSNumber, NSString;

@interface DTScheduleModel : Marshal
{
    NSNumber *_startTime;
    NSNumber *_endTime;
    NSString *_location;
    NSString *_subject;
    NSNumber *_allDayEvent;
    DTRecurRuleModel *_recurRuleModel;
    NSArray *_exceptionDateList;
    NSArray *_expandDateList;
    NSArray *_alarmList;
    NSString *_comment;
}

@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSArray *alarmList; // @synthesize alarmList=_alarmList;
@property(copy, nonatomic) NSArray *expandDateList; // @synthesize expandDateList=_expandDateList;
@property(copy, nonatomic) NSArray *exceptionDateList; // @synthesize exceptionDateList=_exceptionDateList;
@property(retain, nonatomic) DTRecurRuleModel *recurRuleModel; // @synthesize recurRuleModel=_recurRuleModel;
@property(retain, nonatomic) NSNumber *allDayEvent; // @synthesize allDayEvent=_allDayEvent;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSNumber *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

