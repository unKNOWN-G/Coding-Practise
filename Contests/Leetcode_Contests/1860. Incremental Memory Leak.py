"""
1) The approach to this Question is Simple. Find largest among memory1(m1),memory2(m2) in each iteration and substract i from it.
2) Before Substarcting Check if that number in memory is greater than i or not
3) If number in memory is less than i break the loop and return the values else substarct
"""

class Solution(object):
    def memLeak(self, m1, m2):
        i=1
        while(1):
            if(m1>=m2):
                if(m1>=i):
                    m1-=i
                else:
                    break
            else:
                if(m2>=i):
                    m2-=i
                else:
                    break
            i+=1
        return [i,m1,m2]
        