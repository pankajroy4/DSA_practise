#include<conio.h>
#include<stdio.h>
void main()
 {
   int a,i,n;
   clrscr();
   printf("enter a no: ");
   scanf("%d",&a);
   i=1;

   while(i<=10)
     {
      n=a*i;
     printf("\n%d*%d=%d",a,i,n);
      i=i+1;
     }
   getch();
  };