
//insertion at beginning in doubly linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *prev;
	struct node *next;
};

struct node *head=0,*tail=0;

void create();
void show();
void insert_at_begining();

void main()
{
	int i=0;
	for(i=0;i<5;i++)
	{
		create();
	}
	show();
	insert_at_begining();
	show();
}
void create()
{
	struct node *newnode,*temp;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter Data:");
	scanf("%d",&newnode->data);
	newnode->prev=0;
	newnode->next=0;
	if(head==0)
	{
		temp=head=newnode;
	}
	else
	{
		temp->next=newnode;
		newnode->prev=temp;
		temp=newnode;
	}
	tail=temp;
}
void show()
{
	struct node *temp;
	temp=head;
	printf("| %d |",head);
	while(temp!=0)
	{
		printf(" -> | %d | %d | %d |",temp->prev,temp->data,temp->next);
		temp=temp->next;
	}
	printf(" <- | %d |",tail);
	printf("\n");
}
void insert_at_begining()
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Insert Data:");
	scanf("%d",&newnode->data);
	newnode->prev=0;
	head->prev=newnode;
	newnode->next=head;
	head=newnode;
}
