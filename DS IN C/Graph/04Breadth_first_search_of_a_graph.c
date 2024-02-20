#include<stdio.h>
struct queue{
    int arr[10];
    int front,rear;
};
void bfs(int [][4],int );
void enqueue(struct queue*,int);
int dequeue(struct queue *);
int main(){
    int i,j,v,count=0;
    int adj[4][4];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\nis there a direct patch from V[%d] to v[%d]? (Yes-1/No-0): ",i+1,j+1);
            scanf("%d",&adj[i][j]);
        }
    }
    for(j=0;j<4;j++){     //finding source vertex.
        for(i=0;i<4;i++){
            if(adj[i][j]==0)
                count++;
        }
        if(count ==4){
            v=j;
            break;
        }
        count=0;
    }
    bfs(adj,v);
    return 0;
}


void enqueue(struct queue *p,int v){
    if(p->rear==9){
        printf("\nQueue is full");
        return;
    }
    p->arr[++p->rear]=v;
}
int dequeue(struct queue *p){
    if(p->front>p->rear)
        return -1;
    return p->arr[p->front++];
}

void bfs(int adj[][4],int v){
    struct queue Q;
    int flag[4]={0};
    Q.front=0;
    Q.rear=-1;
    int i;
    enqueue(&Q,v);
    while(v!=-1){
        v=dequeue(&Q);
        if(flag[v]==0 && v!=-1){
            printf("\nV[%d]",v);
            flag[v]=1;
        }
        for(i=3;i>=0;i--){
            if(adj[v][i]==1 && flag[i]==0){
                enqueue(&Q,i);
            }
        }
    }
}

