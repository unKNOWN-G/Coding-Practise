/*
 01-12-2020 12:46
 Life, the Universe and Everything
 Practice : Easy   Problem Code: TEST

 It was asked to take input as a series of numbers and print all numbers until that were taken in before the number 42
 I just kept a limit of 10000 for scanning ang started taking inputs and printing it out at each step. If i ecounter a 42 while scaning i broke the loop
*/
#include <stdio.h>
int main(void) {
    int x;
    scanf("%d",&x);
	for(int i=0;i<10000&&x!=42;i++)
	{
	    printf("%d\n",x);
	    scanf("%d",&x);
	}
	return 0;
}


