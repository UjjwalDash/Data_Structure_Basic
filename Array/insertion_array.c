//INSERTION

#include<stdio.h>

void insert(int A[],int N,int K,int item);
void display(int A[],int N);

void main()
{
	int A[10]={1,3,4,5};
	int K,item,N=10;
	printf("In Which Position do you want to insert:");
	scanf("%d",&K);
	printf("Element do you Want to Insert:");
	scanf("%d",&item);
	if(K<=N)
	{
		insert(A,N,K,item);
	}
	else
	{
		printf("Array is full");
	}
	display(A,N);
}
void insert(int A[],int N,int K,int item)
{
	int i=0;
	for(i=N-1;i>=K;i--)
	{
		A[i+1]=A[i];	
	}
	A[K]=item;
}
void display(int A[],int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("%d ",A[i]);
	}
}
