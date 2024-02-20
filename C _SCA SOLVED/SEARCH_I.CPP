#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[10],i;
 int a;
 clrscr();
 for(i=0;i<=9;i++)
 {
   printf("enter a no: ");
   scanf("%d",&arr[i]);
  }
    printf("enter a no to gets its position: ");
   scanf("%d",&a);
 for(i=0;i<=9;i++)
   {
    if(arr[i]==a)
      {
	printf("position is %d",i+1);
	break;
      }
   }
 if(i==10)
 printf("not foumd");
getch();
};
