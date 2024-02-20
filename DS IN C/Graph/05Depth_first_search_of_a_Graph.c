#include<stdio.h>
struct stack{
    int arr[10];
    int tos;
};
void dfs(int [][4],int );
void push(struct stack *,int);
int pop(struct stack *);
int main(){
    int i,j,v,count=0;
    int adj[4][4];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\nis there a direct patch from V[%d] to v[%d]? (Yes-1/No-0): ",i+1,j+1);
            scanf("%d",&adj[i][j]);
        }
    }
    for(j=0;j<4;j++){
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
    dfs(adj,v);
    return 0;
}

void push(struct stack *p,int x){
   if(p->tos==9){
       printf("\nstack overflow.");
       return;
   }
   p->arr[++p->tos]=x;

}
int pop(struct stack *p){
    if(p->tos==-1){
        printf("\nstack underflow.");
        return -1;
    }
    return p->arr[p->tos--];
}



void dfs(int adj[][4],int v){
    int flag[4]={0};   
    struct stack s;
    int i;
    s.tos=-1;
    push(&s,v);
    while(s.tos!=-1){
        v=pop(&s);
        if(flag[v]==0){
            printf("\nV[%d]",v);
            flag[v]=1;
        }    
        for(i=3;i>=0;i--){
            if(adj[v][i]==1 &&flag[i]==0)
                push(&s,i);
        }
    }
}

