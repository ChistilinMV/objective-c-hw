//
//  Doctor.m
//  HomeWork03
//
//  Created by Max on 28.12.2023.
//

#import "Doctor.h"

@implementation Doctor

- (void)takePills {
    NSLog(@"Doctor gives pills");
    [self.delegate takePills];
}
@end
