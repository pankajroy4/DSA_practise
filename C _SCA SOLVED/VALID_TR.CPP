#include<stdio.h>
#include<conio.h>
void main()
 {
   int a,b,c;
   clrscr();
   printf("enter three angles: ");
   scanf("%d%d%d",&a,&b,&c);
   if(a+b+c==180)
   printf("this is a valid triangle");
   else
   printf("not a triangle");
   getch();
   };