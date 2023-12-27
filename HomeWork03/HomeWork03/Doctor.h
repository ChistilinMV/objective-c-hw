//
//  Doctor.h
//  HomeWork03
//
//  Created by Max on 28.12.2023.
//

#import <Foundation/Foundation.h>
#import "DoctorDelegate.h"
#import "Patient.h"

NS_ASSUME_NONNULL_BEGIN

@interface Doctor : NSObject

@property (nonatomic, weak, nullable) id<DoctorDelegate> delegate;
- (void) takePills;


@end

NS_ASSUME_NONNULL_END
