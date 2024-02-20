#include<stdio.h>
#include<conio.h>
void main()
{
 int a,r,sum;
 clrscr();
 printf("ENTER AN INTEGER: ");
 scanf("%d",&a);
 for(sum=0;a>0;a=a/10)
  {
   r=a%10;
   sum=sum+r;
   }
 printf("sum of digits %d",sum);
 getch();
 };
