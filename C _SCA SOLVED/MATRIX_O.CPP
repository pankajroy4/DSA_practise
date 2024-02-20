#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[3][4],i,j;
 clrscr();
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
      printf(" %d  ",arr[i][j]);
      }
    printf("\n");
   }
getch();
};
