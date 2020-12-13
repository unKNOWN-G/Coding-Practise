/*
 11:59 13-12-2020
 Tree Traversals(preorder,inorder,postorder)
 
 preorder : root,left,right
 inorder  : left,root,right
 postorder: left,right,root
 
*/

#include<stdio.h>
#include "Headers/Tree Basic Functions.h"

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

int main()
{
	/* Creating a Tree         0
							1     2
						  3   4     
	*/
	tree=createNode(0);
	create_leftNode(1,tree);
	create_rightNode(2,tree);
	create_leftNode(3,tree->left);
	create_rightNode(4,tree->left);
	
	//Printing
							
	printf("Preorder  Traversal : ");
	preorder(tree);
	printf("\n");
	
	printf("Inorder   Traversal : ");
	inorder(tree);
	printf("\n");
	
	printf("Postorder Traversal : ");
	postorder(tree);
	printf("\n");
}
 
