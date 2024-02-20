#include<stdio.h>
#include<conio.h>
void main()
 {
  int a,i,fact=1;
  clrscr();
  printf("enter an integer: ");
  scanf("%d",&a);
  i=1;
  while(i<=a)
  {
    fact=fact*i;
    i++;
  }
  printf("factorial is %d",fact);
getch();
};


