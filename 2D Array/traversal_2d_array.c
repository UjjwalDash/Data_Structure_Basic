
//traversal in 2d array

#include<stdio.h>

#define R 2
#define C 2

void display(int A[R][C]);

void main()
{
	int A[R][C]={{1,2},{3,4}},i,j;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			A[i][j]++;
		}
	}
	display(A);
}
void display(int A[R][C])
{
	int i,j;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
}
