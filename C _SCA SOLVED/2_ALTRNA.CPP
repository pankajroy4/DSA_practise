#include<conio.h>
#include<stdio.h>
void main()
 {
   int a,i;
   clrscr();
   printf("enter a no: ");
   scanf("%d",&a);
   i=1;
    while(i<=10)
     {
      printf("\n%d",(a*i));
      i=i+1;
     }
   getch();
  };