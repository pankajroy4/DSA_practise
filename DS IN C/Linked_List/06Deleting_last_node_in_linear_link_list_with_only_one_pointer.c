#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void insert(struct node **,int);
void display(struct node *);
int countnode(struct node*);
void del_last(struct node**);


int main(){
    struct node *start=NULL;
    int non;
    insert(&start,10);
    insert(&start,20);
    insert(&start,30);
    insert(&start,40);
    insert(&start,50);
    display(start);

    non=countnode(start);
    if(non!=-1){
    printf("\nThere  are %d nodes in  list.",non);
    } 
    

    del_last(&start);
    non=countnode(start);
    if(non!=-1){
    printf("\nThere  are %d nodes in  list.",non);
    } 
    display(start);

    del_last(&start);
    del_last(&start);
    del_last(&start);
    del_last(&start);
    non=countnode(start);    
        if(non!=-1){
    printf("\nThere  are %d nodes in  list.",non);
    } 
    return 0;
}

void insert(struct node **ps,int x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL){
        printf("\nInsufficient space!");
        return;
    }
    p->data=x;
    p->next=*ps;
    *ps=p;
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

int countnode(struct node *p){
    if(p==NULL){
        printf("\nlist is empty!");
        return -1;
    }
    int count=0;
    while(p!=NULL){
        count++;
        p=p->next;
    }
    return count;
}

void del_last(struct node **ps){
    struct node *temp;
    if(*ps==NULL){
        printf("\nList is empty.");
        return;
    }
    temp=*ps;
    if(temp->next==NULL){
        free(temp);
        *ps=NULL;
        return;
    }
   while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);  //jha temp ka next point kr rha hai use free kr do
    temp->next=NULL;   //temp ke next  part me null dall do

}

