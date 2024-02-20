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

struct Que{
    struct Que *next;
    struct BST* address;
};


void append(struct BST **,int );
void inorder(struct BST *);
void push(struct stack*,struct BST *);
struct BST* pop(struct stack *);
void levelOrder(struct BST*);

void innsert(struct Que **, struct Que **,struct BST*);
struct BST* del(struct Que**,struct Que**);

int main(){
    struct BST *root=NULL;
    append(&root,10);
    append(&root,8);
    append(&root,9);
    append(&root,4);
    append(&root,20);
    append(&root,12);
    append(&root,30);
    printf("\nInorder traversal is:");
    inorder(root);
    printf("\nLavel Order Traversal is:");
    levelOrder(root);

    return 0;

}

void append(struct BST **pr,int x){

    struct BST * p,*temp,*prev;
    p=(struct BST *)malloc(sizeof(struct BST));
    p->left=NULL;
    p->data=x;
    p->right=NULL;
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

void levelOrder(struct BST *pr){
  //Write your code here
    struct Que *front=NULL,*rear=NULL;
    struct BST *temp;
    if(pr==NULL){
        printf("\nTree is empty.");
        return ;
    }
    temp=pr;
    innsert(&rear,&front,pr);
    while(rear!=NULL){
       temp=del(&rear,&front);
       printf("\n%d ",temp->data);

       if(temp->left!=NULL){
           innsert(&rear,&front,temp->left);
       }
       if(temp->right!=NULL){
           innsert(&rear,&front,temp->right);
       }

    }     
}


void innsert(struct Que **rear, struct Que **front,struct BST *address){
    struct Que *p;
    p=(struct Que *)malloc(sizeof(struct Que));
    if(p==NULL){
        printf("\nQue Overflow");
        return;
    }
    p->address=address;
    p->next=NULL;
    
    if((*front)==NULL)
        (*front)=p;
    else
        (*rear)->next=p;
    (*rear)=p;        
}

struct BST* del(struct Que **rear,struct Que **front){
    struct Que *temp;
    struct BST *ret;
    if(*rear==NULL){
        printf("\nQueue is empty.");
        return NULL;
    }
    temp=*front;
    ret=temp->address;
    if(*front==*rear){
        free(temp);
        *front=*rear=NULL;
        return ret;
    }
    else{
        *front=temp->next;
        free(temp);
        return ret;
    }
}

