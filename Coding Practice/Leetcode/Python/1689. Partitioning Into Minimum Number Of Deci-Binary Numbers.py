class Solution:
    def minPartitions(self, n: str) -> int:
        nums = [int(i) for i in n]
        return max(nums)
        