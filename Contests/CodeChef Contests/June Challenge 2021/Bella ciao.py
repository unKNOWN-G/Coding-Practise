# Problem: CHFHEIST Contest: JUNE21C
import math
test_cases = int(input())
for i in range(test_cases):
    d1,d,p,q=map(int,input().split())
    val = d1//d
    rem = d1%d
    if(val%2==0):
        c = (((d)*(val//2)*((2*p+(val-1)*q))))
    else:
        c = (((d)*val*((2*p+(val-1)*q)//2)))
    print(c+rem*(p+(val)*q))