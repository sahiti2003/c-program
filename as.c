#include<stdio.h>
int main(){
	int n,s=0,n1=n;
	printf("enter the number");
	scanf("%d",&n);
	n1=n;
	for(i=1,i<n,i++)
	{
		if((i%n)==0);
		s=s+i;
	}
	for(i=2,i<n,i++)
	{
		if((i%n)==0);
		s=s+i;
	}
	for(i=3,i<n,i++)
	{
		if((i%n)==0);
		s=s+i;
	}
	
	if (n1==s)
	printf("the number is perfect number");
	esle 
	printf("the number is not a perfect number")
	
	
}
