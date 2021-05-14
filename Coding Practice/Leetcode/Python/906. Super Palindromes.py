def checker(a):
    n=len(a)
    for i in range(n//2):
        if(a[i]!=a[n-i-1]):
            return False
    return True

def make_palindrome(left,right):
    count = 0
    Limit =1000000000
    
    for i in range(Limit):
        ping = i
        ling = str(i)+(str(i)[-2::-1])
        ring = int(ling)**2
        if(int(ring)>int(right)):
            break
        else:
            if(int(ring)>=int(left) and checker(str(ring))):
                count+=1
    
    
    for i in range(Limit):
        ping = i
        ling = str(i)+(str(i)[::-1])
        ring = int(ling)**2
        if(int(ring)>int(right)):
            break
        else:
            if(int(ring)>=int(left) and checker(str(ring))):
                count+=1
    
    return count


class Solution:
    def superpalindromesInRange(self, left: str, right: str) -> int:
        return make_palindrome(left,right)