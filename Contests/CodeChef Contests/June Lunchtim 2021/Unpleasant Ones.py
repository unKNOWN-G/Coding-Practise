# Problem: UNONE Contest: LTIME97B
def checker(n):
    a = bin(n)
    for i in range(len(a[:2])):
        if (a[2 + i] == '1' and a[3 + i] == '1'):
            count += 1
    return count


test_cases = int(input())
for i in range(test_cases):
    x = int(input())
    a = list(map(int, input().split()))
    for i in a:
        if (i % 2 == 0):
            print(i)
    for i in a:
        if (i % 2 == 1):
            print(i)