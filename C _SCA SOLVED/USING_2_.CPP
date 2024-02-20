#include<stdio.h>
#include<conio.h>
void main()
{
 int a,fact;
 clrscr();
 printf("ENTER AN INTEGER: ");
 scanf("%d%",&a);
 for(fact=1;a>0;a--)
  {
   fact=fact*a;
  }
 printf("factorial is %d",fact);
 getch();
 };
