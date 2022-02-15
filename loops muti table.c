#include<stdio.h>
int main()
{
	int x,p,i=1;
	scanf("%d",&x);
	printf("given integer %d",x);
	while (i<=10)
	{
		p=x*i;
		printf("\n%d*%d=%d",x,i,p);
		i++;
	}
}
