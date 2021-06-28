# Problem: CYCLICQD Contest: START5B

test_cases = int(input())

for i in range(test_cases):
    a,b,c,d = map(int,input().split())
    if(a+c==180 and b+d==180):
        print("YES")
    else:
        print("NO")