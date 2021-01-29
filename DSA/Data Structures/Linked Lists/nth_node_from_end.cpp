/*
 21:33 29-01-2021
 Nth Node from the End
 
 Find the Nth node from the End
 The approach is simple travese until end and then travese n steps backward
 This can be done using recurrsion
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

struct node 
{
	int data;
	node* next;
};

struct node *head;
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

int nth_node_from_end(struct node *x,int n)
{
	static int i=0;
	static int y;
	if(x==NULL)
	return 0;
	nth_node_from_end(x->next,n);
	if(++i==n)
	y= x->data;
	return y;
	
}
int main()
{
	struct node *first, *second , *third, *fourth, *fifth;
	int count=0;
	head= (struct node*)malloc(sizeof(struct node*));
	first= (struct node*)malloc(sizeof(struct node*));
	second= (struct node*)malloc(sizeof(struct node*));
	third= (struct node*)malloc(sizeof(struct node*));
	fourth= (struct node*)malloc(sizeof(struct node*));
	fifth= (struct node*)malloc(sizeof(struct node*));
	
	head->data=10;
	first->data=20;
	second->data=30;
	third->data=40;
	fourth->data=50;
	fifth->data=60;
	head->next=first;
	first->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fifth;
	fifth->next=NULL;
	
	printList();
	
	cout<<"The Nth Number from the end is "<<nth_node_from_end(head,3);
}
