/*
 01:23 11-01-2021
 Pointer
 
 The Question is about take 2 pointers as input and change their values in function to |a+b| and |a-b|
 Simple solution is that pass through address int the function
*/

#include <stdio.h>

void update(int *a,int *b) {
    
    *a=*a+*b;
    *b=*a-2**b;
    if(*b<0)
    *b*=-1;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

