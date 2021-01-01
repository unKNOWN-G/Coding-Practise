/*
 10:00 01-01-2021
 Diameter of Tree Geeks for Geeks
 
 The Question is about finding the max width of the tree
 The approach to this problem is by finding the height first and then finding width of each level and comparing to find maximum
 To find width of each level the approach we take is we add 1 to the count when the level 1 can be achieved in one path if not 0(SO that we can know if the level is there from that node or not)
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

int width(struct node *tree,int level)
{
	if(tree==NULL)
	return 0;
	if(level==1)
	return 1;
	
	else if(level>1) 
	return width(tree->left,level-1)+width(tree->right,level-1);
}
int maxWidthOfTree(struct node* head)
{
	int height=heightOfTree(head);
	int maximum=0;
	for(int i=0;i<=height;i++)
	{
		maximum=max(maximum,width(head,i));
	}
	return maximum;
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
	printf("\nmax Width of Tree = %d",maxWidthOfTree(head));
}
