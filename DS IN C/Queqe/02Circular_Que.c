#include <stdio.h>
struct CQue{
    int arr[10];
    int rear, front;
};

void insert(struct CQue *, int);
int del(struct CQue *);

int main(){
    struct CQue CQ;
    CQ.rear = -1;
    CQ.front = -1;
    int choice, input;
    do{
        printf("\nSelect an option:");
        printf("\n1.Insert: \n2.Delete: \n3.Quite:\n");
        scanf("%d", &choice);
        switch (choice){
        case 1:{
            printf("\nEnter element to insert:");
            scanf("%d", &input);
            insert(&CQ, input);
            break;
        }
        case 2:{
            int delt;
            delt = del(&CQ);
            if (delt != -1){
                printf("Deleted element is %d \n", delt);
            }

            break;
        }
        case 3:{
            printf("\nThank you!");
            break;
        }
        default:{
            printf("\nwrong choice.\nTry again!");
        }
        }
    }while (choice != 3);

    return 0;
}

void insert(struct CQue *p, int x){
    if ((p->front == 0 && p->rear == 9) || (p->front == p->rear + 1)){
        printf("\nQueue overflow.");
        return;
    }

    if(p->rear == 9)
        p->rear = 0;
    else
        p->rear++;
    p->arr[p->rear] = x;
    printf("Element %d inserted successfully.\n", x);
    if (p->front == -1)
        p->front = 0;
}

int del(struct CQue *p){
    int x;
    if (p->front == -1){
        printf("\nQueue underflow.");
        return -1;
    }
    x = p->arr[p->front];
    if (p->rear == p->front)
        p->rear = p->front = -1;
    else if (p->front == 9)
        p->front = 0;
    else
        p->front++;
    return x;
}