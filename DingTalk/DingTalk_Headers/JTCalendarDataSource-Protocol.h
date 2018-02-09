//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JTCalendar, NSDate;

@protocol JTCalendarDataSource <NSObject>
- (void)calendarDidDateSelected:(JTCalendar *)arg1 date:(NSDate *)arg2;
- (_Bool)calendarHaveEvent:(JTCalendar *)arg1 date:(NSDate *)arg2;

@optional
- (void)calendarDidLoadNextPage;
- (void)calendarDidLoadPreviousPage;
- (_Bool)calendar:(JTCalendar *)arg1 canSelectDate:(NSDate *)arg2;
@end
