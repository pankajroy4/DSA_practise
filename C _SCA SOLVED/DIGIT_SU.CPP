#include<stdio.h>
#include<conio.h>
void main()
 {
 int a,r=0,sum=0;
 clrscr();
 printf("Enter a number: ");
 scanf("%d",&a);
 while(a>0)
   {
     r= a%10;
     sum=sum+r;
     a=a/10;
     }
  printf("sum of digits is %d",sum);

 getch();
 };
