#include<stdio.h>
int main(){
    int i ,j;
    int adj[4][4];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\nIs there direct path from V[%d] to V[%d]? (Yes-1, No-0): ",i+1,j+1);
            scanf("%d",&adj[i][j]);
        }
    }
    printf("\nThis is Adjacency Matrix:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",adj[i][j]);
        }
        printf("\n");
    }
    return 0;
}