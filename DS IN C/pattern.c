#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{     

    char str[7]="pankaj";
    int i,j;
   
    int len = strlen(str);
    for(i=1; i <= len; i++)
    {
        for(j=1; j <= len-i; j++)
        {
           printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c",str[j-1]); 
            printf(" ");
        }
         printf("\n");
    }
  return 0;  
}