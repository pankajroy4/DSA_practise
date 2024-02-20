#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[10],i,sum=0;
 clrscr();
 for(i=0;i<=9;i++)
 {
   printf("enter a no: ");
   scanf("%d",&arr[i]);
    sum=sum+arr[i];
  }
  printf("sum is %d ",sum);
  printf("average is %f",(float)sum/i);
getch();
};
