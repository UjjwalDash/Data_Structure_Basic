#include<stdio.h>

void main()
{
	char word[]="WELCOME";
	int i;
	for(i=0;word[i]!='\0';i++)
	{
		word[i]=word[i]+32;
	}
	printf("%s",word);
	
}
