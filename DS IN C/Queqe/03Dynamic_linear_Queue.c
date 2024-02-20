#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct queue{
    int data;
    struct queue *next;
};

void insert(struct queue **,struct queue **,int);
int delt(struct queue **,struct queue **);

int main(){
    struct queue *front=NULL,*rear=NULL;
    int x;
    insert(&rear,&front,10);

    x=delt(&front,&rear);
    if(x!=-1){
        printf("\nDeleted  elemnt is %d.",x);
    }
    x=delt(&front,&rear);
        if(x!=-1){
        printf("\nDeleted elemnt is %d.",x);
    }
    return 0;
}

void insert(struct queue **prear,struct queue **pfront,int x){
    struct queue* p;
    p=(struct queue *)malloc(sizeof(struct queue));
    if(p==NULL){
        printf("\nQueue OverFlow.");
        return;
    }
    p->data=x;
    p->next=NULL;

    if(*pfront==NULL)
        (*pfront)=p; 
    else
        (*prear)->next=p; 
    (*prear)=p;
}

int delt(struct queue **prear,struct queue **pfront){
    struct queue *temp;
    int x;
    if(*prear==NULL){
        printf("\nQueue UnderFlow.");
        return -1;
    }
    temp=*pfront;
    x=temp->data;
    if(*pfront==*prear){
        
        free(temp);
        *pfront=*prear=NULL;
        return x;
    }
    else{
    *pfront=temp->next;
    free(temp);
    return x;
    }
}