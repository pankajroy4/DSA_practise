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
void del_any(struct doubly **,int);

int main(){
    struct doubly *start=NULL;
    append(&start,10);
    append(&start,20);
    append(&start,30);
    append(&start,40);
    append(&start,50);
    printf("\nBefore calling del_any function:");
    display(start);


    del_any(&start,10);
    printf("\nAfter 1st call of del_any:");
    display(start);


    del_any(&start,50);  
    printf("\nAfter 2nd call of del_any:");
    display(start);

    del_any(&start,30);  
    printf("\nAfter 2nd call of del_any:");
    display(start);

    del_any(&start,80);  
    printf("\nAfter 2nd call of del_any:");
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

void del_any(struct doubly **ps,int x){
    struct doubly *temp;
    if(*ps==NULL){
        printf("\nList is empty.");
        return;
    }
    temp=*ps;
    if(temp->data==x){         //match with 1st node and if-->
        if(temp->next==NULL){          // 1.There is only one node in linked list.
            (*ps)=temp->next;
            free(temp);
            return;
        }
         else{                         // 2.There is multiple node in linked list.
            (*ps)=temp->next;
            (*ps)->prev=NULL;
            free(temp);
            return;
        }
    }   
           
    //Do not match with 1st Node.
        while(temp->data!=x && temp->next!= NULL){
            temp=temp->next;
        }
        if((temp->data==x) && (temp->next== NULL)){
            (temp->prev)->next=NULL;
            free(temp);
        }
        else if(temp->data==x){
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            free(temp);
        }
        else{
            printf("\nNode is not present.");
        }
      
}