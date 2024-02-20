#include <stdio.h>
struct Que{
    int arr[10];
    int rear, front;
};

void insert(struct Que *, int);
int del(struct Que *);
int main(){
    struct Que Q;
    Q.rear = -1;
    Q.front = 0;
    int choice, input;
    do{
        printf("\nSelect an option:");
        printf("\n1.Insert: \n2.Delete: \n3.Quite:\n");
        scanf("%d", &choice);
        switch (choice){
        case 1:{
            printf("\nEnter element to insert:");
            scanf("%d", &input);
            insert(&Q, input);
            break;
        }
        case 2:{
            int delt;
            delt = del(&Q);
            if (delt != -1){
                printf("Deleted element is %d\n", delt);
            }
            break;
        }
        case 3:{
            printf("\nThank you!");
            return 0;
        }
        default:{
            printf("\nwrong choice.\nTry again!");
        }
        }
    }while (choice != 3);

    return 0;
}

void insert(struct Que *p, int x){
    if (p->rear == 9){
        printf("\nQue overflow.");
        return;
    }
    p->arr[++p->rear] = x;
    printf("Element %d inserted succesfully.\n", x);
}

int del(struct Que *p){
    if (p->front > p->rear){
        printf("Que underflow.");
        return -1;
    }
    return p->arr[p->front++];
}