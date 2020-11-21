/*
 21-11-2020 22:51
 Creating a linked List
 
 The logic that i follow is firstly define a node dataStructure then create some nodes and attach the nodes
 
 Insertion
 We can insert a node at 3 places they are start,end or at some particular index
 Time Comlexity : O(1)
 
 Deletion
 We can delete a node at 3 places they are start,end or at some particular index
 
 The pointer is o struct node datatype because it stores the address of variable of that data type
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head;
node* createNode(int data)
{
	struct node *q;
	q=(struct node*)malloc(sizeof(struct node*));
	q->data=data;
	q->next=NULL;
	return q;
}

void insertNode_start(int data)
{
	struct node *p=createNode(data);
	p->next=head;
	head=p;
}

void insertNode_end(int data)
{
	struct node *p=createNode(data);
	struct node *k=head;
	while(k->next!=NULL)
		k=k->next;
	k->next=p;
}

void insertNode_atindex(int data,int x)
{
	struct node *p=createNode(data);
	struct node *k=head;
	while(x-->1)
		k=k->next;
	p->next=k->next;
	k->next=p;
}

void printList()
{
	struct node *k=head;	
	while(k!=NULL)
	{
		printf("%d->",k->data);
		k=k->next;
	}
	printf("\n");
}

int main()
{
	int n,x;
	scanf("%d",&n);
	printf("Enter Linked list From Left to Right");
	scanf("%d",&x);
	head=createNode(x);
	for(int i=0;i<n-1;i++)
	{
		scanf("%d",&x);
		insertNode_end(x);
	}
	printf("Linked List : ");
	printList();
}
 
