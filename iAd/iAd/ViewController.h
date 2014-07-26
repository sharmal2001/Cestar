//
//  ViewController.h
//  iAd
//
//  Created by shankaar on 2014-07-26.
//  Copyright (c) 2014 lasha. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <iAd/iAd.h>

@interface ViewController : UIViewController <ADBannerViewDelegate>
{
    ADBannerView *adView;
}

@end
