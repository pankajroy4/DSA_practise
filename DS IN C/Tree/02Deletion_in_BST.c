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
void inorder(struct BST *);
void push(struct stack*,struct BST *);
int search(struct BST *,int,struct BST**,struct BST**);
void del_node(struct BST **,int);
struct BST* pop(struct stack *);

int main(){
    struct BST *root=NULL;
    append(&root,10);
    append(&root,8);
    append(&root,9);
    append(&root,4);
    append(&root,20);
    append(&root,12);
    append(&root,30);
    printf("\nBefore deletion:");
    inorder(root);
    del_node(&root,8);
    printf("\nAfter deletion:");
    inorder(root);

    return 0;

}

void append(struct BST **pr,int x){

    struct BST * p,*temp,*prev;
    p=(struct BST *)malloc(sizeof(struct BST));
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


void inorder(struct BST *p){

    struct stack s;
    s.tos=-1;
    if(p==NULL){
        printf("\nTree is empty.");
        return;
    }
    push_nodes:
        while(p!=NULL){
        push(&s,p);
        p=p->left;
        }
    p=pop(&s);
    while(p!=NULL){
        printf("\n%d",p->data);
        if(p->right!=NULL){
            p=p->right;
            goto push_nodes; 
        }
        p=pop(&s);
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
        // printf("\nStack Underflow.");
        return NULL;
    }
    return p->arr[p->tos--];

}

int search(struct BST *p,int x,struct BST **pp,struct BST **pc){
    struct BST *q=NULL;

    while(p!=NULL){
        if(p->data==x){
            *pc=p;
            *pp=q;
            return 1;
        }
        q=p;
        if(p->data>x)
            p=p->left;
        else
           p=p->right;
    }
    return 0;
}

void del_node(struct BST **p,int x){
    struct BST *q=NULL,*m;
    struct BST *par,*child;
    int result;
    if(*p==NULL){
        printf("\nTree is empty");
        return;
    }
 
    result=search(*p,x,&par,&child);
    if(result==0){
        printf("\nNode not found.");
        return;
    }
    if(child->left!=NULL && child->right!=NULL){
        q=child->right;
        par=child;
        while(q->left!=NULL){
            par=q;
            q=q->left;
        }
        child->data=q->data;
        child=q;
    }
    if(child->left==NULL && child->right==NULL){
        if(par==NULL)
            *p=NULL;
        else if(par->left==child)
              par->left=NULL;
        else
            par->right=NULL;
        free(child);        
    }
    else if(child->left!=NULL && child->right==NULL){
        if(par==NULL)
           *p=child->left;
        else if(par->right==child)
            par->right=child->left;
        else
            par->left=child->left;
        free(child);    
    }
    else if(child->right!=NULL && child->left==NULL){
        if(par==NULL)
            *p=child->right;
        else if(par->right==child)
            par->right=child->right;
        else  
            par->left=child->right;
        free(child);        
    }
}