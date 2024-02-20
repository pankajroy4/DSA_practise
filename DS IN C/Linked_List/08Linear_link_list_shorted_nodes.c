#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void insert(struct node **,int);
void display(struct node *);
int main(){
    struct node *start=NULL;
    insert(&start,30);
    insert(&start,20);
    insert(&start,10);
    insert(&start,9);
    insert(&start,50);
    display(start);
     return 0;
}

void insert(struct node **ps,int x){
    struct node *p,*temp,*prev;
    p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL){
        printf("\nInsufficient space!");
        return;
    }

    p->data=x;
    if(*ps==NULL){
        *ps=p;
        p->next=NULL;

        
        return;
    }

    if(x<(*ps)->data){
        p->next=*ps;
        *ps=p;

        return;
    }
    temp=*ps;
    while( temp!=NULL && temp->data<x  ){
        prev=temp;
        temp=temp->next;
       
    }
    if(temp==NULL){
        prev->next=p;
        p->next=NULL;
        
    }
      
    else{
        prev->next=p;
        p->next=temp;

    }
    printf("hii");
}

void display(struct node *p){
    if(p==NULL){
        printf("\nLinked is empty.");
        return;
    }
    while(p!=NULL){
    printf("\n%d",p->data);
    p=p->next;
    }
}
