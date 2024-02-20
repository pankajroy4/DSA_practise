#include<stdio.h>
#include<math.h>
#include<string.h>
struct stack 
{
    char arr[10];
    int tos;
};

void push(struct stack *,char);
char pop(struct stack *);
int isempty(struct stack);
int isoperand(char);


void convert(char [],char[]);


int main()
{
    char infix[20],prefix[20];
    printf("\nenter a valid parenthesized infix expression:");
    scanf("%s",&infix);
    convert(infix,prefix);
    printf("\npostfix form is %s",prefix);
    return 0;
}

void convert(char infix[],char postfix[])
{
    struct stack s;
    s.tos=-1;
    int i,j;
    int k=0;
    int m;
    char ch;
    while(infix[i]!=')')
    {
       for(i=0;infix[i]!='\0';i++)
       {   
        ch=infix[i];
        if(ch=='(')
        {
            push(&s,ch);
            for(j=i+1;infix[j]!='\0';j++)
            {
             if(isoperand(infix[j])==0)
             {
              push(&s,infix[j]);
              break;
             } 
            } 
        }
        else
        {
          postfix[k]=ch;
          k++;
        }    
      }
    }


    for(i=0;infix[i]!='\0';i++)
    {
        ch=infix[i];
        if(ch==')')
        {
            for(m=0;s.arr[s.tos]!='(';m++)
            {

            }
        }
    }
}