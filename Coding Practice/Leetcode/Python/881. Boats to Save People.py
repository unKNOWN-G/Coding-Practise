class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        people.sort()
        people = people[::-1]
        start , end = 0,len(people)-1
        while start<=end:
            if people[start]+people[end]<=limit:
                end-=1
            start+=1 
            
        return start
        