#include<stdio.h>
void fibonacci();
void main()
{ fibonacci();
}
 void fibonacci()
{
  int a=0,b=1,c,i,num;
 printf("enter the elements");
 scanf("%d",&num);
 printf("%d,\n%d",a,b);
 for(i=2;i<=num;i++)
 
 {c=a+b;
  a=b;
   b=c;
    printf("\n%d",c);
 }
}
 
