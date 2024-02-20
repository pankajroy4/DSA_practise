#include<stdio.h>
#include<conio.h>
void main()
{
  int a,fact=1;
  clrscr();
  printf("enter a no: ");
  scanf("%d",&a);
 if(a>0)
{
  do
   {
     fact=fact*a;
     a--;
    }
  while(a>=1);
  }
   printf("factorial is %d",fact);
   getch();
};