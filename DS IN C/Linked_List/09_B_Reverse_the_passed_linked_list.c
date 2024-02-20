#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void append(struct node **,int);
void reverse(struct node **);
void display(struct node*);

int main(){
    struct node *start=NULL;
    append(&start,10);
    append(&start,20);
    append(&start,30);
    append(&start,40);
    append(&start,50);
    display(start);
    reverse(&start);
    printf("\nList is reversed now:");
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
        printf("\nLinked list is empty!");
        return ;
    }
    while(p!=NULL){
        printf("\n%d",p->data);
        p=p->next;
    }
}


void reverse(struct  node **ps){
    struct node *temp,*prev=NULL,*forthcom=NULL;
    if(*ps==NULL){
        printf("\nListe is empty");
        return;
    }
    temp=*ps;
    while(temp!=NULL){
        forthcom=temp->next;
        temp->next=prev;
        
        prev=temp;
        temp=forthcom;
    }
     *ps=prev;

    
}
