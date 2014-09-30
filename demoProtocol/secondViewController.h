//
//  secondViewController.h
//  demoProtocol
//
//  Created by HItesh Ramoliya on 9/29/14.
//  Copyright (c) 2014 HItesh Ramoliya. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "myFirstProtocol.h"

@interface secondViewController : UIViewController<UITabBarControllerDelegate,myFirstProtocol>

@property(nonatomic,strong) IBOutlet UILabel *myLable;

@end
