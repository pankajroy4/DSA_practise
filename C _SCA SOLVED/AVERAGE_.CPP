#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[3][4],i,j,sum=0;
 for(i=0;i<3;i++)
 {
   for(j=0;j<4;j++)
    {
      printf("enter a no: ");
       scanf("%d",&arr[i][j]);
     }
  }
 for(i=0;i<3;i++)
  {
   for(j=0;j<4;j++)
    {
     sum=sum+arr[i][j];
      }
   }
 printf("sum of all array allement is %d and \naverage is %f",sum,(float)sum/12);
getch();
};
