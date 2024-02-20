#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct BST{
    struct BST *left;
    int data;
    struct BST *right;
};
struct stack{
    struct BST * arr[10];
    int tos;
};


void append(struct BST **,int );
void preorder(struct BST *);
void push(struct stack*,struct BST *);
struct BST* pop(struct stack *);

int main(){
    struct BST *root=NULL;
    append(&root,10);
    append(&root,5);
    append(&root,8);
    append(&root,15);
    preorder(root);

    return 0;

}

void append(struct BST **pr,int x){

    struct BST * p,*temp,*prev;
    p=(struct BST *)malloc(sizeof(struct BST));
    if(p==NULL){
        printf("\nInsufficient memory.");
        return;
    }
    p->left=NULL;
    p->data=x;
    p->left=NULL;
    if(*pr==NULL){
        *pr=p;
        printf("\nElement %d attached in tree succeessfully.",x);
        return ;
    }
    temp=*pr;
    while(temp!=NULL){
        prev=temp;
        if(temp->data > x)
            temp=temp->left;  
        else
            temp=temp->right;
    }
    if(prev->data >x)
       prev->left=p;
    else if(prev->data<x)
       prev->right=p; 
       printf("\nElement %d attached in tree succeessfully.",x);  
}


void preorder(struct BST *p){

    struct stack s;
    s.tos=-1;
    if(p==NULL){
        printf("\nTree is empty.");
        return;
    }
    push(&s,p);
    while(s.tos!=-1){
        p=pop(&s);
        while(p!=NULL){
            printf("\n%d",p->data);
            if(p->right!=NULL){
                push(&s,p->right);
            }
            p=p->left;
        }
    }
}

void push(struct stack *p,struct BST *q){
        if(p->tos==9){
            printf("\nStack overflow.");
            return;
        }
        p->arr[++p->tos]=q;
}

struct BST* pop(struct stack *p){

    if(p->tos==-1){
        printf("\nStack Underflow.");
        return NULL;
    }
    return p->arr[p->tos--];

}