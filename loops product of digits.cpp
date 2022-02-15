#include<stdio.h>
int main()
{
	int n,r,s=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		r=r+s;
		printf("%d",r);
		
		n=n/10;
	}
	
}
