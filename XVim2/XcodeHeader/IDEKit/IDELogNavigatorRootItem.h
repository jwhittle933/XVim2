//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDECIDataSourceSnapshotsChangedObserver-Protocol.h>
#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDelayedInvocation, DVTDocumentLocation, DVTFileDataType, IDEFileReference, IDELogManager, IDELogNavigatorItem, IDENavigableItemCoordinator, IDEWorkspace, NSArray, NSImage, NSMutableArray, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface IDELogNavigatorRootItem : NSObject <IDEKeyDrivenNavigableItemRepresentedObject, IDECIDataSourceSnapshotsChangedObserver>
{
    IDEWorkspace *_workspace;
    BOOL _groupByTime;
    NSString *_identifier;
    DVTDelayedInvocation *_delayedInvocation;
    NSArray *_reportProviders;
    BOOL _filterBotsToWorkspace;
    IDELogManager *_localGroup;
    NSArray *_logGroups;
    NSArray *_observationTokens;
    NSMutableArray *_localCachedGroups;
    IDELogNavigatorItem *_workspaceItem;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
}

+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
+ (id)logRootItemForWorkspace:(id)arg1;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_navigableItemCoordinator;
@property(retain, nonatomic) IDELogNavigatorItem *workspaceItem; // @synthesize workspaceItem=_workspaceItem;
@property(retain, nonatomic) NSMutableArray *localCachedGroups; // @synthesize localCachedGroups=_localCachedGroups;
@property(retain, nonatomic) NSArray *observationTokens; // @synthesize observationTokens=_observationTokens;
@property(nonatomic) BOOL filterBotsToWorkspace; // @synthesize filterBotsToWorkspace=_filterBotsToWorkspace;
@property(copy, nonatomic) NSArray *logGroups; // @synthesize logGroups=_logGroups;
@property(retain, nonatomic) IDELogManager *localGroup; // @synthesize localGroup=_localGroup;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
- (void)_configureDataSourceObservers;
@property(readonly, nonatomic) NSString *navigableItem_name;
- (void)updateLogGroups;
- (void)_updateLogGroups;
- (id)reportProviders;
- (id)_groupByGroupArray;
- (id)_groupByTimeArray;
- (id)_getDateForObject:(id)arg1;
- (void)_highlightNewlyCreatedBotInService:(id)arg1;
- (void)dataSource:(id)arg1 accountWasDisabledForService:(id)arg2;
- (void)dataSource:(id)arg1 accountWasEnabledForService:(id)arg2;
- (void)dataSource:(id)arg1 accountWasRemovedForService:(id)arg2;
- (void)dataSource:(id)arg1 accountWasAddedForService:(id)arg2;
- (void)dataSource:(id)arg1 didFinishInitialLoadForService:(id)arg2;
- (void)mainThread_updateLogGroups;
- (void)dealloc;
- (id)initWithLogManager:(id)arg1 groupedByTime:(BOOL)arg2;
- (id)initWithLogManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end
