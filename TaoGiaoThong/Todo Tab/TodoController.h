//
//  TodoViewController.h
//  TaoGiaoThong
//
//  Created by Hong on 7/14/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TodoController : UITableViewController

//@property  (nonatomic, retain)  UITableView *TodoListTable ;
@property (nonatomic, strong) NSArray *Todos; //NSMutableArray *Todos;

@end
