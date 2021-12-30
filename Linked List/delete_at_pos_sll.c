
//deletion at any position

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
void delete_at(int pos);

void main()
{
	int i=0,pos;
	for(i=0;i<5;i++)
	{
		create();
	}
	show();
	printf("Enter Position from which you want to delete:");
	scanf("%d",&pos);
	delete_at(pos);
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
		temp=head=newnode;
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
void delete_at(int pos)
{
	struct node *temp,*prevnode;
	temp=head;
	int i=0;
	while(i<pos-1)
	{
		prevnode=temp;
		temp=temp->next;
		i++;
	}
	if(temp==head)
	{
		head=0;
	}
	else
	{
		prevnode->next=temp->next;
	}
	free(temp);
}
