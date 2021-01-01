/*
 10:00 01-01-2021
 Size of Tree Geeks for Geeks
 
 The Question is about counting the number of nodes in a given tree
 The approach to this problem is by couting each node 1+sizeOfTree(head->left)+sizeOfTree(head->right);
*/

#include "Headers/traversals.h"

int sizeOfTree(struct node *head)
{
	if(head==NULL)
	return 0;
	return 1+sizeOfTree(head->left)+sizeOfTree(head->right);
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
	printf("\nSize of Tree = %d",sizeOfTree(head));
}
