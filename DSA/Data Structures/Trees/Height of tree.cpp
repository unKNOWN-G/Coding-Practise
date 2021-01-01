/*
 10:15 01-01-2021
 Size of Tree Geeks for Geeks
 
 The Question is about finding the height of a tree
 The approach to this problem is by finding max height of subtrees and add 1 for present node
*/

#include "Headers/traversals.h"

int max(int a,int b)
{
	return a>b?a:b;
}

int heightOfTree(struct node *head)
{
	if(head==NULL)
	return 0;
	return 1+max(heightOfTree(head->left),heightOfTree(head->right));
}
int main()
{
	struct node *head=createNode(3);
	struct node *p=create_leftNode(4,head);
	struct node *q=create_rightNode(5,head);
	struct node *r=create_leftNode(7,p);
	struct node *s=create_leftNode(9,r);
	struct node *t=create_rightNode(11,p);
	printf("Preorder : ");
	preorder(head);
	printf("\nHeight of Tree = %d",heightOfTree(head));
}
