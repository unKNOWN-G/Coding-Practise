class Solution:
    def maximumSwap(self, num: int) -> int:
        ping=[]
        safety=num
        while(int(num)>0):
            ping.append(int(num)%10)
            num=int(num)/10
        ring=ping.copy()[::-1]
        ping.sort(reverse=True)
        print(ring,ping)
        for i in range(len(ring)):
            if(ping[i]!=ring[i]):
                matcher=0
                for j in range(len(ring)):
                    if(ring[j]==ping[i] and i!=j):
                        matcher=j
                print(matcher)
                temp=ring[i]
                ring[i]=ring[matcher]
                ring[matcher]=temp
                break
        print(ring)
        num=0
        for i in range(len(ring)):
            num*=10
            num+=ring[i]
        return int(num)
        