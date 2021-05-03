class Solution:
    def getMinDistance(self, nums: List[int], target: int, start: int) -> int:
        minval=10000000
        index=100000000
        for i in range(len(nums)):
            if(nums[i]==target):
                minval=i
                if(abs(minval-start)<index):
                    index= abs(minval-start)
        return index
        