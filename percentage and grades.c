
#include<stdio.h>
main()
{
	int x;
	scanf("%d",&x);
	if (x>90)
	{
		printf("A");
}
else 
{
	if (x>80)
	printf("B");
	else
	{
		if(x>70)
		printf("C");
		else
		{
			if(x>40)
			printf("D");
			else
			{
				if(x<40)
				printf("E");
			}}}}

}
