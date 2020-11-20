/*
 20-11-2020 13:17
 Stock Span using arrays
 
 In this question we need to output an array in which span[i] should tell how many elements are less than price[i] continously
 Algortihm is quite simple . Just use a while loop inside a for loop. for loop iterates from 0-n prices and while loop breaks when a previous element becomes more than price element
 
 Time Complexity : O(n2)
 Worst Case : O(n2)
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int price[n],span[n]={1};
	for(int i=0;i<n;i++)
		scanf("%d",&price[i]);
	printf("Stock Prices :");

	for(int i=0;i<n;i++)
	printf("%d ",price[i]);
	printf("\n");
	for(int j=0;j<n;j++)
	{
		int k=j-1;
		while(k>=0 && price[k]<price[j])
		k--;
		span[j]=j-1-k+1;
	}
	
	printf("Span  Prices :");
	for(int i=0;i<n;i++)
	printf("%d ",span[i]);
	printf("\n");
 } 
