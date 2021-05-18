# Rough Paper Problem Code: KRAFT

import math
test_Cases = int(input())
def gcd(a,b):
     
    # Everything divides 0
    if (b == 0):
         return a
    return gcd(b, a%b)
    
for i in range(test_Cases):
    l,b = map(int,input().split(" "))
    area = l*b
    sq = gcd(l,b)
    print(int((l/sq)*(b/sq)))
            
