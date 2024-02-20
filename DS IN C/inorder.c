#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>
struct bst
{
    struct bst *left;
    int data;
    struct bst *right;
};

struct stack
{
    struct bst *arr[10];
    int tos;
};

void append(struct bst **, int);
void inorder(struct bst *);
void inorder(struct bst *);
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
    inorder(root);

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


void inorder(struct bst *p)
{
    struct stack s;

    if (p == NULL)
    {
        printf(" tree is empty");
        return;
    }

    s.tos = -1;

    push_nodes:

               while (p!=NULL)
                 {
                    push(&s,p);
                    p=p->left;
                 }   

               p=pop(&s);
               while(p!=NULL)
                  {
                     
                     printf("\n%d",p->data);
                     if(p->right!=NULL)
                        {
                            p=p->right;
                            goto push_nodes;                     

                        }

                     p=pop(&s);
                  }
}                    


