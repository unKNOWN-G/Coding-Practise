class Solution:
    def checkPossibility(self, nums: List[int]) -> bool:
        count=0
        for i in range(len(nums)):
            if(i==0):
                continue
            elif(nums[i]>=nums[i-1]):
                continue
            elif(nums[i]<nums[i-1]):
                if(i==1 or i==len(nums)-1):
                    count+=1
                elif(i>=2 and (nums[i]>=nums[i-2] or nums[i+1]>=nums[i-1])):
                    count+=1
                else:
                    print("Special")
                    return False
        if(count>1):
            return False
        else:return True
            
                