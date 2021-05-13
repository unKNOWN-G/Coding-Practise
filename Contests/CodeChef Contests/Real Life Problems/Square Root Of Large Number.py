# Contest Code:RLIF2021 Problem Code:SQRTLARG

import decimal
import math

test_cases = int(input())

def squareRoot(n,precision):
        x = decimal.Decimal(str(n))
        y = decimal.Decimal(str(1))
        
        e = decimal.Decimal(str(10**((-1)*(precision))))
        print(x,y,e)
        while(x - y > e):
            x = (x + y)/2
            y = n / x
            print(x)   
        print(round((x),precision))

for i in range(test_cases):
    num = int(input())
    precision = int(input())
    
    squareRoot(num,precision)
    