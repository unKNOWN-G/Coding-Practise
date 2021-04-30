def distance_calculator(x1,y1,r1,x2,y2):
    distance = ((x1-x2)**2+(y1-y2)**2)**0.5
    if(distance<=r1):
        return 1
    else:
        return 0
    
class Solution:
    def countPoints(self, points: List[List[int]], queries: List[List[int]]) -> List[int]:
        ans=[]
        for i in range(len(queries)):
            sum_val=0
            for j in range(len(points)):
                sum_val+=distance_calculator(queries[i][0],queries[i][1],queries[i][2],points[j][0],points[j][1])
            ans.append(sum_val)
        return ans