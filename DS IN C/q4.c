#include<stdio.h>
#include<math.h>
#include<string.h>

struct stack
{
    char arr[10];
    int tos;
};

void push(struct stack *, char);
char pop(struct stack *);
int isoperand(char);
int precedence(char,char);
int isempty(struct stack);
void convert(char[],char[]);

int main()
{

   char infix[10],prefix[10];
   printf("enter a valid infix expression:\n");
   scanf("%s",infix);
   printf("you entered %s\n",infix);
   convert(infix,prefix);
   printf("the converted prefix form is \n %s",prefix);
   return 0;

}

 void push(struct stack *p,char x)
 {

        if(p->tos==9)
     {
       printf("stack overflow\n");
       return;
     }
     p->arr[++p->tos]=x;
     printf("element %c pushed successfully\n",x);



 }

  char pop(struct stack *p)
 {
        char popped;
         if(p->tos==-1)
      {
        printf("stack underflow\n");
        return 0;
     }

    popped=p->arr[p->tos--];
    printf("popped element is %c\n",popped);
    return popped;
 }

    int isoperand(char ch)
 {
      if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
        {
           return 1;
        }
      return 0;  
 }


  int isempty(struct stack s)
   {

     return (s.tos==-1);

   }


  int precedence(char outside,char stacktop)
  {

       if(outside=='$')           // 1  --> means push.
        return 1; 
    
       else if(stacktop=='$')            //0  --> means pop.
        return 0;
   

       else if(outside=='*' || outside=='/' || outside=='%')
        return 1;  
       else if(stacktop=='*' || stacktop=='/' || stacktop== '%')     
          return 0;
    
       else if(outside=='+' || outside=='-')
        return 1;
       else 
        return 0;        
        

  }   

   void convert(char infix[],char prefix[])
  {

    struct stack s;
    int i,j=0;
    char ch;
    int result;
    s.tos=-1;

    for(i=strlen(infix)-1;i>=0;i--)
    {
  
        ch=infix[i];
        if(isoperand(ch)==1)
          {
              prefix[j]=ch;
              printf("element %c copied to prefix array \n",ch);
              j++;
          }

         else
           {
            
               while(isempty(s)==0)
                 {
                     result=precedence(ch,s.arr[s.tos]);
                     if(result==0)
                       {

                          prefix[j]=pop(&s);
                          printf("popped element copied to prefix array.\n");
                          j++;

                       }
                      else
                          break; 
                 }

               push(&s,ch);  
                
                 
            } 
    }

     while(isempty(s)==0)
     {
          
         prefix[j]=pop(&s);
          printf("popped element copied to prefix array.\n");
         j++;        

     }
      
      prefix[j]='\0';
      strrev(prefix);
  
}

