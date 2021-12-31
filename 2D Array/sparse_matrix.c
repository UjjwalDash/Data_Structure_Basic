
//sparse matrix creation

#include<stdio.h>
#include<stdlib.h>

struct element
{
	int i;
	int j;
	int x;
};
struct sparse
{
	int m;
	int n;
	int num;
	struct element *e;
};

void create(struct sparse *s);
void show(struct sparse *s);

void main()
{
	struct sparse s;
	create(&s);
	show(&s);
}
void create(struct sparse *s)
{
	int k=0;
	printf("Enter Dimension of Sparse Matrix:");
	scanf("%d %d",&s->m,&s->n);
	printf("Enter no of on zero element:");
	scanf("%d",&s->num);
	s->e=(struct element *)malloc(s->num*sizeof(struct element));
	for(k=0;k<s->num;k++)
	{
		printf("Enter row column element:");
		scanf("%d %d %d",&s->e[k].i,&s->e[k].j,&s->e[k].x);
	}
}
void show(struct sparse *s)
{
	int i=0,j=0,k=0;
	for(i=0;i<s->m;i++)
	{
		for(j=0;j<s->n;j++)
		{
			if(i==s->e[k].i && j==s->e[k].j)
			{
				printf("%d ",s->e[k].x);
				k++;
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
	
}
