#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct Cnode{
   int data;
   struct Cnode * next;
};

void insert(struct Cnode**,int );
void display(struct Cnode *);

int main(){
    struct Cnode *start=NULL;
    insert(&start,10);
    // insert(&start,20);
    // insert(&start,30);
    // insert(&start,40);
    // insert(&start,50);
    display(start);
    return 0;
}

void insert(struct Cnode **ps,int x){
    struct Cnode *p,*temp;
    p=(struct Cnode*)malloc(sizeof(struct Cnode));
    if(p==NULL){
        printf("\nInsufficient space in memory.");
        return;
    }

    p->data=x;
    if(*ps==NULL){
        *ps=p;
        p->next=p;
        return;
    }
    temp=*ps;
    while(temp->next!=(*ps)){
        temp=temp->next;
    }
    temp->next=p;
    p->next=(*ps);
}
// void display(struct Cnode* p){
//     struct Cnode *temp;
//     if(p==NULL){
//         printf("\nEmpty list.");
//         return;
//     }
//     temp=p;
//     while(temp->next!=p){
//         printf("\n%d",temp->data);
//         temp=temp->next;
//     }
//     printf("\n%d",temp->data);

// }

// display function with do-While looop:

void display(struct Cnode* p){
    struct Cnode *temp;
    if(p==NULL){
        printf("\nEmpty list.");
        return;
    }
    temp=p;
    do{

        printf("\n%d",temp->data);
        temp=temp->next;
    }while(temp!=p);
}
