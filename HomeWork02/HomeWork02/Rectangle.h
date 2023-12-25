//
//  Rectangle.h
//  HomeWork02
//
//  Created by Max on 24.12.2023.
//

#import <Foundation/Foundation.h>
#import "Figure.h"

NS_ASSUME_NONNULL_BEGIN

@interface Rectangle : Figure

@property CGFloat width;
@property CGFloat height;

- (CGFloat)calculateArea;
- (CGFloat)calculatePerimeter;

@end

NS_ASSUME_NONNULL_END
