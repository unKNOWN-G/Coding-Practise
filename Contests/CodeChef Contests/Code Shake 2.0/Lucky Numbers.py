# Lucky Numbers Problem Code: UNWNT
test_Cases = int(input())
b= [0,1,11,111,1111,11111,111111,1111111,11111111,111111111]
for i in range(test_Cases):
    a = input()
    length = len(a)
    first_digit = int(a[0])
    set = 0
    val = int(a) - 9*(length-1)-first_digit
    # print(b[length]*first_digit)
    if(int(a)<(b[length]*first_digit)):
        val+=1
    print(val)
     