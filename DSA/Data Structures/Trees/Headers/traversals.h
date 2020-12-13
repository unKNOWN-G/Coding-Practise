#include<stdio.h>
#include "tree_functions.h"

void preorder(struct node *node)
{
	if(node == NULL)
	return;
	
	printf("%d,",node->data);
	preorder(node->left);
	preorder(node->right);
}

void inorder(struct node *node)
{
	if(node == NULL)
	return;
	
	inorder(node->left);
	printf("%d,",node->data);
	inorder(node->right);
}

void postorder(struct node *node)
{
	if(node == NULL)
	return;
	
	postorder(node->left);
	postorder(node->right);
	printf("%d,",node->data);
}

