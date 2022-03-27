#include<stdio.h>

void main()
{
    char name[20];
    int i=0;
    printf("Enter Your Name:");
    gets(name);
    while(name[i]!='\0')
    {
    	i++;
	}
	printf("Length of string is %d",i);
}
