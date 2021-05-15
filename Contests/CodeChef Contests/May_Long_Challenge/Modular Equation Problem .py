#Code: MODEQ

test_cases = int(input())

for lol in range(test_cases):
    n,m=map(int,input().split(" "))
    count = 0
    for i in range(2,n+1):
        for j in range(1,i):
            if(m%j == (m%i)%j):
                count+=1
    print(count)
            