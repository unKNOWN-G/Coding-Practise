def solve(nums,end,count):
    if(end==0):
        return count
    else:
        for i in range(len(nums)):
            if(nums[i]+i>=end):
                return solve(nums,i,count+1)
    
class Solution:
    def jump(self, nums: List[int]) -> int:
        return solve(nums,len(nums)-1,0)