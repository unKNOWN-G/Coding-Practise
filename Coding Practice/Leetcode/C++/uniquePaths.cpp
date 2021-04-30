/*
 23:36 06-01-2021
 Leet Code -> Unique paths
 The robot is on top left corner it needs to come to bottom right corner of a grid of mxn dimensions. 
 
 The logic that i followed is Bottom Up approach, Top down can be followed too for that we need to define a 2d array globally and pass it into function. So much new stuff to do
 a) Firstly the ways to all elements in row 0,col 0 is 1
 b) grid[i][j]=grid[i-1][j]+grid[i][j-1] (Number of ways to come to previous left block+Number of ways to get to previous top block)
 
*/
#include<stdio.h>
int uniquePaths(int r, int c)
{
    int grid[r][c];
    
    for(int i=0;i<r;i++)
        grid[i][0]=1;
    for(int i=0;i<c;i++)
        grid[0][i]=1;
	
    for(int i=1;i<r;i++)
        for(int j=1;j<c;j++)
            grid[i][j]=grid[i-1][j]+grid[i][j-1];

	return grid[r-1][c-1];
}

int main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	printf("The Number of ways the Robot can reach the end are %d",uniquePaths(r,c));
}
  
