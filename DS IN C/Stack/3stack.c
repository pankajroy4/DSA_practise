#include<stdio.h>
struct stack {
    int arr[5];
    int tos;
};

void push(struct stack*,int);
int pop(struct stack*);
int main(){
    struct stack s;
    s.tos=-1;
    int x;
    for(int i=0;i<5;i++){
        printf("\nenter element to push:");
        scanf("%d",&x);
        push(&s,x);
    }

    for(int i=0;i<5;i++){   
        x=pop(&s);
        if(x!=-1)
        printf("\npopped elment is %d ",x);
    }

return 0;            

}

void push(struct stack *p,int x){
   if(p->tos==4){
       printf("\nstack overflow.");
       return;
   }

   p->arr[++p->tos]=x;
   printf("\nelement %d pushed successfully.",x);
}

int pop(struct stack *p){
    if(p->tos==-1){
        printf("\nstack underflow.");
        return -1;
    }

    return p->arr[p->tos--];
}