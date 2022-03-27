#include<stdio.h>
//change upper to lower and lower to upper
void main()
{
	char word[20];
	int i;
	printf("Enter a Word:");
	gets(word);
	for(i=0;word[i]!='\0';i++)
	{
		if(word[i]>=65 && word[i]<=90)
		{
			word[i]=word[i]+32;
		}
		else
		{
			word[i]=word[i]-32;
		}
	}
	printf("%s",word);
}
