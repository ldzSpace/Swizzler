/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "SendLogCommandDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class CellWithGUTextView, GUBarButtonItem, NSString, SendLogCommand, UILabel, UISwitch, UITableView, UITableViewCell;

@interface SendFeedbackViewController : _ABAddressBookAddRecord <UITextViewDelegate, UITableViewDelegate, UITableViewDataSource, SendLogCommandDelegate>
{
    SendLogCommand *_sendLogCommand;
    int _selectedType;
    UILabel *_sendLogs;
    UISwitch *_logSwitch;
    UITableView *_feedbackTableView;
    GUBarButtonItem *_sendButton;
    CellWithGUTextView *_cellWithText;
    UITableViewCell *_footerCell;
    NSString *_feedbackText;
    unsigned short _sentEmailRecNum;
}

- (void)setFeedbackText:(id)fp8;
- (id)feedbackText;
- (void)setCellWithText:(id)fp8;
- (id)cellWithText;
- (void)setFeedbackTableView:(id)fp8;
- (id)feedbackTableView;
- (void)setSendButton:(id)fp8;
- (id)sendButton;
- (void)dealloc;
- (void)handleSendLogCommandBackground;
- (void)handleSendLogCommandOkCancel;
- (void)handleSendLogCommandResume;
- (void)textViewDidChange:(id)fp8;
- (BOOL)textView:(id)fp8 shouldChangeTextInRange:(struct _NSRange)fp12 replacementText:(id)fp20;
- (void)sendFeedbackAction:(id)fp8;
- (void)cancelAction:(id)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 viewForHeaderInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForHeaderInSection:(int)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)scrollIntoView:(id)fp8;
- (void)screenHeightReducedBy:(float)fp8;
- (void)keyboardWillHide:(id)fp8;
- (void)keyboardWillShow:(id)fp8;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;
- (id)getDefaultAutomationScreenName;

@end
