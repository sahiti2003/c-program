#include<stdio.h>
main()
{
	int n;
	int i=1,f=1;
	scanf("%d",&n);
	while (i<=n)
	{
		f=f*i;
		i++;
		
	}
	printf("%d",f);
}
