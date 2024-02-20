#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[10],i,max;
 clrscr();
 for(i=0;i<=9;i++)
 {
   printf("enter a no: ");
   scanf("%d",&arr[i]);
  }
  max=i;
 for(i=0;i<=9;i++)
  {
    if(arr[i]>max)
      max=arr[i];
  }
printf("largest number is %d",max);
getch();
};
