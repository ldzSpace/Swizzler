/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@interface PDFSequentialCGDataProviderInfo : _ABAddressBookAddRecord
{
    struct DecryptCacheReadStream *stream;
}

+ (struct CGDataProviderSequentialCallbacks)sequentialDataProviderCallbacks;
- (void)doRelease;
- (void)dealloc;
- (id)initWithFilePath:(int *)fp8;

@end

