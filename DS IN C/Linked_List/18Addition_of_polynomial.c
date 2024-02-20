#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct poly{
    int coef;
    int exp;
    struct poly *next;
};
void add(struct poly *,struct poly*,struct poly **);
void append(struct poly **,int ,int);
void show(struct poly *);

int main(){
    struct poly *f,*s,*t;
    f=s=t=NULL;
    append(&f,9,2);
    append(&s,3,1);
    append(&f,3,5);
    append(&s,10,2);
    append(&f,4,6);
    append(&s,4,4);
    append(&f,7,9);
    append(&s,2,6);
    append(&s,5,8);
    add(f,s,&t);
    printf("\nThis is first polynimoal:");
    show(f);
    printf("\nThis is second polynomial:");
    show(s);
    printf("\nAddition is done!\n");
    show(t);

    return 0;
}
void add(struct poly *f,struct poly  *s,struct poly **pt){
    
    struct poly *p,*q=NULL,*temp;

    if(f==NULL && s==NULL){
        printf("\nAddition not possible.");
        return ;
    }
    while(f!=NULL && s!=NULL){ 

        p=(struct poly*)malloc(sizeof(struct poly));
        p->next=NULL;
        if(*pt==NULL){
            *pt=p;
        }
        else{
           temp->next=p;
        }
        temp=p;
        if(f->exp<s->exp){
            temp->coef=f->coef;
             temp->exp=f->exp;
             f=f->next;
        }
        else if(f->exp>s->exp){
            temp->coef=s->coef;
            temp->exp=s->exp;
            s=s->next;
        }
        else{
            temp->coef=f->coef+s->coef;
            temp->exp=f->exp;
            f=f->next;
            s=s->next;
        }
    }
    if(f!=NULL){
        q=f;
    }
    else if(s!=NULL){
        q=s;
    }
    while(q!=NULL){
        p=(struct poly *)malloc(sizeof(struct poly));
        p->next=NULL;
        p->coef=q->coef;
        p->exp=q->exp;
        if(*pt==NULL){
            *pt=p;
        }
        else{
            temp->next=p;
        }
        temp=p;
        q=q->next;
    }
}

void append(struct poly **pa,int coef,int exp){
    struct poly *p,*temp;
    p=(struct poly*)malloc(sizeof(struct poly));
    p->next=NULL;
    p->coef=coef;
    p->exp=exp;
    if(*pa==NULL){
        *pa=p;
        return;
    }
    temp=*pa;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=p;
}

void show(struct poly * p){
    if(p==NULL){
        printf("\nList is empty.");
        return ;
    }
    while(p!=NULL){
        printf("\nCoefficient is %d and ",p->coef);
        printf("\nExponent is %d.\n",p->exp);
        p=p->next;
    }
}

