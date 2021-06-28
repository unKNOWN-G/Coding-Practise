# Problem: BLITZ3_2 Contest: START5B

test_cases=  int(input())
for i in range(test_cases):
    a,b,c = map(int,input().split())
    print(2*(180+a)-(b+c))