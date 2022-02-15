//write a c program to print even and odd numbers in a given range(20)//
#include<stdio.h>
void fact();
void main()
{ fact();
}
void fact()
{ int n,i,fact=1;
  printf("enter n value");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  { fact=fact*i;
  } printf("%d",fact);
}
  
