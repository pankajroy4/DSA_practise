#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct doubly{
    struct doubly *prev;
    int data;
    struct doubly *next;
};

void append(struct doubly **,int);
void display(struct doubly *);

int main(){
    struct doubly *start=NULL;
    append(&start,10); 
    append(&start,20); 
    append(&start,30); 
    append(&start,40); 
    append(&start,50);
    display(start);
    return 0; 
}

void append(struct doubly **ps,int x){
    struct doubly *p,*temp;
    p=(struct doubly*)malloc(sizeof(struct doubly));
    if(p==NULL){
        printf("\nInsufficient space.");
        return;
    }
    p->data=x;
    p->next=NULL;
    if(*ps==NULL){
        p->prev=NULL;
        *ps=p;
        return;
    }
    temp=*ps;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=p;
    p->prev=temp;
}

void display(struct doubly *p){
    if(p==NULL){
        printf("\nList is empty.");
        return;
    }
    while(p!=NULL){
        printf("\n%d",p->data);
        p=p->next;
    }
}