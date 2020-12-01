/*
 01-12-2020 13:11
 Ciel and A-B Problem
 Practice : Easy   Problem Code: CIELAB

 Find the difference and change only one digit from the answer.Yep any digit change is accepted
 The logic i am following is simple. I will be changing only last digit. In case if its 9 i will dcrease the result Else  i will increment the result
*/
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if((a-b)%10==9)
	printf("%d",a-b-1);
	else
	printf("%d",a-b+1);
}

