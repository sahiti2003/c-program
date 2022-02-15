#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (b*b-(4*a*c)>0)
	{
		printf("real");
	}
	else if (b*b-(4*a*c)<0)
	{
		printf("imaginary");
		
	}
	else if (b*b-(4*a*c)==0)
	{
		printf("equal to zero");
	}
}
