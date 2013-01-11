//
//  FaunaInstance.h
//  Fauna
//
//  Created by Johan Hernandez on 12/27/12.
//  Copyright (c) 2012 Fauna. All rights reserved.
//

#import "FaunaConstants.h"

@interface FaunaInstances : NSObject

- (void)create:(NSDictionary*)instance callback:(FaunaResponseResultBlock)block;

@end