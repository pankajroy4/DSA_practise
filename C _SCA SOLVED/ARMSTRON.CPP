#include<stdio.h>
#include<conio.h>
void main()
{
 int a,r,n,sum;
 clrscr();
 printf("ENTEER A NUMBER: ");
 scanf("%d",&a);
  n=a;
 for(sum=0;a>0;a=a/10)
  {
    r=a%10;
    sum=sum+r*r*r;
    }
  if(sum==n)
   printf("this is armstrong no.");
   else
   printf("not an armstrong no.");
 getch();
};