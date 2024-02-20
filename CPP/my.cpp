#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,a;
    printf("\nenter no. to check wheter it is prime or not: ");
    scanf("%d",&a);
    if(a>20)
    {
        printf("\nnot in range of 20");
    }
    for(i=2;i<=a-1;i++)
     {
         if(a%i==0)
         {
          printf("\nnot prime");
          break;
         }
     }
      
      if(i==a)
      {
          printf("\nprime");
      }
      return 0;
}