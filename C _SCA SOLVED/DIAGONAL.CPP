#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[3][3],i,j,sum=0;
 clrscr();
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
    {
      printf("enter a no: ");
       scanf("%d",&arr[i][j]);
     }
  }
 for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    {
      if(i==j)
	sum=sum+arr[i][j];
      }
   }
 printf("sumof diagonal element is %d",sum);
getch();
};
