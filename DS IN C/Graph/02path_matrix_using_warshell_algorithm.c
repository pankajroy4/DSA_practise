#include<stdio.h>
void warshell(int [][4],int[][4]);
int main(){
    int i ,j;
    int adj[4][4],path[4][4];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\nIs there direct path from V[%d] to V[%d]? (Yes-1, No-0): ",i+1,j+1);
            scanf("%d",&adj[i][j]);
        }
    }
    
    printf("\nThis is adjacency Matrix:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",adj[i][j]);
        }
        printf("\n");
    }
    warshell(adj,path);
    printf("\nThis is Path Matrix:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",path[i][j]);
        }
        printf("\n");
    }    
    return 0;
}

void warshell(int adj[4][4],int path[4][4]){
    int i,j,k;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            path[i][j]=adj[i][j];
        }
    }
    for(k=0;k<4;k++){
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                path[i][j]=( path[i][j] ||  (path[i][k] && path[k][j])  );
            }
        }
    }
}