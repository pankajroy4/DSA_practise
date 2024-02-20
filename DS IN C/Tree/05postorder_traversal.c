#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct bst{
    struct bst *left;
    int data;
    struct bst* right;
    int flag;
};
struct stack{
    struct bst *arr[10];
    int tos;
};

void append(struct bst**,int);
void postorder(struct bst *);
void push(struct stack *,struct bst*);
struct bst * pop(struct stack *);
int main(){
    struct bst *root=NULL;
    append(&root,30);
    append(&root,50);
    append(&root,20);
    append(&root,10);
    append(&root,60);
    append(&root,15);
    postorder(root);
    return 0;
}

void append(struct bst **pr,int x){
    struct bst *p,*temp,*prev;
    p=(struct bst *)malloc(sizeof(struct bst));
    if(p==NULL){
        printf("\nInsufficient memory.");
        return;
    }
    p->right=NULL;
    p->left=NULL;
    p->data=x;
    if(*pr==NULL){
        *pr=p;
        return;
    }
    temp=*pr;
    while(temp!=NULL){
        prev=temp;
    if(temp->data>x){
        temp=temp->left;
    }
    else if(temp->data<x){
        temp=temp->right;
    }
    }
    if(prev->data>x){
        prev->left=p;
    }
    else{
        prev->right=p;
    }
}

// void postorder(struct bst *p){
//     if(p==NULL){
//         return;
//     }
    
//     postorder(p->left); 
//     postorder(p->right);
//     printf("\n%d",p->data);
    
// }

void postorder(struct bst *p){
    struct stack s;
    s.tos=-1;
    if(p==NULL){
        printf("\nTree is empty.");
        return;
    }

    push_nodes:
    while(p!=NULL){
        p->flag=1;
        push(&s,p);
        if(p->right!=NULL){
            p->right->flag=-1;
            push(&s,p->right);
        }
        p=p->left;
    }

    p=pop(&s);
    while(p!=NULL){
        if(p->flag>0)
            printf("\n%d",p->data);
        else if(p->flag<0)
            goto push_nodes; 
        p=pop(&s);    
    }
}



void push(struct stack *s,struct bst *add){
    if(s->tos==9){
        printf("\nstack overflow");
        return;
    }
    s->arr[++s->tos]=add;
}

struct bst * pop(struct stack *s){
    if (s->tos==-1){
        return NULL;
    }
    return s->arr[s->tos--];
}