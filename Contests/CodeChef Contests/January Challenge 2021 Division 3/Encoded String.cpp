/*
 11:00 01-01-2021
 January Challenge 2021 Division 3 -> Encoded String
 Problem Code: DECODEIT
 
 In this question the first 16 letters were coded as binary and a biay string will be given to us and we need to decode the string
 
 The logic that i used here is i defined a charecter array corresponding to each letter ad for each substring of binary length 4, I found the charecter and printed
*/

#include <stdio.h>

int main(void) {
	int num;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
	    int n;
	    scanf("%d",&n);
	    char a[n];
	    scanf("%s",a);
	    char word[2][2][2][2]={{{{'a','b'},{'c','d'}},{{'e','f'},{'g','h'}}},{{{'i','j'},{'k','l'}},{{'m','n'},{'o','p'}}}};
	    for(int i=0;i<n;i+=4)
	    {
	        printf("%c",word[a[i]-48][a[i+1]-48][a[i+2]-48][a[i+3]-48]);
	    }
	    printf("\n");
	}
}


