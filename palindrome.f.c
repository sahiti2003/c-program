#include<stdio.h>
void palindrome();
void main()
{ palindrome();
}
 void palindrome()
 { int num,res=0,chk,c;
   printf("enter a number n");
   scanf("%d",&num);
   chk=num;
   while(num>0)
   { c=num%10;
     res=res*10+c;
     num=num/10;
   }
   if(chk==res)
   { printf("palindrome");
   }
   else{ printf("not a palindrome");
   }
 }
