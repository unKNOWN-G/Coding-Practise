# Guess The Day Problem Code: GUESIT99


test_Cases = input()
a = ["Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"]
for i in range(int(test_Cases)):
    x = int(input())
    print(a[x%7])
    