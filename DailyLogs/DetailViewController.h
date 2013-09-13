//
//  DetailViewController.h
//  DailyLogs
//
//  Created by Iggy Mwangi on 9/13/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
