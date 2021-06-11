# Problem: SHROUTE Contest: JUNE21C
test_cases = int(input())
for lol in range(test_cases):
    n, m = map(int, input().split())
    b = list(map(int, input().split()))
    a = list(map(int, input().split()))
    a = [i - 1 for i in a]

    f1 = []
    f2 = []
    val = -1
    for i in range(len(b)):
        if (b[i] == 1):
            val = i
        f1.append(val)

    val = -1
    for i in range(len(b) - 1, -1, -1):
        if (b[i] == 2):
            val = i
        f2.append(val)
    f2 = f2[::-1]

    # print(f1,f2)
    for i in range(len(a)):
        if (a[i] == 0):
            print(0, end=" ")
        elif (f1[a[i]] == -1 and f2[a[i]] == -1):
            print(-1, end=" ")
        elif (f1[a[i]] == -1):
            print(abs(f2[a[i]] - a[i]), end=" ")
        elif (f2[a[i]] == -1):
            print(abs(f1[a[i]] - a[i]), end=" ")
        else:
            print(min(abs(f1[a[i]] - a[i]), abs(f2[a[i]] - a[i])), end=" ")
    print()

    # flag = 1
    # count = 0
    # for i in range(len(b)):
    #     if (b[i] == 1):
    #         print(0)
    #     else:
    #         # print(len(b),i)
    #         s = b[i]
    #         ping = 0
    #         c = -1
    #         d = -1
    #         while (a[s - ping-1] != 1 and s - ping-1 > 0):
    #             ping += 1
    #         if (a[s - ping-1] == 1):
    #             c = ping

    #         ping = b[i]
    #         while (a[ping-1] != 2 and ping-1 < n-1):
    #             ping += 1
    #         if (a[ping-1] == 2):
    #             d = ping - s

    #         #print(c,d)

    #         if (c == -1 and d == -1):
    #             flag = 0
    #             print(-1)
    #         else:
    #             if (c > 0 and d > 0):
    #                 count = min(abs(b[i] - c), abs(b[i] - d))
    #             elif (c >= 0):
    #                 count = c
    #             else:
    #                 count = abs(b[i] - d)
    #             print(count)
