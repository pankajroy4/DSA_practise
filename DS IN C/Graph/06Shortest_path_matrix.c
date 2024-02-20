#include<stdio.h>
void shortestpath(int [][4],int [][4]);
int main(){
    int i,j;
    int weight[4][4],sp[4][4];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\nis there a direct path from V[%d] to V[%d]? (Yes-Weight, No-0):",i+1,j+1);
            scanf("%d",&weight[i][j]);
        }
    }
    printf("\nWeighted matrix is:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d  ",weight[i][j]);
        }
        printf("\n");
    }  

    shortestpath(weight,sp);
    printf("\nShortest path matrix is:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d  ",sp[i][j]);
        }
        printf("\n");
    }   
    return 0; 
}

void shortestpath(int weight[][4],int sp[][4]){
    int i,j,k;
    int I=100000;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            (weight[i][j]==0)?(sp[i][j]=I):(sp[i][j]=weight[i][j]);
        }
    }  
     
    for(k=0;k<4;k++){ 
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(sp[i][k]+sp[k][j]<sp[i][j])
                       sp[i][j]=sp[i][k]+sp[k][j];
            }
        }  
    }

}