#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct student {
    int roll;
    char grade;
    float per;
    struct student * next;
};
void insert(struct student **,struct student **,int);
void display(struct student *);

int main(){
    struct student *p[100];
    struct student x;
    int key;
    int i=0;
    int x;
    for(i=0;i<100;i++){
        printf("\nEnter Roll No,Grade,Percentage :");
        scanf("%d %c %f",x.roll,x.grade,x.per);
        key=x.roll%100;
        insert(&p,&x,key);

    }

}
void insert(struct student **p,struct student **x,int key){
    struct student *n;
    n=(struct student *)malloc(sizeof(struct student));
    n->next=NULL;
    if(p[key]==NULL){
       p[key]=n;
    }
    while(p[key]!=NULL)
    {
    }

}




