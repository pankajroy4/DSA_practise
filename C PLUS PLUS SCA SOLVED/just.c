#include<stdio.h>
void fun();
int main(){
    int temp=20;
    printf("%d",temp);
    fun();
    printf("\n%d",temp);
    return 0;
}
void fun(){
    static int temp=10;
    printf("\n%d",temp);
}