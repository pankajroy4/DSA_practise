#include <stdio.h>

int main()
{
   int a, sum, n, r;
   printf("enter no check whether it is armstrong or not:");
   scanf("%d", &a);
   n = a;
   for (sum = 0; a > 0; a = a / 10)
   {

      r = a % 10;
      sum = sum + r * r * r;
   }
   if (sum == n)
   {
      printf("yes!");
   }
   else
   {
      printf("\nno!");
   }
   return 0;
}