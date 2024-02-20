#include <stdio.h>
#include <math.h>
#include <string.h>
struct stack
{
  float arr[20];
  int tos;
};

void push(struct stack *, float);
float pop(struct stack *);
int isoperand(char);
float calculate(float, float, char);
float solve(char[]);
int main()
{

  char prefix[20];
  float ans;
  printf("enter a valid prefix expression:");
  scanf("%s", prefix);
  printf("you entered %s\n", prefix);
  ans = solve(prefix);
  printf("result of prefix expression is %f\n", ans);
  return 0;
}

void push(struct stack *p, float x)
{

  if (p->tos == 19)
  {
    printf("stack overflow\n");
    return;
  }
  p->arr[++p->tos] = x;
  printf("element %f pushed successfully\n", x);
}

float pop(struct stack *p)
{
  float popped;
  if (p->tos == -1)
  {
    printf("stack underflow\n");
    return -1;
  }

  popped = p->arr[p->tos--];
  printf("popped element is %f\n", popped);
  return popped;
}
int isoperand(char ch)
{
  return (ch >= 48 && ch <= 57);
}

float calculate(float op1, float op2, char ch)
{

  switch (ch)
  {

  case '+':
    return op1 + op2;

  case '-':
    return op1 - op2;

  case '*':
    return op1 * op2;

  case '$':
    return (pow(op1, op2));

  case '%':
    return (fmod(op1, op2));
  case '/':
    return op1 / op2;

  default:
    return 0.0;
  }
}

float solve(char prefix[20])
{

  struct stack s;
  int i;
  char ch;
  float op1, op2, res;
  s.tos = -1;

  for (i = strlen(prefix) - 1; i >= 0; i--)
  {

    ch = prefix[i];
    printf("fetched element is %c\n", ch);
    if (isoperand(ch) == 1)
    {

      push(&s, ch - '0');
    }

    else
    {

      op1 = pop(&s);

      op2 = pop(&s);
      res = calculate(op1, op2, ch);
      push(&s, res);
    }
  }
  res = pop(&s);
  return res;
}
