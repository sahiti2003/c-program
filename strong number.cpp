#include<stdio.h>
int main()
{
	int n,x,m,r,s=0,f=1,i;
	scanf("%d",&n);
	m=n;
	while (n!=0)
	{
		r=n%10;
		f=1;
	    for(i=1;i<=r;i++)
	    {
	    	f=f*i;
		}
		s=s+f;
		n=n/10;
	}
	if(m==s)
	printf("strong number");
	else 
	printf("not strong number");
	
	
}
