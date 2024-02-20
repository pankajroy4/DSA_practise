#include<stdio.h>

struct queue
 {

   int arr[5];
   int front,rear;


 };

 void insert(struct queue *,int);
 int del(struct queue*);


 int main()
 {

   struct queue q;
   int i,x;
   q.front=0;
   q.rear=-1;

   for(i=1;i<=6;i++)

    {
 
          printf("enter element to insert:\n");
          scanf("%d",&x);
          insert(&q,x);       

    }

    for(i=1;i<=6;i++)
     {

        x=del(&q);
        if(x!=-1)
         {
          
            printf("\n deleted element is %d\n",x);
              
         }


     }
 
   return 0;

 }


void insert(struct queue *q,int x)
{

   if(q->rear==4)
     {

         printf("queue overflow.\n");
         return;
     }

    q->arr[++q->rear]=x;
}


int del(struct queue *q)
{

    if(q->front > q->rear)
     {
      
       printf("queue underflow.\n");
        return -1;

     }

     return q->arr[q->front++];

}
