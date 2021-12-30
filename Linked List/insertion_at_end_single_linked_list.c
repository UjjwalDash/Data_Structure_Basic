//insertion at end

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head=0;

void create();
void insert_at_end();
void show();

void main()
{
	int i=0;
	for(i=0;i<5;i++)
	{
		create();
	}
	show();
	insert_at_end();
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
void insert_at_end()
{
	struct node *newnode,*temp;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Insert at End:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	temp=head;
	while(temp->next!=0)
	{
		temp=temp->next;
	}
	temp->next=newnode;
}
