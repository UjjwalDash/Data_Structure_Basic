
//DELETION

#include<stdio.h>

void DELETE(int A[],int N,int K);
void display(int A[],int N);

void main()
{
	int A[10]={1,10,2,3,4};
	int N=10,K;
	printf("Enter the posotion of element you want to delete:");
	scanf("%d",&K);

	if((K<=N) && (K>=0))
	{
		DELETE(A,N,K);
	}
	else
	{
		printf("INDEX UNAVALIABLE");
	}
	display(A,N);
}

void DELETE(int A[],int N,int K)
{
	int i=0;
	for(i=K;i<N-1;i++)
	{
		A[i]=A[i+1];
	}
	
}
void display(int A[],int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("%d ",A[i]);
	}
}
