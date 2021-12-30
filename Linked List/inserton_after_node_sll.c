
//insertion after a node

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head=0;

void create();
void show();
void insert_after(int pos);

void main()
{
	int i=0,pos;
	for(i=0;i<5;i++)
	{
		create();
	}
	show();
	printf("Enter in which pos do you want to insert:");
	scanf("%d",&pos);
	insert_after(pos);
	show();
}

void create()
{
	struct node *newnode,*temp;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter Data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
}
void show()
{
	struct node *temp;
	temp=head;
	printf("| %d |",head);
	while(temp!=0)
	{
		printf(" -> | %d | %d |",temp->data,temp->next);
		temp=temp->next;
	}
	printf("\n");
}
void insert_after(int pos)
{
	struct node *newnode,*temp;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Insert Data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	
	temp=head;
	int i=0;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
