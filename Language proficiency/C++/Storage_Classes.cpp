/*
 20:22 08-01-2021
 Storage Classes In c++
 
 auto		Stack			Garbage			Can Be accessed within the block only. Can  be accessed with the nested block.
 extern		DataSegment	    0				Can Be accessed with multiple files too. Value can be modified at any place of code globally.
 static		DataSegment		0				Can Be accessed within block till end of program. The Intresting thing is its value is not lost after the block or like reassigned when declared again. Its has a static memory of previous state
 register	resiter of		Register		Can Be accessed within block till end of program. Used for faster operations. Pointer cant be used to reference its memory location. 
 				CPU	
 mutable
*/

#include<stdio.h>
int x;
const int p=18;
void mauplate_auto()
{

	auto int x;
	x=30;
}

void manuplate_globally()
{
	extern int x;
	x=10;
}

void mauplate_static()
{
	static int a;
	for(int i=0;i<10;i++)
	{
		static int a=10;
		printf("%d\n",a);
		a++;
	}
	
}
int main()
{
	x=20;
	printf("The block has stored the value = %d\n",x);
	manuplate_globally();
	mauplate_auto();
	printf("The block has been manuplated globally = %d\n",x);
	mauplate_static();
	printf("The variable is constant and cant be modified as its declared with const keyword = %d",p);
}
