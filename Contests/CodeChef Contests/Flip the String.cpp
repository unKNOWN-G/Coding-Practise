/*
 22-11-2020 10:30
 Code Chef November Cook-off 2020 Division 2 ->Flip the String
 Contest Code:COOK124B Problem Code:FLIP
 
 2 Binary Strings will be given A,B
 You may perform the following operation any number of times (including zero): pick a substring of A with odd length and invert all the bits (change '0' to '1' or vice versa) at odd positions in this substring. For example, if we choose a substring "01011", we can convert it to "11110" (bits at odd positions are bold).
 Determine the minimum number of operations required to change the string A to the string B.
 
 Logic that i followed was I will first go through places 1,3,5,.. and then with another loop through 2,4,6...
 In 1,3,5... loop if a[i] and b[i] doesnt match enter while loop and keep on going with step of 2 until they match
 Then  come out of while loop and increment a count
 Repeat the same procedure for 2,4,6... loop too
 Finally Print count
*/
 
#include <stdio.h>
#include<string.h>
int main(void) {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    int count=0;
	    char a[100000],b[100000];
	    scanf("%s",a);
	    scanf("%s",b);
	    
	    for(int i=0;i<strlen(a);i+=2)
	    {
	        if(a[i]!=b[i])
	        {
	           count++;
	           while(a[i]!=b[i])
    	        {
    	            i+=2;
    	            if(i>=strlen(a))
    	            break;
    	        }
	        }
	        
	    }
	    for(int i=1;i<strlen(a);i+=2)
	    {
	        if(a[i]!=b[i])
	        {
	           count++;
	           while(a[i]!=b[i])
    	        {
    	            i+=2;
    	            if(i>=strlen(a))
    	            break;
    	        }
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}


