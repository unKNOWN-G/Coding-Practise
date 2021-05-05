class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        ans=[0]*len(boxes)
        for index in range(len(boxes)):
            for i in range(len(boxes)):
                if(boxes[i]=='1'):
                    ans[index]+=abs(i-index)
        return ans