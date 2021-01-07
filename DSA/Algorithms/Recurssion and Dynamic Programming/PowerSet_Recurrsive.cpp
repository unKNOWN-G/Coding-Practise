/*
 12:34 07-01-2021
 Dynamic Programming -> Power Set
 
 Print All subsets of set
 
 My approach to this question is 
 1) You consider that element in this recurrsion
 2) You dont consider that element
 
 Mistakes Done:
 1) Used Return instead of calling the recurssive fn that made it harder to find error
 2) Printed a[i] instad of new_arr[i]
*/
#include<stdio.h>

int count;
void power_set(int a[],int low,int high,int new_arr[],int index)
{
		if(high>=low)
		{
			if(low==high)
			{
				for(int i=0;i<index;i++)
				printf("%d, ",new_arr[i]);
				printf("\n");
				count++;
			}
			power_set(a,low+1,high,new_arr,index);
			new_arr[index]=a[low];
		    power_set(a,low+1,high,new_arr,index+1);
		}
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int new_arr[n];
	count=0;
	
	power_set(a,0,n,new_arr,0);
	printf("Total Subsets = %d",count);
}
