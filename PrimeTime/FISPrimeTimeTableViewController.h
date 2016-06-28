//
//  FISPrimeTimeTableViewController.h
//  PrimeTime
//
//  Created by Jordan Kiley on 6/28/16.
//  Copyright © 2016 FIS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FISPrimeTimeTableViewController : UITableViewController
@property (strong, nonatomic) NSMutableArray *arrayOfPrimes ;
- (NSInteger)primeNumber:(NSInteger)prime;
@end
