#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char *s;
    s=malloc(1024 *sizeof(char));
    printf("\nEnter string:");
    scanf("%s",s);  
    int count=0;
    for(int i=0;i<10;i++)
    {
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]-48==i)
            {
                count++;
            }
        }
        printf("%d ",count);
        count=0;
        
    } 
    printf("\nString is %s",s);
    return 0;
}
