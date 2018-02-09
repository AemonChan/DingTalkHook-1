//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class LWPNetworkDiagnoser, NSMutableArray, UIButton, UITextView, UIView;

@interface LWPNetDiagnoserViewController : UIViewController
{
    UITextView *_textView;
    UIView *_mainView;
    NSMutableArray *_taskList;
    LWPNetworkDiagnoser *_networkDiagnoser;
    UIButton *_diagnoserBtn;
    UIButton *_viewServerlistBtn;
    UIButton *_refreshServerlistBtn;
}

@property(retain, nonatomic) UIButton *refreshServerlistBtn; // @synthesize refreshServerlistBtn=_refreshServerlistBtn;
@property(retain, nonatomic) UIButton *viewServerlistBtn; // @synthesize viewServerlistBtn=_viewServerlistBtn;
@property(retain, nonatomic) UIButton *diagnoserBtn; // @synthesize diagnoserBtn=_diagnoserBtn;
@property(retain, nonatomic) LWPNetworkDiagnoser *networkDiagnoser; // @synthesize networkDiagnoser=_networkDiagnoser;
@property(retain, nonatomic) NSMutableArray *taskList; // @synthesize taskList=_taskList;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)runTask:(id)arg1;
- (_Bool)doDiagnoseTask:(id)arg1;
- (void)endNetDiagonose;
- (void)performNextTask;
- (void)initTasks;
- (void)didClkFreshServerCache:(id)arg1;
- (void)didClkServerCache:(id)arg1;
- (void)startNetDiagnose:(id)arg1;
- (void)copyResult:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
- (void)dealloc;

@end
