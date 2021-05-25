test_Cases= int(input())
for i in range(test_Cases):
    n = int(input())
    stir = "1"
    for j in range(n):
        print(stir)
        stir+="*"*(j+1)
        stir+=str(j+2)
    