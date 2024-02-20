#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct BST{
    struct BST * left;
    int data;
    struct BST * right;
};

void append(struct BST **,int );

int main(){
    struct BST *root=NULL;
    append(&root,10);
    append(&root,5);
    append(&root,8);
    append(&root,15);
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
    else
       prev->right=p; 
    printf("\nElement %d attached in tree succeessfully.",x);  
}