#include<stdio.h>
#include<conio.h>
void main()
 {
   int a,b,c;
   clrscr();
   printf("enter three integer");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b)
    {
     if(a>c)
     printf("%dis greater",a);
     else
     printf("%dis greater",c);
    }
   else
    {
      if(b>c)
       printf("%d is greater",b);
      else
       printf("%d is greater",c);
    }
   getch();
   };