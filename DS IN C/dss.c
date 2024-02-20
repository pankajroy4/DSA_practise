#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};

void addatbeg(struct node **,int );
void display(struct node *);
int countnodes(struct node *);
int searchnodes(struct node *,int);
void del_any(struct node**,int);
 
int main()
{
     int NON,PON;
    struct node *start=NULL;
    display(start);
    addatbeg(&start,10);
    addatbeg(&start,20);
    addatbeg(&start,30);
    addatbeg(&start,40);
    display(start);
    
    NON=countnodes(start);
    printf("\nno. of nodes is %d",NON);
    PON=searchnodes(start,30);
    if(PON==0)
    {
         printf("\nempty link list.");
    }
    
   

    if(PON==-1)
    {
         printf("\ndo not matched;");
   
    }

       else
    {
         printf("\nposition of given nodes is %d",PON);
    }

    del_any(&start,30);
    display(start);
    int countnodes(struct node *);
    
  

    return 0;
}

void addatbeg(struct node **ps,int x)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->next=*ps;
    *ps=p;
   
      
}

void display(struct node *p)
 {
     if(p==NULL)
      {
          printf("list is empty!");
          return;
      }

      while(p!=NULL)
       {  
           printf("\n%d",p->data);
           p=p->next;
       }
 }

int countnodes(struct node *q)
 {
    int count=0;
    if(q==NULL)
     {
         printf("there is no nodes");
         return count;

     }
    while(q!=NULL)
     {
         count++;
         q=q->next;
     }

     return count;

 }

 int searchnodes(struct node *i,int x)
 { 
     int count=0;
     if(i==NULL)
      { 
          
          return 0;
      }

      while(i!=NULL)
       {  
            count++;
           if(i->data==x)
            {
             
              return count;
            }
           i=i->next;
       }
      
       return -1;          
 }

 