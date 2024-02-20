#include<stdio.h>
#include<conio.h>
void main()
 {
   int a,b;
   clrscr();
   printf("enter two integer");
   scanf("%d%d",&a,&b);
   if(a>b)
   printf("%d is greater",a);
   else if(a<b)
   printf("%d is greater",b);
   else
   printf("both are equal");
   getch();
   };