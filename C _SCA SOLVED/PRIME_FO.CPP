#include<stdio.h>
#include<conio.h>
void main()
{
  int a,i;

  printf("enter a number: " );
  scanf("%d",&a);
  for(i=2;i<a;i++)
   {
     if(a%i==0)
      {
       printf(" not a prime.");
       break;
       }
    }
   if(i==a)
   printf("prime no.");
   getch();
  };
  
