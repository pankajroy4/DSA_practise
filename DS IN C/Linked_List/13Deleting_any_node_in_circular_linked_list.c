
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct Cnode{
    int data;
    struct Cnode *next;
};

void insert(struct Cnode **, int);
void display(struct Cnode *);
void del_any(struct Cnode **, int);

int main(){
    struct Cnode *start = NULL;
    insert(&start, 10);
    insert(&start, 20);
    insert(&start, 30);
    insert(&start, 40);
    insert(&start, 50);
    printf("\nBefore delete call.");
    display(start);

    del_any(&start, 20);
    printf("\nAfter 1st call of delete.");
    display(start);
    del_any(&start, 50);
    printf("\nAfter 2nd call of delete.");
    display(start);

    return 0;
}

void insert(struct Cnode **ps, int x){
    struct Cnode *p, *temp;
    p = (struct Cnode *)malloc(sizeof(struct Cnode));
    if (p == NULL){
        printf("\nInsufficient space .");
        return;
    }
    p->data = x;
    if (*ps == NULL){
        *ps = p;
        p->next = p;
        return;
    }
    temp = *ps;
    while (temp->next != (*ps)){
        temp = temp->next;
    }
    temp->next = p;
    p->next = (*ps);
}

void display(struct Cnode *p){
    struct Cnode *temp;
    if (p == NULL){
        printf("\nList is empty.");
        return;
    }
    temp = p;
    do{
        printf("\n%d", temp->data);
        temp = temp->next;
    } while (temp != p);
}

void del_any(struct Cnode **ps, int x){
    struct Cnode *temp, *prev;
    if (*ps == NULL){
        printf("\nNode is empty.");
        return;
    }

    if ((*ps)->data == x){
        if((*ps)->next==*ps){
           free(*ps);
           *ps = NULL; 
           return;
           }
        else{
             while(temp->next!=(*ps)){
                 temp=temp->next;
             }
             temp->next=(*ps)->next;
             free(*ps);
             *ps=temp->next;
             return;
        }

    }

    while (temp->next != (*ps) && temp->data != x){
        prev = temp;
        temp = temp->next;
    }
    if (temp->data == x){
        prev->next = temp->next;
        free(temp);      
    }
    else{
      printf("\nNode not found,");
    }
}

        