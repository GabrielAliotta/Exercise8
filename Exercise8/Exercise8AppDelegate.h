//
//  Exercise8AppDelegate.h
//  Exercise8
//
//  Created by Gabriel Aliotta on 2/15/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Exercise8ViewController;

@interface Exercise8AppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet Exercise8ViewController *viewController;

@end
