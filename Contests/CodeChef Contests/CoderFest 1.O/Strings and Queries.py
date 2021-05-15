# Problem: STRQRYCF Contest: FEST2021 
text_cases = int(input())

for i in range(text_cases):
    garb= list(map(int, input().split(" ")))
    m = garb[1]
    
    freq = [0]*101
    s= input()
    a= [i for i in s]
    
    for i in range(len(a)):
        freq[ord(a[i])]+=1
        
    for j in range(m):
        x = list(input().split(" "))
        
        index = int(x[1])-1
        if(len(x)==3):
            freq[ord(a[index])]-=1
            freq[ord(x[2])]+=1
            a[index] =x[2]
        else:
            if(int(x[1])-1<=len(a)):
                ping = freq.copy()
                ping.sort(reverse = True)
                vill=0
                for vill in range(len(ping)):
                    if(ping[vill]==0):
                        break
                if(index>=vill):
                    print(-1)
                elif(ping[index-1]==ping[index] or ping[index+1]==ping[index]):
                    print(-1)
                else:
                    print(chr(freq.index(ping[index],0,101)))