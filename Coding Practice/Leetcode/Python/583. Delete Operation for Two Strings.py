import numpy as np
def lcs(word1,word2,m,n):
    L = [[i]*(n + 1) for i in range(m + 1)]
    dp= [[0]*(n + 1) for i in range(m + 1)]
    print(dp)
    print(L)
    print(np.array(dp).shape,np.array(L).shape)
    
    
    # for i in range(m + 1):
    #     for j in range(n + 1):
    #         if i == 0 or j == 0 :
    #             L[i][j] = 0
    #         elif X[i-1] == Y[j-1]:
    #             L[i][j] = L[i-1][j-1]+1
    #         else:
    #             L[i][j] = max(L[i-1][j], L[i][j-1])
                
    for i in range(m+1):
        for j in range(n+1):
            if(i==0 or j==0):
                continue
            if(word1[i-1]==word2[j-1]):
                dp[i][j]=1+dp[i-1][j-1]
            else:
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])
    return dp[m][n]
    
    # return L[m][n]

class Solution:
    def minDistance(self, word1: str, word2: str) -> int:
        m= len(word1)
        n= len(word2)
        
        l=lcs(word1,word2,m,n)
        print(m,n,l)
        print(m+n-2*l)
        return m+n-2*l