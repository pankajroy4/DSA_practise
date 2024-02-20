#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[3][4],i,j,sum;
 clrscr();
 for(i=0;i<3;i++)
 {
   for(j=0;j<4;j++)
    {
      printf("enter marks of student %d, of subject %d: ",i+1,j+1);
       scanf("%d",&arr[i][j]);
     }
   printf("\n");
  }
 for(i=0;i<3;i++)
  {
    sum=0;
   for(j=0;j<4;j++)
    {
     sum=sum+arr[i][j];
      }
   printf("sum of student no. %d is %d\n",i+1,sum);
   }
getch();
};
