#include<stdio.h>
struct stack
{
   int arr[5];
   int tos;
};
 
 void push(struct stack *,int);
 int pop(struct stack *);
 

 int main()
  {
     struct stack s;
     s.tos=-1;
     int x,choice;
    do{
        printf("plsz secelct peration:");
        printf("\n1.push\n2.pop\n3.exit.\n");
        scanf("%d",&choice);
        switch(choice)
        {
        
            case 1:
                  printf("enter element for push:\n");
                  scanf("%d",&x);
                  push(&s,x);
                  break;

            case 2:
                 x=pop(&s);
                 if(x!=-1)
                   {
                       printf("popped element is %d\n",x);
                   }  
                 break;

            case 3:
                 printf("thank you for using the app!\n");
                 break;
            default:
                 printf("wrong choice, try again!\n");
        }
    }while(choice!=3);
          return 0;
        
 }


 void push(struct stack *p,int x)
 {
   
   if(p->tos==4)
     {
     printf("stack overflow\n");
     return ;
     }
    
    
    p->arr[++p->tos]=x;
    printf("pushed element %d successfully\n",x);

 }

  int pop(struct stack *p)
  {
      
    if(p->tos==-1)
    {
        printf("stack underflow\n");
        return -1;
    }
    return p->arr[p->tos--];
    

  }







