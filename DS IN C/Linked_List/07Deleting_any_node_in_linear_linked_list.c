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
void del_any(struct node**,int);


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
    

    del_any(&start,30);
    non=countnode(start);
    if(non!=-1){
    printf("\nThere  are %d nodes in  list.",non);
    } 
    display(start);

    del_any(&start,10);
  
    non=countnode(start);    
        if(non!=-1){
    printf("\nThere  are %d nodes in  list.",non);
    } 
    display(start);
    del_any(&start,90);
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

void del_any(struct node **ps,int x){
    struct node *temp,*prev;
    if(*ps==NULL){
        printf("\nList is empty.");
        return;
    }
     temp=*ps;
    if(temp->data==x){
       
        *ps=temp->next;
         free(temp);
        return;
    }

   
    while(temp!=NULL && temp->data != x){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("\nNode not found.");
    }
    else{
    prev->next=temp->next;
    free(temp);
    }
}

