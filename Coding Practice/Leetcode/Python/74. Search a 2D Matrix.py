def binarysearchrow(arr,start,end,element):
    if(start<=end):
        mid= (start+end)//2
        if(arr[mid]==element):
            return True
        elif(arr[mid]<element):
            return binarysearchrow(arr,mid+1,end,element)
        else:
            return binarysearchrow(arr,start,mid-1,element)
    return False


def binarysearchcol(arr,start,end,element):
    if(start<=end):
        mid= (start+end)//2
        if(mid==0 and arr[mid]==element):
            return True,1
        elif(arr[mid]>=element and arr[mid-1]<element):
            if(arr[mid]==element):
                return True,mid+1
            return True,mid
        elif(arr[mid]<element):
            return binarysearchcol(arr,mid+1,end,element)
        else:
            return binarysearchcol(arr,start,mid-1,element)
    return False


class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        colarr = [matrix[i][0] for i in range(len(matrix))]
        if(target<matrix[0][0]):
            return False
        else:
            if(len(matrix)>1):
                if(colarr[-1]<target):
                    val,index=True,len(matrix)-1
                else:
                    val,index = binarysearchcol(colarr,0,len(matrix)-1,target)
                    index-=1
                print(val,index)
                if(val):
                    return binarysearchrow(matrix[index],0,len(matrix[index])-1,target)
                else:
                    return False
            else:
                return binarysearchrow(matrix[0],0,len(matrix[0])-1,target)
