
// 2d array decleration

#include<stdio.h>

void main()
{
	int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
}
