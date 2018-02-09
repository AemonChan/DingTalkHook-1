//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTPhoneSystemCalendarHandler;

@interface DTCalendarManager : NSObject
{
    _Bool _isCalendarGrayOpen;
    DTPhoneSystemCalendarHandler *_sysCalHandler;
}

+ (_Bool)isShowSycnSetting;
+ (_Bool)isSycnAlimaiCalendar;
+ (void)refreshFoldersWithAccount:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)expandInstancesForCalendarEvent:(id)arg1 forMonthSet:(id)arg2 exceptionDateTimeSet:(id)arg3 delaySaveCache:(id)arg4;
+ (void)expandInstancesForCalendar:(id)arg1 forMonthSet:(id)arg2 delaySaveCache:(id)arg3;
+ (void)buildCalendarInstancesForWrappers:(id)arg1 forMonths:(id)arg2;
+ (void)buildCalendarInstancesForWrapper:(id)arg1 forMonths:(id)arg2;
+ (void)localDeleteCalendarInstancesWithWrapperId:(long long)arg1;
@property(retain, nonatomic) DTPhoneSystemCalendarHandler *sysCalHandler; // @synthesize sysCalHandler=_sysCalHandler;
@property(nonatomic) _Bool isCalendarGrayOpen; // @synthesize isCalendarGrayOpen=_isCalendarGrayOpen;
- (void).cxx_destruct;
- (id)allMailAccounts;
- (void)setMailCalendarAllowedNotice:(_Bool)arg1 account:(id)arg2;
- (void)setMailCalendarAllowedNotice:(_Bool)arg1;
- (long long)getCurrentTime;
- (void)fillupRepeatCalendar:(double)arg1 times:(long long)arg2;
- (void)fillupCalendar:(double)arg1 cursorTime:(double)arg2 times:(long long)arg3;
- (id)localInstanceDaysWithMonthSomeDay:(id)arg1;
- (id)instanceDaysWithMonthSomeDay:(id)arg1;
- (void)clearVersionAndCursorTime;
- (long long)findRepeatCalendarMinCreateAt:(id)arg1;
- (long long)findCalendarMinStartTime:(id)arg1;
- (long long)findCalendarMaxVersion:(id)arg1;
- (_Bool)updateRepeatCalendarCreateAt:(double)arg1;
- (_Bool)updateCalendarCursorTime:(double)arg1;
- (double)repeatcalendarCreateAt;
- (double)calendarCursorTime;
- (_Bool)updateCalendarVersion:(long long)arg1;
- (long long)calendarMaxVersion;
- (void)loadCalenarInstanceWithNotifyId:(id)arg1 userId:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (id)dateStringWithDate:(id)arg1;
- (id)mailExistInstanceDaysWithAccount:(id)arg1 monthSomeDay:(id)arg2;
- (id)mailExistInstanceDaysWithMonthSomeDay:(id)arg1;
- (id)calendarInstancesForDate:(id)arg1;
- (void)refreshAllFoldersForAccount:(id)arg1;
- (id)findCalendarFolderWithAccount:(id)arg1;
- (void)refreshAllMailAccountCalendar;
- (void)refreshCalendarWithAccount:(id)arg1;
- (void)refreshCalendarDataWhenCalDidAppear;
- (void)asyncCalendar;
- (void)setup;
- (void)mailCalendarChanged:(id)arg1;
- (void)signInNotify:(id)arg1;
- (void)addObservers;
- (void)dealloc;
- (id)init;

@end
