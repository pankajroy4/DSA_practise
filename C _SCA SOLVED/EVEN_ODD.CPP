#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[10],i;
 int soe,soo;
 clrscr();
 soe=soo=0;
 for(i=0;i<=9;i++)
 {
   printf("enter a no: ");
   scanf("%d",&arr[i]);

       if(arr[i]%2==0)
	soe=soe+arr[i];
       else
	soo=soo+arr[i];
  }
  printf("sum of even no is %d  and \nsum of odd no is %d ",soe,soo);
getch();
};
