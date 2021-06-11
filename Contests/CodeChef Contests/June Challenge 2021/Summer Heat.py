# Problem: COCONUT Contest: JUNE21C
import math
test_Cases = int(input())
for i in range(test_Cases):
    a,b,c,d = map(int,input().split())
    print(math.ceil(c/a)+math.ceil(d/b))