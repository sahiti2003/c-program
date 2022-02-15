#include<stdio.h>
void perfect();
void main()
{ perfect();
}
 void perfect()
 { int num,rem,sum=0,i;
   printf("enter the number");
   scanf("%d",&num);
   for(i=1;i<num;i++)
   { rem=num%i;
   if(rem==0)
   { 
    sum=sum+i;
   }
   }
   if(sum==num)
   printf("perfect number");
   else
   printf("not perfect number");
 }
