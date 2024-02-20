#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>
struct poly
{
    int coeff;
    int exp;
    struct poly *next;
};

void append(struct poly **, int, int);
void show(struct poly *);
void add(struct poly *, struct poly *, struct poly **);

int main()
{
    struct poly *f, *s, *t;
    f = s = t = NULL;
    append(&f, 9, 2);
    append(&s, 3, 1);

    append(&f, 3, 5);
    append(&s, 10, 2);

    append(&f, 4, 6);
    append(&s, 4, 4);

    append(&f, 7, 9);
    append(&s, 2, 6);

    append(&s, 5, 8);
    add(f, s, &t);

    show(f);
    show(s);
    printf("\n\nnow addition done!\n\n");
    show(t);
    return 0;
}

void append(struct poly **ps, int x, int y)
{
    struct poly *p, *temp;
    p = (struct poly *)malloc(sizeof(struct poly));
    p->coeff = x;
    p->exp = y;
    p->next = NULL;

    if (*ps == NULL)
    {
        *ps = p;
        return;
    }

    temp = *ps;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = p;
}

void show(struct poly *p)
{
    if (p == NULL)
    {
        printf("list is empty!");
        return;
    }

    while (p != NULL)
    {
        printf("\ncoefficient is %d", p->coeff);
        printf("\nexponent is %d", p->exp);
        p = p->next;
    }
}

void add(struct poly *f, struct poly *s, struct poly **pt)
{
    struct poly *temp, *p, *q = NULL;
    if (f == NULL && s == NULL)
    {
        printf("addition not possible.");
        return;
    }

    while (f != NULL && s != NULL)
    {
        p = (struct poly *)malloc(sizeof(struct poly));
        p->next = NULL;
        if (*pt == NULL)
            *pt = p;
        else
            temp->next = p;
        temp = p;

        if (f->exp < s->exp)
        {
            temp->coeff = f->coeff;
            temp->exp = f->exp;
            f = f->next;
        }

        else if (s->exp < f->exp)
        {
            temp->coeff = s->coeff;
            temp->exp = s->exp;
            s = s->next;
        }

        else
        {
            temp->coeff = f->coeff + s->coeff;
            temp->exp = f->exp;
            f = f->next;
            s = s->next;
        }
    }

    if (f != NULL)
    {
        q = f;
    }
    else if (s != NULL)
    {
        q = s;
    }

    while (q != NULL)
    {
        p = (struct poly *)malloc(sizeof(struct poly));
        p->coeff = q->coeff;
        p->exp = q->exp;
        p->next = NULL;

        if (*pt == NULL)
            *pt = p;
        else
            temp->next = p;
        temp = p;
        q = q->next;
    }
}
