
#include<stdio.h>
struct stack{
    int arr[5];
    int tos;
};

void push(struct stack*,int);
int pop(struct stack*);
int main(){
    struct stack s;
    s.tos=-1;
    int x,choice;

    do{
        printf("\nEnter choice:\n1.Push:\n2.Pop:\n3.Quite:\n");
        scanf("%d",&choice);
        
        switch(choice){
          case 1:{
                printf("\nenter element to push:");
                scanf("%d",&x);
                push(&s,x);
                break;
    
            }
          case 2:{
               x=pop(&s);
               if(x!=-1)
               printf("\npopped element is %d",x);
               break;
            }
          case 3:{
                 printf("\nThank you!");
                 break;
             }  
          default:{
                 printf("\nWrong Choice! Try Again:");
             }       
        }      
            

    }while(choice!=3);

return 0;            

}

void push(struct stack *p,int x){
   if(p->tos==4){
       printf("\nstack overflow.");
       return;
   }

   p->arr[++p->tos]=x;
   printf("\nelement %d pushed successfully.\n",x);
}

int pop(struct stack *p){
    if(p->tos==-1){
        printf("\nstack underflow.");
        return -1;
    }

    return p->arr[p->tos--];
}