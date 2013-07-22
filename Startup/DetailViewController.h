//
//  DetailViewController.h
//  Startup
//
//  Created by Luka Krušec on 7/22/13.
//  Copyright (c) 2013 Luka Krušec. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
