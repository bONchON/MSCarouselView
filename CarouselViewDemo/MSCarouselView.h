//
//  MSCarouselView.h
//  Miso
//
//  Created by John Wu on 4/17/12.
//  Copyright (c) 2012 TFM. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MSCarouselView;

@protocol MSCarouselViewDataSource <NSObject>

- (UIView *) carouselView:(MSCarouselView *)carouselView viewForIndex:(NSUInteger)index;
- (NSUInteger) numberOfViewsForCarousel:(MSCarouselView *)carouselView;
- (CGFloat) carouselView:(MSCarouselView *)carouselView widthForViewAtIndex:(NSUInteger)index;

@end

@protocol MSCarouselViewDelegate <NSObject, UIScrollViewDelegate>

@optional
- (BOOL) carouselViewShouldWrap:(MSCarouselView *)carouselView;

@end

@interface MSCarouselView : UIScrollView {
    
}

- (void) reloadData;
- (UIView *) dequeueReusableViewWithClass:(Class)klass;

@property (nonatomic, assign) id <MSCarouselViewDataSource> dataSource;
@property (nonatomic, assign) id <MSCarouselViewDelegate> delegate;

@end



