//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "KLGenericViewController.h"

@class AppointmentWrapper, KLDayViewMgr;

@interface KLDayViewController : KLGenericViewController
{
    AppointmentWrapper *meeting;
    BOOL goToEvent;
    AppointmentWrapper *eventToGo;
    KLDayViewMgr *dayViewMgr;
}

@property(readonly, nonatomic) KLDayViewMgr *dayViewMgr; // @synthesize dayViewMgr;
@property(retain, nonatomic) AppointmentWrapper *meeting; // @synthesize meeting;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateNavControl;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)goToEventDetailWithId:(unsigned long)arg1 andInstance:(long)arg2;
- (void)loadView;
- (id)titleString;

@end
