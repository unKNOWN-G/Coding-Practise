class Solution:
    def minSetSize(self, arr: List[int]) -> int:
        freq= [0]*100001
        l=len(arr)
        valid= len(arr)
        for i in range(l):
            freq[arr[i]]+=1
        freq.sort(reverse = True)
        for i in range(len(freq)):
            l-=freq[i]
            if(l<=valid/2):
                return i+1
        