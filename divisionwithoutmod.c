#include<stdio.h>
main()
{
	int a,b,x,r;
	printf("enter a");
	scanf("%d",a);
	printf("enter b");
	scanf("%d",b);
	x=a/b;
	r=a-(b*x);
	printf("%d",x);
	printf("\n%d",r);
}
