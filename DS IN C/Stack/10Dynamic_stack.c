#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct stack{
    int data;
    struct stack *next;
};
void push(struct stack **,int);
int pop(struct stack **);

int main(){
    struct stack *tos=NULL;
    int x;
    push(&tos,10);
    push(&tos,20);
    push(&tos,30);
    push(&tos,40);
    push(&tos,50);
    x=pop(&tos);
    if(x!=-1){
        printf("\nPopped elemnt is %d.",x);
    }
    x=pop(&tos);
        if(x!=-1){
        printf("\nPopped elemnt is %d.",x);
    }
    return 0;
}

void push(struct stack **ptos,int x){
    struct stack *p,*temp;
    p=(struct stack*)malloc(sizeof(struct stack));
    if(p==NULL){
        printf("\nStack OverFlow.");
        return;
    }
    p->data=x;
    p->next=*ptos;
    (*ptos)=p;
    printf("\nElement %d pushed successfully.",x);

}

int pop(struct stack **ptos){
    int x;
    struct stack *temp;
    if(*ptos==NULL){
        printf("\nStack Underflow.");
        return -1;
    }
    temp=*ptos;
    (*ptos)=temp->next;
    x=temp->data;
    free(temp);
    return x;
}