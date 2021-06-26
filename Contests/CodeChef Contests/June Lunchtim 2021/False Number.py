# Problem: FALSNUM Contest: LTIME97B
test_cases = int(input())
for i in range(test_cases):
    x = input()
    if (x[0] == '1'):
        print(x[0] + '0' + x[1:])
    else:
        print('1' + x)
