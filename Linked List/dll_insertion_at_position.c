
// insertion at a position double linked list

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
void insert_at(int pos);

void main()
{
	int i=0,pos;
	for(i=0;i<5;i++)
	{
		create();
	}
	show();
	printf("In which position do you want to insert:");
	scanf("%d",&pos);
	insert_at(pos);
	show();
}

void create()
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter Data:");
	scanf("%d",&newnode->data);
	newnode->prev=0;
	newnode->next=0;
	if(head==0)
	{
		tail=head=newnode;
	}
	else
	{
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
	}
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
void insert_at(int pos)
{
	struct node *newnode,*temp;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Insert at Position:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	newnode->prev=0;
	temp=head;
	int i=1;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	newnode->prev=temp;
	newnode->next=temp->next;
	temp->next=newnode;
	newnode=newnode->next;
	newnode->prev=temp->next;	
}





