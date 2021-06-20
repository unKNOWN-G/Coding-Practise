# Problem: WAV2 Contest: COOK130B
n, q = map(int, input().split())
a = list(map(int, input().split()))
a.sort()

def binary_s(a, key, l, r):
    if (l <=r):
        mid = (l + r) // 2
        if (a[mid] == key):
            return -1
        elif (a[mid] >= key and a[mid - 1] < key):
            return len(a) - mid
        elif (a[mid] > key):
            return binary_s(a, key, l, mid-1)
        return binary_s(a, key, mid + 1, r)
    return 1000


for i in range(q):
    x = int(input())
    if(x<a[0]):
        val=len(a)
    elif(x>a[-1]):
        val=0
    elif(x==a[-1]):
        val=-1
    else:
        val = binary_s(a, x, 0, len(a) - 1)

    if (val == -1):
        print(0)
    elif (val % 2 == 0):
        print("POSITIVE")
    else:
        print("NEGATIVE")
