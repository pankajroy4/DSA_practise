#include<stdio.h>
#include<conio.h>
void main()
{
 int a,r;
 clrscr();
 printf("ENTER AN INTEGER: ");
 scanf("%d",&a);
 for(r=0;a>0;a=a/10)
  {
   r=r+a%10;
   }
  printf("SUM IS %d",r);
  getch();
  };