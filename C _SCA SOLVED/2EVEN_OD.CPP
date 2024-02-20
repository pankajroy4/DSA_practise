#include<stdio.h>
#include<conio.h>
void main()
 {
  int i=1,n,soe=0,soo=0;
  clrscr();
  printf("Enter a no: ");
  scanf("%d",&n);
  while(i<=n)
   {
     if(i%2==0)
       {
	soe=soe+i;
	i=i+1;
       }
     else if(i%2!=0)
       {
	soo=soo+i;
	i=i+1;
       }
     else
       {
	soo=soo+i;
	i=i+1;
       }
   }
   printf("sum of even no=%d",soe);
   printf("\nsum of odd no=%d",soo);
getch();
};