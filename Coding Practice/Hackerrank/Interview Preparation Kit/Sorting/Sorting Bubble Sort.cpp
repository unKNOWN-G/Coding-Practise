/*
 12:08 05-01-2021
 Interview Preparation kit -> Sorting -> Sorting :  Bubble Sort
 
 Question is quite easy perfor bubble sort and find swaps
 My logic is implement bubble sort and a vaiable count to count number of swaps
*/
 #include<stdio.h>
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
                count++;
            }
        }
    }
    printf("Array is sorted in %d swaps.\nFirst Element: %d\nLast Element: %d",count,a[0],a[n-1]);
}
