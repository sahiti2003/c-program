#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a==b&&b==c&&c==a)
	{
		printf("eqilateral");
	}
	else
	{
		if (a==b||b==c||c==a)
		printf("isosceles");
	else
	{
		printf("scaleane");
		
	}}
}
