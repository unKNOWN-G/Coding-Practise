"""
1) Create a New Matrix with rows = coloumns(cols) of given array and cols = rows of given matrix
2) Iterate the given matrix starting from bottom row and right most element as it would be the bottomost element in the col 0 of New Matrix And iterate the total bottom row of given Matrix which would be filled in left most col in New Matrix
3) Repeat the same process for other rows too
4) Use a variable start to always know the fre position where to fill the value when a '#' occours and Keep Updating the variable when needed
5) Check for the Occurances of . , *
6) Take care of Edge Cases
"""

class Solution(object):
    def rotateTheBox(self, a):
        rows = len(a)
        cols = len(a[0])
        
        m = [[None]*rows for l in range(cols)]
        
        moving = 0
        for i in range(rows-1,-1,-1):
            start = cols
            for j in range(cols-1,-1,-1):
                if(a[i][j] == '.'):
                    continue
                elif(a[i][j] =='*'):
                    pi=start
                    for pi in range(start-1,j,-1):
                        m[pi][rows-1-i]='.'
                    if(pi-1>=0):
                        m[pi-1][rows-1-i]='*'
                    else:
                        m[pi][rows-1-i]='*'
                    start = j
                else:
                    
                    m[start-1][rows-1-i]='#'
                    start-=1
            pi=j
            for pi in range(j,start):
                    m[pi][rows-1-i]='.'
					
        return m