#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>
struct bst
{
    struct bst *left;
    int data;
    struct bst *right;
    int flag;
};

struct stack
{
    struct bst *arr[10];
    int tos;
};

void append(struct bst **, int);
void postorder(struct bst *);
void push(struct stack *, struct bst *);
struct bst *pop(struct stack *);

int main()
{
    struct bst *root = NULL;
    append(&root, 10);
    append(&root, 5);
    append(&root, 20);
    append(&root, 2);
    append(&root, 8);
    append(&root, 15);
    append(&root, 30);
    postorder(root);

    return 0;
}

void append(struct bst **pr, int x)
{
    struct bst *p, *temp, *prev;
    p = (struct bst *)malloc(sizeof(struct bst));
    if (p == NULL)
    {
        printf("insufficient mwmory");
        return;
    }

    p->data = x;
    p->left = p->right = NULL;
    if (*pr == NULL)
    {
        *pr = p;
        return;
    }

    temp = *pr;
    while (temp != NULL)
    {
        prev = temp;
        if (temp->data > x)
            temp = temp->left;
        else
            temp = temp->right;
    }

    if (prev->data > x)
        prev->left = p;
    else if (prev->data < x)
        prev->right = p;
}

void push(struct stack *p, struct bst *q)
{

    if (p->tos == 9)
    {
        printf(" stack overflow");
        return;
    }
    p->tos = p->tos + 1;
    p->arr[p->tos] = q;
}

struct bst *pop(struct stack *p)
{

    struct bst *temp;

    if (p->tos == -1)
    {

        printf("\nstack Underflow");

        return NULL;
    }

    temp = p->arr[p->tos];

    p->tos = p->tos - 1;

    return temp;
}

void postrder(struct bst *p)
{
    struct stack s;
    struct bst *temp;

    if (p == NULL)
    {
        printf(" tree is empty");
        return;
    }

    s.tos = -1;

    p->flag = 1;
    push(&s, p);

    if (s.tos != 9)
    {

        while (p->right != NULL)
        {

            temp = p->right;
            temp->flag = -1;
            push(&s, temp);

            if (p->left != NULL)
            {
                p = p->left;
                p->flag = 1;
                push(&s, p);
            }
        }
        p = p->left;
    }

    while (s.tos != -1)
    {
        p = pop(&s);
        if (p != NULL)
        {
            if (p->flag != -1)
            {
                printf("\n%d", p->data);
            }

            if(p->flag==-1)
              {
                  p->flag=1;
                  push(&s,p);
              } 
        }
    } 
}
