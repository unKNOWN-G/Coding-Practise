def check(n):
    for i in range(len(n)):
        if(n[i]=='3' or n[i]=='7'):
            continue
        else:
            print("BETTER LUCK NEXT TIME")
            return 0
    print("LUCKY")
    return 0 
    
test_Cases = int(input())

for i in range(test_Cases):
    n=  input()
    check(n)
