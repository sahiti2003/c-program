#include<stdio.h>
main()
{
	int n;
	int i=1,s=0;
	scanf("%d",&n);
	while (i<=n)
	{
        s=s+(i*i);
		i++;
	    
	}
	printf("%d",s);
}
