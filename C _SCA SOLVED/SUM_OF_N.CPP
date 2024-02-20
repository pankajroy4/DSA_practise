#include<stdio.h>
#include<conio.h>
void main()
 {
 int i,a,sum;
 clrscr();
 printf("Enter a number: ");
 scanf("%d",&a);
 i=1;
 sum=0;
 while(i<=a)
   {
    sum=sum+i;
    i=i+1;
    }
  printf("sum is %d",sum);
 getch();
 };
