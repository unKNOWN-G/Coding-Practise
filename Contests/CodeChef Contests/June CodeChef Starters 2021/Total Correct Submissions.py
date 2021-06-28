# Problem: TOTCRT Contest: START5B


test_cases = int(input())
for i in range(test_cases):
    lo = int(input())
    b = {}
    for j in range(lo*3):
        p, x = input().split()
        if (p not in b):
            b[p]= int(x)
        else:
            b[p] += int(x)
    for i in sorted(b.values()):
        print(i, end=" ")