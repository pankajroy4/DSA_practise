#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct edge{
    char data;
    struct edge *next;
};
struct node{
    char data;
    struct node *next;
    struct edge *enext;
};

void insertnode(struct node**,char);
void insertedge(struct node*,char ,char);
struct node * findsourcevertex(struct node *,char );
void display(struct node *);

int main(){
    int choice;
    char data;
     char sr,ds; 
    struct node *root=NULL;
    do{
        printf("\nPlease Select an option:");
        printf("\n1.Insert node:\n2.Insert edge:\n3.Display:\n4.Quit:\n");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            
            printf("\nEnter Vertex data:");
            fflush(stdin);
            scanf("%c",&data);
            insertnode(&root,data);
            break;
        case 2:
           
            printf("\nEnter source and Destination Vertex:");
            fflush(stdin);
            scanf("%c %c",&sr,&ds);
            insertedge(root,sr,ds);
            break;
        case 3:
            display(root);
            break;
        case 4:
            printf("\nThank You!");
            break;
        default:
            printf("\nWrong choice! Try again.\n");
        }
    }while(choice!=4);
    return 0;
}

void insertnode(struct node **pr,char data){
    struct node *temp,*p;
    p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL){
        printf("\nInsufficient space.");
        return;
    }
    p->data=data;
    p->next=NULL;
    p->enext=NULL;
    if(*pr==NULL){
        *pr=p;
        return;
    }
    temp=*pr;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=p;
    return;
}

struct node * findsourcevertex(struct node *p,char sr){
    while(p!=NULL){
        if(p->data==sr)
            break;
        p=p->next;               
    }
    return p;
}

void insertedge(struct node* p,char sr,char ds){
    struct edge *r,*temp;
    struct node *q;
    if(p==NULL){
        printf("\nThere is no vertex in graph.");
        return;
    }
    q=findsourcevertex(p,sr);
    if(q==NULL){
        printf("Source vertex is not found.\n");
        return;
    }
    if(findsourcevertex(p,ds)==NULL){
        printf("Destination vertex is not found.\n");
        return;
    }
    r=(struct edge *)malloc(sizeof(struct edge));
    r->data=ds;
    r->next=NULL;
    if(q->enext==NULL){
        q->enext=r;
        printf("Edge inserted succesfully between %c and %c.\n",sr,ds);
        return;
    }
    temp=q->enext;
    while(temp->next!=NULL){
           temp=temp->next;
    }
    temp->next=r;
    printf("Edge inserted succesfully between %c and %c.\n",sr,ds);
    return;
}

void display(struct node * p){
    struct edge *temp;
    if(p==NULL){
        printf("\nGraph is empty.");
        return;
    }
    while(p!=NULL){
        printf("\n%c:",p->data);
        temp=p->enext;
        while(temp!=NULL){
            printf("%c,",temp->data);
            temp=temp->next;
        }
        if(p->enext!=NULL){
            printf("\b ");
         
        }    
        p=p->next;
    }
}