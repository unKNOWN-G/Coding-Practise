// Problem: INDX12 Contest: SHAK2021
#include <stdio.h>
#include<string.h>
int main(void) {
	int test_cases;
	scanf("%d",&test_cases);
	for(int i=0;i<test_cases;i++)
	{
	    char s[1001];
	    int count=0;
	    scanf("%s",s);
	    for(int j=0;j<strlen(s);j++)
	        {
	            count+=s[j]-'@';
	            
	        }
	    if(count%2==0)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

