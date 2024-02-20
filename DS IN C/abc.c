// #include<stdio.h>
// #include<conio.h>
// int sum=0;
// int fact(int );
// int main(){
//     int n=5;
//     printf("sum is %d .",fact(n));
//     return 0;
// }
// int fact(int n){
//     if(n<=1)
//        return 1;
//     return fact(n-1)*n;   
// }



#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void append(struct node **,int);
void display(struct node*);

int main(){
    struct node *start=NULL;
    append(&start,10);
    append(&start,20);
    append(&start,30);
    append(&start,40);
    append(&start,50);
    display(start);
    return 0;
}

void append(struct node **ps,int x){
    struct node *p,*temp;
    p=(struct node *) malloc(sizeof(struct node));
    if(p==NULL){
        printf("\nInsufficient space.");
        return;
    }
    p->data=x;
    p->next=NULL;
    if(*ps==NULL){
        *ps=p;
        return;
    }
    temp=(*ps);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=p;

}

void display(struct node *p){
    if(p==NULL){
        return ;
    }
    printf("\n%d",p->data);
    display(p->next);
    
}
