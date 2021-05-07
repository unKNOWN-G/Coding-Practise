class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        freq =  [0]*101
        sums =  [0]*101
        ans= []
        for i in nums:
            freq[i]+=1
        for i in range(1,len(freq)):
            sums[i]+=sums[i-1]+freq[i-1]
        for i in nums:
            ans.append(sums[i])
        return ans