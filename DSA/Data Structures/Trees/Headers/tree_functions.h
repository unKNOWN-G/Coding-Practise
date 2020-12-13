/*
 11:50 13-12-2020
 Basic Functions
 
 These contains basic fnctions for creating a tree
 Creating a node datastructure, using which we create a "createNode" Function for eay creation fo function
 Then we write 2 more function create_leftNode and create_rightNode to create left and right nodes to the passed root node

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
