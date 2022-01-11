//reverse single linked list

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
void reverse();

void main()
{
	int i;
	for(i=0;i<5;i++)
	{
		create();
	}
	show();
	reverse();
	show();
}

void create()
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
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
void reverse()
{
	struct node *prevnode=0,*current,*nextnode;
	current=nextnode=head;
	while(nextnode!=0)
	{
		nextnode=nextnode->next;
		current->next=prevnode;
		prevnode=current;
		current=nextnode;
	}
	head=prevnode;
}
