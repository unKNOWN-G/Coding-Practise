class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        S=[0]
        max
        for i in range(len(nums)):
            S.append(S[i]+nums[i])
        max_value = max(S[i]-S[i-k] for i in range(k,len(nums)+1))
        return max_value/k