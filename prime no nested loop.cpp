#include<stdio.h>
int main()
{
	int n,i,f,j;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		f=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				f=1;
				continue;
				
			}
		}
		if(f==0)
        printf("%d\n",i);	
    }
}
