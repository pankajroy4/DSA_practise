#include<stdio.h>
struct stack
{
  int arr[5];
  int tos;
};

void push(struct stack *, int);
int pop(struct stack *);
int main()
{
  struct stack s;
  int choice,x;
  s.tos=-1;
  do{
      printf("plsz select operation:");
      printf("\n1.push\n2.pop\n3.exit");
      scanf("%d",&choice);
      switch(choice)
      {
        
        case 1:
             printf("enter element to push:");
             scanf("%d",&x);
             push(&s,x);
             break;

        case 2:
              x=pop(&s);
              if(x!=-1)
              {
                  printf("\npopped element is %d",x);
              }
              break;
        
        case 3:
              printf("thank you for usoing app!");
              
              break;
        
        default:
              printf("wrong choice,plsz try again.");
      }    
    }while(choice!=3);
  
   return 0;
}


 void push(struct stack *p,int x)
 {
    if(p->tos==4)
     {
       printf("stack overflow");
       return;
     } 
     p->arr[++p->tos]=x; 
     printf("element %d pushed successfully",x);

 }

 int pop(struct stack *p)
 {

    if(p->tos==-1)
      {
        printf("stack underflow");
        return -1;  
      }

    return p->arr[p->tos--]; 
 }