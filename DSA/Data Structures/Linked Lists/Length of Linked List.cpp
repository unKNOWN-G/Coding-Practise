/*
 21:17 29-01-2021
 Length of Linked List
 
 Find the length of the linked list
 The method i am following is go until you find the null then print the nuumber of times the loop has run = lenght of list
*/
#include<iostream>
#include<stdlib.h>

using namespace std;

struct node 
{
	int num;
	node* next;
};

int main()
{
	struct node *head;
	struct node *second;
	int count=0;
	head= (struct node*)malloc(sizeof(struct node*));
	second= (struct node*)malloc(sizeof(struct node*));	
	head->num=10;
	second->num= 20;
	head->next=second;
	second->next=NULL;
	
	cout<<"The Values in the list are ";
	struct node *k=head;
	while(k!=NULL)
	{
		cout<<k->num<<"->";
		k=k->next;
		count++;
	}
	cout<<"\nThe number of elements in the list are "<<count<<endl;
}
