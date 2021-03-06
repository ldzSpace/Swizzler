/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "RowView.h"

@class SecurityMessageMarkingView, UIButton, UILabel;

@interface RowMessageMarkingComposeView : RowView
{
    SecurityMessageMarkingView *_markingView;
    UIButton *_markingSelection;
    UILabel *_markingMessage;
}

- (id)markingMessage;
- (id)markingSelection;
- (void)disableMessageMarkingView;
- (void)enableMessageMarkingView;
- (id)initWithFrame:(struct CGRect)fp8 andDelegate:(id)fp24;
- (void)dealloc;

@end

