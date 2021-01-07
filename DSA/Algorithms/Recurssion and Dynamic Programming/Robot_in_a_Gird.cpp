/*
 22:03 06-01-2021
 Dynamic Programming -> Robot in Grid
 
  The robot is on top left corner it needs to come to bottom right corner of a grid od rxc dimensions. There are some obstacles in between where the robot cant step on and they are dentoed by 1's. Find Number of ways in which the robot can do the task
  
  Lets go with recurssive again 
  Base case 
  grid(0,0)=1
  if(m<0 || n<0 || matrix[m,n]==1) 
  return 0;
  grid(m,n)=grid(m-1,n)+grid(m,n-1);
*/

#include<stdio.h>
const int x = 100; 
const int y = 100; 

int grid(int r,int c,int matrix[x][y])
{
	if(r==0 && c==0)
	return 1;
	else if(r<0 || c<0 || matrix[r][c]==1)
	return 0;
	
	return grid(r-1,c,matrix)+grid(r,c-1,matrix);
}

int main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	int matrix[100][100];
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			scanf("%d",&matrix[i][j]);
	
	printf("The Number of ways the Robot can reach the end are %d",grid(r-1,c-1,matrix));
}
  
