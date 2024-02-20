#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct tbt{
    struct tbt *left;
    int data;
    struct tbt* right;
    int flag;
};
void create_tbt(struct tbt**,int);  //One_way_inorder_tbt;
void inorder_traversal_of_tbt(struct tbt *); //Inorder_traversal_of_one_way_inorder_tbt;
struct tbt * leftmost(struct tbt*);
int main(){
    struct tbt * root=NULL;
    create_tbt(&root,10);
    create_tbt(&root,5);
    create_tbt(&root,20);
    create_tbt(&root,8);
    create_tbt(&root,55);
    create_tbt(&root,30);
    create_tbt(&root,2);
    create_tbt(&root,2);
    create_tbt(&root,12);
    create_tbt(&root,15);
    create_tbt(&root,30);
    inorder_traversal_of_tbt(root);
    return 0;
}

void create_tbt(struct tbt **pr,int x){
    struct tbt * p,*temp,*prev;
    p=(struct tbt*)malloc(sizeof(struct tbt));
    p->flag=0;
    if(p==NULL){
        printf("\nInsufficient space");
        return;
    }
    p->data=x;
    p->left=NULL;
    p->right=NULL;

    if(*pr==NULL){
        p->right=NULL;
        *pr=p;
        return;
    }
    temp=*pr;
    while(temp!=NULL){
        prev=temp;   
        if(x<temp->data)
            temp=temp->left;
        else
            if(temp->flag==1){
                break;
            }
            else
                temp=temp->right; 
    }
    if(x<prev->data){
        prev->left=p;
        p->right=prev;
        p->flag=1;
    }
    else{
        p->right=prev->right;
        prev->right=p;
        prev->flag=0;
        p->flag=1;
    }
}


struct tbt * leftmost(struct tbt*q){
    if(q==NULL)
       return NULL;
    while(q->left!=NULL)
        q=q->left;
    
    return q;   
}


void inorder_traversal_of_tbt(struct tbt *p){
    struct tbt * temp;
    if (p==NULL){
        printf("\nEmpty tree");
        return ;
    }
    temp=leftmost(p);
    while(temp!=NULL){
        printf("\n%d",temp->data);
        if(temp->flag==1)
            temp=temp->right;
        else
            temp=leftmost(temp->right);
    }
}