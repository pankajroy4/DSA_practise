#include<stdio.h>
#include<conio.h>
void main()
 {
   int a;
   clrscr();
   printf("enter a number.");
   scanf("%d",&a);
   if(a%2==0)
    {
     if(a%3==0)
     printf("multiple of 2 and 3 both.");
     else
     printf("multiple of 2 only.");
     }
   else if(a%3==0)
     printf("multipe of 3 only.");
   else
   printf("neither multiple of 2 nor 3.");

   getch();
   };