//Array as abstract data type

#include<stdio.h>
#include<stdlib.h>

struct array
{
	int total_size;
	int used_size;
	int *p;
};

void create(int tsize,int usize,struct array *a);
void set(struct array *a);
void show(struct array *a);

void main()
{
	
	struct array a;
	create(10,5,&a);
	set(&a);
	show(&a);
	
}
void create(int tsize,int usize,struct array *a)
{
	a->total_size=tsize;
	a->used_size=usize;
	a->p=(int *)malloc(tsize*(sizeof(int)));
}
void set(struct array *a)
{
	int i=0,data;
	for(i=0;i<a->used_size;i++)
	{
		printf("Enter element in array:");
		scanf("%d",&data);
		(a->p)[i]=data;
	}
}
void show(struct array *a)
{
	int i=0;
	for(i=0;i<a->used_size;i++)
	{
		printf("%d ",(a->p)[i]);
	}
}
