#include<stdio.h>
#include<conio.h>
void main()
 {
  int a,sum;
  clrscr();
  for(sum=0; ;)
   {
    printf("ENTER A NO: ");
     scanf("%d",&a);
     sum=sum+a;
    if(a==0)
     break;
    }
 printf("sum is %d",sum);
 getch();
};
