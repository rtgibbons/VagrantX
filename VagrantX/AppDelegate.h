//
//  AppDelegate.h
//  VagrantX
//
//  Created by Ryan Gibbons on 2/5/12.
//  Copyright (c) 2012 Ryan Gibbons. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    NSStatusItem *statusItem;
    NSURL *currentProjectURL;
    NSString *currentProjectName;
    
    IBOutlet NSMenu *statusMenu;
    IBOutlet NSMenuItem *menuItemVagrant;
    IBOutlet NSProgressIndicator *spinner;
    
    
}

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;
- (IBAction)chooseVagrant:(id)sender;

@end
