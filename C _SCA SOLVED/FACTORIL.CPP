#include<stdio.h>
#include<conio.h>
void main()
 {
 int a, fact=1;
 printf("enter an integer: ");
 scanf("%d",&a);
 while(a>0)
  {
    fact=fact*a;
    a--;
   }
  printf("factorial is %d",fact);
  getch();
 };