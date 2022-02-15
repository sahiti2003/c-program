#include<stdio.h>
int main ()
{
	char x,y;
	printf("enter the character;");
	scanf("%c",&x);
	if(x>=97)
	{y=x-32;
	printf("the uppercase letter is %c",y);
	}
	
	else
	{y=x+32;
	printf("the lowecase letter is %c",y);
	}
	return 0;
	
	
	
	
	
	
	
	
	
	
	
}
