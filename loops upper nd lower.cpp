#include<stdio.h>
int main()
{
	char ch;
	printf("uppercase");
	for(ch='A';ch<='Z';ch++)
	{
		printf("%c",ch);
	}
	printf("\nlowercase");
	for(ch='a';ch<='z';ch++)
	{
		printf("%c",ch);
	}
}
