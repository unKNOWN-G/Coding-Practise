/*
 19-11-2020 18:19
 Pointers

 Source: Tutorials Point "https://www.tutorialspoint.com/cprogramming/c_pointers.htm"

 1)	type *var-name;
 	int *a    --- For Integer pointers
	char *b   --- For Char Pointers
 	.
 	.
 	
 2) pointer_var =&var
 3) var      =*pointer_var
 4) pointer++ --- Moves pointer to next location(no.of bytes depends on data type)
 5) pointr arrays can be used to store list of numbers or stings
 	
 	char *Names[]={
 	"Iron Man",
 	"Doctor Strange",
 	"Cap",
 	"Hulk"
 	}
 	
 	you can access them with Names[i] for a word and Names[i][j] for a letter
  6) Double pointer store the address of pointers. To access th evalue store in pointers **double_ptr
  7) Can access an array as a ptr in a function
  8) You can have a pointer functions which return a pointer
  
*/

#include<stdio.h>
int main()
{
	int var=20;
	int *a;
	a=&var;
	
	printf("Address of variable var is %d\n",&var);
	printf("Address of variable var is %d\n",a);
	printf("Value of the variable var is %d",*a);
	
}
