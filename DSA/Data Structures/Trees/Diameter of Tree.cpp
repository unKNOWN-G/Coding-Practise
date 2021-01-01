/*
 10:30 01-01-2021
 Diameter of Tree Geeks for Geeks
 
 The Question is about finding the largest length(diameter) of the tree(Please refer gfg for pictorial understanding of the question)
 The approach to this problem is by finding diameer of present tree by finding 1+height(tree->left)+height(tree->right) and comparing it with other diameter of(tree->left) and diameter of(tree->right) and finding the maximum
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

int diameterOfTree(struct node *head)
{
	if(head==NULL)
	return 0;
	return max(heightOfTree(head->left)+heightOfTree(head->right)+1,max(diameterOfTree(head->left),diameterOfTree(head->right)));
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
	printf("\nDiameter of Tree = %d",diameterOfTree(head));
}
