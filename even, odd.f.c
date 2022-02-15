#include<stdio.h>
void even_odd();
void main()
{ even_odd();
}
 void even_odd()
 {
  int a,i;
 printf("enter the value");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
 if(i%2==0)
 {printf("%d is even",i);
 }
 else{ printf("%d is odd",i);
     }
 }
 }
