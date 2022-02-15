#include<stdio.h>
main()
{
	int n,p;
	int i=1;
	scanf("%d",&n);
	while(i<=20)
	{
		p=n*i;
	    printf("\n%d*%d=%d",n,i,p);
	    i++;
	}
	
}
