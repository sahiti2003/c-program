#include<stdio.h>
int main()
{
	int x,a=1,i=0;
	scanf("%d",&x);
	
	while(a<=x)
	{
	
		
		i=i+a*a*a;
		a++;
	}
	
	
	printf("%d",i);
}
