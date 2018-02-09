//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTCalendarViewBaseHandler.h"

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface DTCalendarViewHandler : DTCalendarViewBaseHandler
{
    NSObject<OS_dispatch_semaphore> *_lock;
}

+ (id)nextWholeHourWithSelectedDate:(id)arg1;
+ (void)deletePhoneSystemCalendarWithEvent:(id)arg1 store:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)sectionViewWithDate:(id)arg1 finisBlock:(CDUnknownBlockType)arg2;
+ (void)openExpiredTaskWithVC:(id)arg1;
+ (id)summarySectionModelWithTitle:(id)arg1 comment:(id)arg2 currentVC:(id)arg3;
+ (id)sectionModelWithTitle:(id)arg1 comment:(id)arg2 date:(id)arg3 currentVC:(id)arg4;
+ (id)invalidCalendarTypes;
+ (id)invalidCalendarList;
+ (long long)statisticsTypeWithCalendarType:(long long)arg1 source:(long long)arg2;
+ (id)currentTimeString;
- (void).cxx_destruct;
- (void)deleteMailCalendarInstance:(id)arg1 cellModel:(id)arg2;
- (void)deleteDingCalendarInstance:(id)arg1 cellModel:(id)arg2;
- (void)safeLoadMonthSysDotsWithDate:(id)arg1 store:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadMonthSysDotsWithDate:(id)arg1 store:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)loadDaymailModelsWithDate:(id)arg1;
- (void)loadDaySysEventModelsWithStore:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadHolidayDataWithSuccessBlock:(CDUnknownBlockType)arg1 failurelBlock:(CDUnknownBlockType)arg2;
- (id)showModelsWithEvents:(id)arg1 store:(id)arg2;
- (id)calendarCellModelsWithDate:(id)arg1;
- (id)initWithContext:(id)arg1;

@end
