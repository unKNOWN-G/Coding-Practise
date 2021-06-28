# Problem: SLPCYCLE Contest: START5B
test_cases = int(input())
for i in range(test_cases):
    a,b = map(int,input().split())
    c = input()
    while(len(c)>0):
        if(c[0]=='0'):
            val=b
            while(len(c)>=1):
                # print(c,b)
                if(c[0]=='0'):
                    b-=1
                    c = c[1:]
                else:
                    break
            b = min(val,b*2)
        else:
            # print(c,b)
            c = c[1:]

    if(b<=0):
        print("YES")
    else:
        print("NO")