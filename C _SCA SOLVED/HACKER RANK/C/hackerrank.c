// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() 
// {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     char ch;
//     char arr[20];
//     char brr[20];
//     scanf("%c\n",&ch);
//     scanf("%s\n",arr);
//     scanf("%[^\n]s",brr);
//     printf("%c\n",ch); 
//     printf("%s\n",arr);
//     printf("%s",brr);
//     return 0;
// }

// ________________________________________________________

#include <stdio.h>
int max_of_four(int,int,int,int);

int max_of_four(int a,int b,int c,int d)
 {  
     int x;
     if (a>b)
       {
           if (a>c)
             {
                 x=a;
             }
           else
              {
                  x=c;
              }
           
       }
     else if(b>c)
      {
        x=b;

      }
      else
      {
          x=c  ;
      }


      if (x>d)
        return x;
     else
      return d;

 }

int main() {
    int a, b, c, d;
    printf("enter four integer:");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}