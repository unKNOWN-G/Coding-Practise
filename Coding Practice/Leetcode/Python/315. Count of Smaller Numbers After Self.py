def binary_search(x,arr,l,r):
    if(l==r):
        return l
    elif(l<r):
        mid = math.floor(((l+r)/2))
        if(mid==l and arr[mid]==x):
            return mid
        elif(arr[mid] == x and arr[mid-1]<arr[mid]):
            return mid
        elif(arr[mid]<x):
            return binary_search(x,arr,mid+1,r)
        else:
            return binary_search(x,arr,l,mid-1)
            
            
                
        
class Solution:
    def countSmaller(self, nums: List[int]) -> List[int]:
        sorted_list = nums.copy()
        sorted_list.sort()
        ans = []
        for i in range(len(nums)):
            val = binary_search(nums[i],sorted_list,0,len(sorted_list)-1)
            ans.append(val)
            # print(nums[i],sorted_list,ans,len(sorted_list)-1)
            del sorted_list[val]
            
        return ans
        