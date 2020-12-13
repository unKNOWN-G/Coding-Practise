/*
 10:35 13-12-2020
 Introduction to trees Data Structures
 
 Basically tree datastrcuture resembles tress
 A special case of trees is Binary Tree where
 Each Node has either 2 chidren or no children at all

*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	node *left;
	node *right;
};

struct node *tree;
node *createNode(int data)
{
	struct node *p;
	p=(node*)malloc(sizeof(node*));
	p->data=data;
	p->left=NULL;
	p->right=NULL;
}
 
node *create_leftNode(int data,struct node *root)
{
	struct node *q=createNode(data);
	root->left=q;
}

node *create_rightNode(int data,struct node *root)
{
	struct node *q=createNode(data);
	root->right=q;
}

int main()
{
	tree=createNode(0);
	create_leftNode(1,tree);
	create_rightNode(2,tree);
	create_leftNode(3,tree->left);
	create_rightNode(4,tree->left);
	create_rightNode(5,tree->right);
	printf("%d,%d,%d,%d,%d,%d\n",tree->data,tree->left->data,tree->right->data,tree->left->left->data,tree->left->right->data,tree->right->right->data);
}
 
 
