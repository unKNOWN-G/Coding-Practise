# Problem: MODEQ Contest: MAY21B
test_cases = int(input())

for lol in range(test_cases):
    n,m=map(int,input().split(" "))
    count = 0
    a=[]
    a.append(0)
    for i in range(1,n+1):
        a.append(m%i)
    # print(a)
    for i in range(2,n+1):
        for j in range(1,i):
            if(a[j] == (a[i])%j):
                # print(j,i)
                count+=1
    print(count)
                    