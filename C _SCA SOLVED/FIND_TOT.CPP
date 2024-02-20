#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[3][4],i,j,sum,max,position;
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
    max=0;
   for(j=0;j<4;j++)
    {
     sum=sum+arr[i][j];
      if(arr[i][j]>max)
	{
	 max=arr[i][j];
	 position=j+1;
	}
     }
   printf("total marks of student no. %d is %d and maximum marks is %d in subject no %d\n",i+1,sum,max,position);
   }
getch();
};
