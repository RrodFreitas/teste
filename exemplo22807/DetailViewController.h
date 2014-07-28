//
//  DetailViewController.h
//  exemplo22807
//
//  Created by Rodrigo Von-Grapp Freitas on 28/07/14.
//  Copyright (c) 2014 Rodrigo Freitas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
