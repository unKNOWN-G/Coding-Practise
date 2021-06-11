# Problem: BITTUP Contest: JUNE21C
def power(n, p):
    if (p == 0):
        return 1
    else:
        temp = power(n, p // 2)
        if (p % 2 == 0):
            val = (temp * temp)
            return val % (10 ** 9 + 7)
        else:
            val = n * (temp * temp)
            return val % (10 ** 9 + 7)


test_cases = int(input())
for i in range(test_cases):
    n, m = map(int, input().split())
    val = (power(2, n)) - 1

    print(power(val, m))