//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWebView.h>

#import "BLEditorViewProtocol-Protocol.h"

@class NSString, UIScrollView;
@protocol BLEditorHeaderViewProtocol;

@interface BLBaseEditorView : UIWebView <BLEditorViewProtocol>
{
    id <BLEditorHeaderViewProtocol> _headerView;
    UIScrollView *_scrollView;
    _Bool _editorCanEdit;
    _Bool _isContentLoaded;
    _Bool _isAnimating;
    NSString *_strHtmlEditorTemplate;
    NSString *_strContentHtml;
}

@property(copy, nonatomic) NSString *strContentHtml; // @synthesize strContentHtml=_strContentHtml;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool isContentLoaded; // @synthesize isContentLoaded=_isContentLoaded;
@property(nonatomic) _Bool editorCanEdit; // @synthesize editorCanEdit=_editorCanEdit;
@property(copy, nonatomic) NSString *strHtmlEditorTemplate; // @synthesize strHtmlEditorTemplate=_strHtmlEditorTemplate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollAfterZooming:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)hideOrShowEditorPlaceholder:(_Bool)arg1;
- (void)replaceAttachesCidsToPaths:(id)arg1;
- (void)replaceAttachesPathsToCids:(id)arg1;
- (id)hackishlyFoundBrowserView:(id)arg1;
- (_Bool)headerHasChanges;
- (_Bool)editorHasChanges;
- (id)getCurrentTextContentWithoutWhitespaceAndNewLines;
- (id)getCurrentTextContent;
- (id)getCurrentHtmlContent;
- (_Bool)headerBecomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)hackWebViewScrollView:(id)arg1;
- (void)setHackishlyStopSetScrollOffset:(_Bool)arg1;
- (void)initWebView;
- (id)generateHtmlContent;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (void)setShowsHorizontalScrollIndicator:(_Bool)arg1;
- (void)setShowsVerticalScrollIndicator:(_Bool)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)contentInset;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)getContentOffset;
- (struct CGSize)getContentSize;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)adjustContentSizeToFit:(_Bool)arg1;
- (void)adjustContentSizeToFit;
- (void)scrollToDefaultContentOffset:(_Bool)arg1;
- (void)scrollToDefaultContentOffset;
- (double)defaultContentOffsetTop;
- (void)adjustContentInsetToFit;
- (double)defaultContentInsetTop;
- (void)layoutHeaderView;
- (id)getHeaderSubject;
- (void)setHeaderSubject:(id)arg1;
- (void)loadHtmlContent:(id)arg1;
- (void)setEditorViewDelegate:(id)arg1;
- (id)getHeaderView;
- (void)initHeaderView;
- (void)initEditorView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

