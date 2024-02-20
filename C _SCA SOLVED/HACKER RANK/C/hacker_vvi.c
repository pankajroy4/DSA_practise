#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
  int a, b,i;
  printf("enter two number(1st<2nd):");
  scanf("%d\n%d", &a, &b);
  char* arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  for(i=a;i<=b;i++)
  {
    if(i<=9)
    {
     puts(arr[i]);  //or
    //  printf("%s\n",arr[i]);
    }
    else 
    {
      if(i%2==0)
        printf("even\n");
      else 
        printf("odd\n");    
    }
         
  }
  return 0;
}
