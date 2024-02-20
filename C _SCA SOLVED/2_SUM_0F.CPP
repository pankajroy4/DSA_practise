#include<stdio.h>
#include<conio.h>
void main()
 {
  int a,n=0;
  clrscr();
  printf("Enter a no: ") ;
  scanf("%d",&a);

   while(a>=1)
   {
    n=n+a;
    a=a-1;
   }
  printf("sum is %d",n);
  getch();
  };