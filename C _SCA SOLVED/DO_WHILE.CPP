#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  char z;
  clrscr();
  do
   {
     printf("enter two intergr: ");
     scanf("%d %d",&a,&b);
     printf("sum is %d",a+b);
     printf("\ndo you want to continue(y/N): ");
     fflush(stdin);
     scanf("%c",&z);
    }
  while(z=='y');
  getch();
 }


