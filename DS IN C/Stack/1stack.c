#include<stdio.h>
struct stack{
    int arr[4];
    int tos;
};

int main(){
    struct stack s;
    s.tos=-1;
 

//   pussing element in stack

    s.tos+=1;
    s.arr[s.tos]=10;
    printf("%d pushed successfully\n",10);

    s.tos+=1;
    s.arr[s.tos]=20;
    printf("%d pushed successfully\n",20);    

    s.tos+=1;
    s.arr[s.tos]=30;
    printf("%d pushed successfully\n",30);    

    s.tos+=1;
    s.arr[s.tos]=40;
    printf("%d pushed successfully\n",40);  

    // poing element from stack  

    int x;
    x=s.arr[s.tos];
    s.tos-=1;
    printf("%d popped successfully\n",x);

    x=s.arr[s.tos];
    s.tos-=1;
    printf("%d popped successfully\n",x);

    x=s.arr[s.tos];
    s.tos-=1;
    printf("%d popped successfully\n",x);

    x=s.arr[s.tos];
    s.tos-=1;
    printf("%d popped successfully\n",x);
    return 0;
}