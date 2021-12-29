//TRAVERSING ARRAY

//add 1 to each element of array;

#include<stdio.h>

void main()
{
	int arr[5]={1,2,3,4,5};
	int i;
	for(i=0;i<5;i++)
	{
		arr[i]=arr[i]+1;
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}	
}

