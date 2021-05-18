//Problem: COLLECT0 Contest: SHAK2021

#include <stdio.h>

int main(void) {
    int test_cases;
    scanf("%d",&test_cases);
    for(int i=0;i<test_cases;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a>b)
        printf("A");
        else
        printf("B");printf("\n");
    }
	// your code goes here
	return 0;
}
