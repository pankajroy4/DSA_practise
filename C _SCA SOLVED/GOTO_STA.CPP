#include<stdio.h>
#include<conio.h>
void main()
 {
  int a;
  clrscr();
age:printf("enter your age:");
	  scanf("%d",&a);
	  if(a<0)
	  {
	  printf("Invalid age,Try again!\n");
	  goto age;
	  }
	  else
	  printf("your age is: %d",a);
getch();
  };
