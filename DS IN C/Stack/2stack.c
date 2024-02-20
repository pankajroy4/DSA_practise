#include<stdio.h>
struct stack{
    int arr[4];
    int tos;
};

int main(){
    struct stack s;
    s.tos=-1;
    int x,y;
 
    for(int i=1;i<=4;i++){  
        printf("\nenter element to push:");
        scanf("%d",&x);
        s.tos+=1;
        s.arr[s.tos]=x;
        printf("element %d pushed successfully.\n",x);
    }
    
    for (int i=1;i<=4;i++){
        y=s.arr[s.tos];
        printf("\nelement %d popped successfully.",y);
        s.tos-=1;
    }

    return 0;
     
}