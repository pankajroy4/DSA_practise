#include<stdio.h>
#include<string.h>
int main()
{
  char arr[5];
  char brr[8];
  char crr[13];
  int i;
  printf("enter two strings:");
  scanf("%s %s",arr,brr);
  strcpy(crr,arr);
  strcat(crr," ");
  strcat(crr,brr);
  printf("%s",crr);
  return 0;


}