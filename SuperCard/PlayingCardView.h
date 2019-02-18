//
//  PlayingCardView.h
//  SuperCard
//
//  Created by rhino Q on 18/02/2019.
//  Copyright © 2019 rhino Q. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PlayingCardView : UIView

@property (nonatomic) NSUInteger rank;
@property (strong, nonatomic)NSString *suit;
@property (nonatomic) BOOL faceUp;

-(void)pinch:(UIPinchGestureRecognizer *)gesture;
@end

NS_ASSUME_NONNULL_END
