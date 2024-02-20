#include<stdio.h>
#include<math.h>

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

   char infix[10],postfix[10];
   printf("enter a valid infix expression:\n");
   scanf("%s",infix);
   printf("you entered %s\n",infix);
   convert(infix,postfix);
   printf("the converted postfix form is \n %s",postfix);
   return 0;

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
    
     if(stacktop=='$')            //0  --> means pop.
        return 0;
     else if(outside=='$')           // 1  --> means push.
        return 1; 
     else if(stacktop=='*' || stacktop=='/' || stacktop== '%')     
        return 0;
     else if(outside=='*' || outside=='/' || outside=='%')
        return 1;
     else if(stacktop=='+' || stacktop=='-')
        return 0;
     else 
        return 1;         
        

  }