//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Josep Llodrà on 29/01/12.
//  Copyright (c) 2012 Josep Llodrà Grimalt. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;

@end
