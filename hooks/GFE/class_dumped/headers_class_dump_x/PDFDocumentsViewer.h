/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "PDFViewer.h"

@class DocumentsActionSheet, DocumentsTVC, NSString, NSURLConnection, UIActionSheet, UIToolbar;

@interface PDFDocumentsViewer : PDFViewer
{
    UIToolbar *_externalToolbar;
    DocumentsTVC *_documentsTVC;
    unsigned short documentID;
    NSURLConnection *_connection;
    NSString *_tempPDFFile;
    NSString *_tempFileDirectory;
    DocumentsActionSheet *_sharedAS;
    UIActionSheet *_confirmDeleteAction;
    BOOL _isOpenFromArchiveFile;
    NSString *fileName;
}

- (void)setConnection:(id)fp8;
- (id)connection;
- (void)setIsOpenFromArchiveFile:(BOOL)fp8;
- (BOOL)isOpenFromArchiveFile;
- (void)setDocumentsTVC:(id)fp8;
- (id)documentsTVC;
- (void)setExternalToolbar:(id)fp8;
- (id)externalToolbar;
- (void)setDocumentID:(unsigned short)fp8;
- (unsigned short)documentID;
- (void)setFileName:(id)fp8;
- (id)fileName;
- (void)viewDidLayoutSubviews;
- (void)doLoadPdfDocumentMain;
- (void)connectionDidFinishLoading:(id)fp8;
- (void)connection:(id)fp8 didReceiveData:(id)fp12;
- (void)connection:(id)fp8 didFailWithError:(id)fp12;
- (void)actionSheet:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (int *)createAttachementPath:(id)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)dealloc;
- (void)cleanTempDirectory;
- (void)setRightButtonItem;
- (void)actionShareSelectedItem;
- (void)actionDeleteSelectedItem;
- (void)dismissActionSheet;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12 withURL:(id)fp16 isOpenFromArchiveFile:(BOOL)fp20;
- (id)getDefaultAutomationScreenName;

@end

