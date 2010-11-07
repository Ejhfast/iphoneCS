//
//  sizingAppDelegate.h
//  sizing
//
//  Created by Ethan Fast on 11/7/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class sizingViewController;

@interface sizingAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    sizingViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet sizingViewController *viewController;




@end

