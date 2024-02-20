#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<limits.h>

// INT_MIN -> -ve infinity and
// INT_MAX -> +ve infinity

struct BST{
    struct BST * left;
    int data;
    struct BST * right;
};

void append(struct BST **,int );

int checkBST(struct BST* );
int helper(struct BST*,int,int );

int main(){
    int ans;
    struct BST *root=NULL;
    append(&root,10);
    append(&root,5);
    append(&root,8);
    append(&root,15);
    ans=checkBST(root);
    if(ans==1)
        printf("\nIt is a BST");
    else if(ans==-1)
        printf("\nIt is not a BST");

       
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


int checkBST(struct BST * root){
    return (helper(root,INT_MIN,INT_MAX));
}

int helper(struct BST * node,int min,int max){
    if(node==NULL){
        return 1;              //empty tree is bst.
    }
    if(node->data <min || node->data>max){
        return 0;
    }

    return (helper(node->left,min,node->data-1) && helper(node->right,node->data+1,max));
}