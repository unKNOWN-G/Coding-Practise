/*
 21:32 11-01-2021
 Unique Paths II
 
 This is an Exteded version of Unique paths I
 The question is about finding the number of unique ways to get to th ebottom right corner of a grid filled with obstacles frm top left corener of the grid
 
 The approach i chose is
 to get to any cell the number of ways = number of ways to get to the immediate top cell+ number of wasy to get the immediate left cell
 dp[i][j]=dp[i-1][j]+dp[i][j-1];
 And add some exception cases 
*/

int uniquePathsWithObstacles(int** obstacleGrid, int obstacleGridSize, int* obstacleGridColSize)
{
    
int dp[obstacleGridSize+1][*obstacleGridColSize+1];
    for(int i=0;i<obstacleGridSize;i++)
    {
        for(int j=0;j<*obstacleGridColSize;j++)
        {
            if(i==0 && j==0 && obstacleGrid[i][j]==1)
                dp[i][j]=0;
            else if(i==0 && j==0)
                dp[i][j]=1;
            else if(obstacleGrid[i][j]==1)
               dp[i][j]=0 ;
            else if(i==0)
                dp[i][j]=dp[i][j-1];
            else if(j==0)
                dp[i][j]=dp[i-1][j];
            else 
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    printf("%d %d",obstacleGridSize, *obstacleGridColSize);
    return dp[obstacleGridSize-1][*obstacleGridColSize-1];
}
