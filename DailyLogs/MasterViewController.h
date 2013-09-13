//
//  MasterViewController.h
//  DailyLogs
//
//  Created by Iggy Mwangi on 9/13/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
