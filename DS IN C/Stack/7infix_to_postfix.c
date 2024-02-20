#include<stdio.h>
#include<math.h>
#include<string.h>
struct stack{
    char arr[10];
    int tos;
};

void push(struct stack *,char);
char pop(struct stack *);
int isempty(struct stack);
int isoperand(char);
int precedence(char,char);

void convert(char [],char[]);


int main(){
    char infix[20],postfix[20];
    printf("\nenter a valid infix expression:");
    scanf("%s",&infix);
    convert(infix,postfix);
    printf("\npostfix form is %s",postfix);
    return 0;
}


void push(struct stack *p,char ch){
    if(p->tos==9){
        printf("\nstack overflow.");
        return;
    }
    p->arr[++p->tos]=ch;
}

char pop(struct stack *p){
    if(p->tos==-1){
        printf("\nStack underflow");
        return -1;
    }
    return p->arr[p->tos--];
}

int isempty(struct stack s){
    if(s.tos==-1){
        return 1;
    }
    else 
    return 0;
}

int isoperand(char ch){
    return ( (ch>='0' && ch<='9')|| (ch>='a' && ch<= 'z') || (ch>='A' && ch<='Z'));
}

int precedence(char outside,char stacktop){
    if(stacktop=='$')
     return 0;
    else if(outside=='$') 
    return 1;
    else if(stacktop=='*' ||stacktop=='/' ||stacktop=='%' )
     return 0;
    else if(outside=='*' ||outside=='/' ||outside=='%') 
    return 1;
    else if(stacktop=='+' || stacktop=='-')
     return 0;
    else 
    return 1; 
}



void convert(char infix[],char postfix[]){
    int i,j=0,ans,empt,pre;
    char ch;
    struct stack s;
    s.tos=-1;
    for(i=0;infix[i]!='\0';i++){
        ch=infix[i];
        
        if(isoperand(ch)==1){
            postfix[j]=ch;
            j++;
        }
        else{
            while(isempty(s)==0){
                if(precedence(ch,s.arr[s.tos])==0){
                    postfix[j]=pop(&s);
                    j++;
                }
                else
                break;
            }
            push(&s,ch);
        }
    }
    while(isempty(s)==0){
        postfix[j]=pop(&s);
        j++;
    }
    postfix[j]='\0';
}