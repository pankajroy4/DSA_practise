#include<stdio.h>
#include<conio.h>
int main()
 {
  int a,i;

  printf("ENTER A NO: ");
  scanf("%d",&a);
  i=0;
  if(a>0)
   {
     while(i<a)
      {
	 i=i+1;
	printf("\n%d",i);
      }
    }
   else
    {
      while(a<i)
       {
	 printf("\n%d",a);
	   a=a+1;
       }
     }
return 0;
}