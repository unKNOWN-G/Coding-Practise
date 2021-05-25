test_cases = int(input())
for i in range(test_cases):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    freq_a = [0] * 1001
    freq_b = [0] * 1001

    op = ""

    for j in range(len(a)):
        freq_a[a[j]] += 1
    for j in range(len(b)):
        freq_b[b[j]] += 1

    for j in range(1001):
        if (freq_a[j] == 1 and freq_b[j] == 1 and j % 3 == 0):
            op += " "
            op += str(j)

    if (op == ""):
        print(-1)
    else:
        print(op[1:])
