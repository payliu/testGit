//
//  testGitAppDelegate.h
//  testGit
//
//  Created by Pay on 2011/6/26.
//  Copyright 2011年 (Pay). All rights reserved.
//

#import <UIKit/UIKit.h>

@interface testGitAppDelegate : NSObject <UIApplicationDelegate> {

    
    
    
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end
