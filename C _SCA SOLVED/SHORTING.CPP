#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[5],i,temp=0,j;
 clrscr();
 for(i=0;i<5;i++)
 {
   printf("enter a no: ");
   scanf("%d",&arr[i]);
  }
 for(i=0;i<=3;i++)
  {
   for(j=i+1;j<=4;j++)
    {
     if(arr[i]>arr[j])
     {
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
     }
    }
    }
  for(i=0;i<=4;i++)
  {
 printf("\n%d",arr[i]);
 }
getch();
};
