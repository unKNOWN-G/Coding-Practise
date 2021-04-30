class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        ping = []
        for i in range(n):
            ping.append(nums[i])
            ping.append(nums[n+i])
        return ping