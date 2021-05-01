class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        sums = [0]*len(nums)
        for i in range(len(nums)):
            sums[i]+=sums[i-1]+nums[i]
        return sums