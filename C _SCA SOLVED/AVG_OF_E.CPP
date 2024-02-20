#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[10],i;
 int soe,soo,e,d;
 clrscr();
 soe=soo=e=d=0;
 for(i=0;i<=9;i++)
 {
   printf("enter a no: ");
   scanf("%d",&arr[i]);

       if(arr[i]%2==0)
	{
	soe=soe+arr[i];
	 e++;
	 }
       else
       {
	soo=soo+arr[i];
	d++;
	}
  }
  printf("sum of even no is %d  and \nsum of odd no is %d ",soe,soo);
  printf("\naverage of even no is %f and\naverage of odd no is %f ",(float)soe/e,(float)soo/d);
getch();
};
