
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
struct stack{
    float arr[20];
    int tos;
};

void push(struct stack *, float);
float pop(struct stack *);
float solve(char[]);
int isoperand(char);
float calculate(float, float, char);

int main(){
    char postfix[20];
    float ans;
    printf("\nEnter valid postfix expression: ");  //( 26*3/1-8+ )
    scanf("%s", &postfix);
    printf("you entered: %s", postfix);
    ans = solve(postfix);
    printf("\nAnswer is %.2f ", ans);
    return 0;
}

void push(struct stack *p, float x){
    if (p->tos == 9){
        printf("\nStack overflow.");
        return;
    }
    p->arr[++p->tos] = x;
    printf("\nelement %.2f pushed successfully.", x);
}

float pop(struct stack *p){
    float popped;
    if (p->tos == -1){
        printf("\nstack underflow.");
        return -1;
    }

    popped = p->arr[p->tos--];
    printf("\nPopped element is %.2f ", popped);
    return popped;
}

int isoperand(char ch){
    return (ch >= 48 && ch <= 57);
}

float calculate(float op1, float op2, char ch){
    switch (ch){
    case '+':
        return (op1 + op2);
    case '-':
        return (op1 - op2);
    case '*':
        return (op1 * op2);
    case '/':
        return (op1 / op2);
    case '$':
        return (pow(op1, op2));
    case '%':
        return (fmod(op1, op2));
    default:
        return 0.0;
    }
}

float solve(char postfix[20]){
    int i;
    char ch;
    float res, op1, op2;
    struct stack s;
    s.tos = -1;
    for (i = 0; postfix[i] != '\0'; i++){
        ch = postfix[i];
        printf("\nfetched element is %c ", ch);
        if (isoperand(ch) == 1){
            push(&s, ch - '0');
        }
        else{
            op2 = pop(&s);
            op1 = pop(&s);
            res = calculate(op1, op2, ch);
            push(&s, res);
        }
    }
    res = pop(&s);
    return res;
}