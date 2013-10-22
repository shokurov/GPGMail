/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class NSMutableDictionary, NSOperationQueue, NSTimer;

@interface _NonContentSmartMailboxUnreadCountManager : NSObject
{
    NSOperationQueue *_workQueue;
    NSMutableDictionary *_unreadLibraryIDsByMailbox;
    double _lastDisplayUpdateTime;
    BOOL _isObserving;
    NSTimer *_relativeDateTimer;
}

- (id)init;
- (void)dealloc;
- (void)updateSmartMailboxes;
- (void)_startObservingNotifications;
- (void)_stopObservingNotifications;
- (void)_setDisplayCounts;
- (void)_refreshForMailboxes:(id)arg1;
- (void)_messagesChanged:(id)arg1;
- (void)_messagesCompacted:(id)arg1;
- (void)_messagesNeedRefresh:(id)arg1;
- (void)_refreshRelativeDateMailboxes:(id)arg1;
- (void)_smartMailboxLoaded:(id)arg1;

@end
