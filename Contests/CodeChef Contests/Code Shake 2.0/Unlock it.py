# Unlock it Problem Code: UNLKIT
test_cases = int(input())
for i in range(test_cases):
    n = int(input())
    if(n%2==0):
        print(int(11*((n/2)**2)))
    else:
        val = n//2
        print(2+int(val*(val+1)*11))