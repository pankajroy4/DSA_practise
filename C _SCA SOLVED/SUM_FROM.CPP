#include<stdio.h>
#include<conio.h>
void main()
{
 int a,sum;
 clrscr();
 printf("ENTER A NUMBER: ");
 scanf("%d",&a);
 for(sum=0;a>0;a--)
  {
   sum=sum+a;
   }
 printf("sum is %d",sum);
 getch();
};