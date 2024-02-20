#include <stdio.h>
//  int x=5;
int *m();
int main()
{
  // int i, a = 1, count; 
  // while(a <= 100)
  // {
  //   count = 0;
  //   i = 2;
  //   while(i <= a/2)
  //   {
  //     if(a%i == 0)
  //     {
  //       count++;
	// break;
  //     }
  //     i++;	
  //   }	
  //   if(count == 0 && a != 1 )
  //   {
	// printf(" %d ", a);
  //   }
  //   a++; 
  // }
// int x=3;
// printf("%d",x);
// {
//   x=4;
// }
// printf("%d",x);
// int k;
// for(;;){
// printf("test");
// break;
// }

int k=m();
printf("%d",k);
  return 0;
}
int *m(){
  int a[2]={5,8};
  return a;
}