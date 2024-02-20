#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void append(struct node **,int);
void display(struct node *);
int countnode(struct node*);
int nodefinder(struct node*,int);

int main(){
    struct node *start=NULL;
    int non;
    int pon;
    append(&start,10);
    append(&start,20);
    append(&start,30);
    append(&start,40);
    append(&start,50);
    display(start);
    non=countnode(start);
    if(non!=-1){
    printf("\nThere  are %d nodes in  list.",non);
    }
    pon=nodefinder(start,40);
    if(pon==-1)
      printf("\nList is empty.");
    else if(pon==0)
      printf("\nNode is not present in the list.");
    else 
    printf("\nposition of this node is %d.",pon);    

    
    return 0;
}

void append(struct node **ps,int x){
    struct node *p,*temp;
    p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL){
        printf("\nInsufficient space!");
        return;
    }
    p->data=x;
    p->next=NULL;
    if(*ps==NULL){
        *ps=p;
        return;
    }
    temp=*ps;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=p;
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
int nodefinder(struct node *p,int x){
    if(p==NULL){
        printf("\nlist is empty!");
        return -1;
    }   
    int pos=1;
    while(p!=NULL){
        if(p->data==x){
           return pos;
        }
        p=p->next;
        pos++;
    } 
    return 0;
}
