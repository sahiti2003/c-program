#include<stdio.h>
main()
{
	int x;
	float a,ta,sc;
	printf("enter x");
	scanf("%d",&x);
	if (x<=50)
	{
		a=x*0.50;
	}
	else if (x<=150)
	{
		a=100+((x-50)*0.75);
	}
	else if (x<=250)
	{
		x=100+((x-150)*1.20);
	}
	else 
	x=220+((x-250)*1.50);
	sc=x*0.20;
	ta=a+sc;
	printf("electricity bill %f",ta);
}
