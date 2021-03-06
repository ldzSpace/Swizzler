//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GDLocalStorage : NSObject
{
    struct sqlite3 *database;
}

- (id)dbFilePath;
- (id)initWithDBPath:(id)arg1;
- (id)initWithDefaultDB;
- (void)dealloc;
- (id)init;
- (id)getItems;
- (void)remove:(id)arg1;
- (void)clear;
- (void)set:(id)arg1 Object:(id)arg2;
- (void)set:(id)arg1 Item:(id)arg2;
- (id)getObject:(id)arg1;
- (id)getItem:(id)arg1;

@end

