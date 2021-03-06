//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDirectoryEnumerator.h"

@class NSArray;

@interface GDDirectoryEnumeratorWrapper : NSDirectoryEnumerator
{
    NSDirectoryEnumerator *enumerator;
    NSArray *keys;
}

- (void)skipDescendents;
- (void)skipDescendants;
- (unsigned int)level;
- (id)fileAttributes;
- (id)directoryAttributes;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)nextObject;
- (id)allObjects;
- (id)initWithDirectoryEnumerator:(id)arg1;

@end

