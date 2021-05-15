# Problem: TCTCTOE Contest: MAY21B

def counter(arr):
    cnt = {'X': 0, 'O': 0, '_': 0}
    for i in range(3):
        for j in range(3):
            cnt[arr[i][j]] += 1
    return cnt


def wins(a):
    count = {'X': 0, 'O': 0}
    for i in range(3):
        if (a[i][0] == a[i][1] and a[i][1] == a[i][2] and a[i][0] != '_'):
            count[a[i][0]] += 1
    for i in range(3):
        if (a[0][i] == a[1][i] and a[1][i] == a[2][i] and a[0][i] != '_'):
            count[a[0][i]] += 1
    if (a[0][0] == a[1][1] and a[1][1] == a[2][2] and a[2][2] != '_'):
        count[a[0][0]] += 1
    if (a[0][2] == a[1][1] and a[1][1] == a[2][0] and a[2][0] != '_'):
        count[a[2][0]] += 1

    return count


test_cases = int(input())
for leo in range(test_cases):
    val = []
    for p in range(3):
        val.append(input())
    freq = counter(val)
    if (freq['X'] - freq['O'] >= 2 or freq['O'] > freq['X']):
        print(3)
    else:
        ping = wins(val)
        if (ping['X'] > 0 and ping['O'] > 0):
            print(3)
        elif (ping['X'] == 1 and (freq['X'] == freq['O'])):
            print(3)
        elif(ping['O'] == 1 and (freq['X'] > freq['O'])):
            print(3)
        elif (freq['_'] == 0 or (ping['O'] == 1 or ping['X'] == 1)):
            print(1)
        else:
            print(2)
