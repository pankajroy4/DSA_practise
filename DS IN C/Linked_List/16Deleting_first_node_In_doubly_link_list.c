#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct doubly{
    struct doubly *prev;
    int data;
    struct doubly *next;
};
void append(struct doubly **,int);
void display(struct doubly *);
void del_first(struct doubly **);

int main(){
    struct doubly *start=NULL;
    append(&start,10);
    append(&start,20);
    append(&start,30);
    append(&start,40);
    append(&start,50);
    printf("\nBefore calling del_first function:");
    display(start);
    del_first(&start);
    printf("\nAfter 1st call of del_first:");
    display(start);


    del_first(&start);  
    printf("\nAfter 2nd call of del_first:");
    display(start);

    return 0;
}

void append(struct doubly **ps,int x){
    struct doubly *p,*temp;
    p=(struct doubly*)malloc(sizeof(struct doubly));
    if(p==NULL){
        printf("\nInsufficient spac.");
        return;
    }
    p->data=x;
    p->next=NULL;
    if(*ps==NULL){
        *ps=p;
        p->prev=NULL;
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

void del_first(struct doubly **ps){
    struct doubly *temp;
    if(*ps==NULL){
        printf("\nList is empty.");
        return;
    }
    if((*ps)->next==NULL){
        free(*ps);
        *ps=NULL;
        return;
    }
    temp=*ps;
    *ps=temp->next;
    free(temp);
    (*ps)->prev=NULL;
}