// // #include<stdio.h>
// // void Heap(int [],int ,int);
// // int main(){

// //     int arr[6];
// //     int i ,x;
// //     for(i=0;i<5;i++){
// //         printf("\nEnter element:");
// //         scanf("%d",&x);
// //         Heap(arr,x,i);
// //     }
// //     printf("\nHeap is :");
// //     for (i=1;i<=5;i++){
// //         printf("\n%d",arr[i]);
// //     }
// //     return 0;
// // }
// // void Heap(int arr[],int x,int i){
// //     int par,ptr;
// //     i++;
// //     ptr=i;
// //     while(ptr>1){
// //         par=ptr/2;
// //         if(arr[par]>=x){
// //              arr[ptr]=x;
// //              return;
// //         }
// //         arr[ptr]=arr[par];
// //         ptr=par;
// //     }
// //     arr[1]=x;
// // }





// #include <stdio.h>
// #include<stdlib.h>
// int main()
// {
//     char ch;
//     int i,x;
//     printf("\nenter data:");
//     scanf("%d",& x);
//     printf("data is %d",x);
//     printf("\nenter data:");
//     fflush(stdin);
//     scanf("%c",& ch);
//     printf("data is %c",ch);   


//     return 0;
// }

#include<stdio.h>
int GetSecondLargestNumber(int[]);
int main(){
    int arr[1,2,3,4];
    int ans;
    ans=GetSecondLargestNumber(arr);
    printf("%d",ans);
    return 0;
}
int GetSecondLargestNumber(int arr[])
{
    int max1=arr[0];
    int max2=0;
    for(int i=0;i<4;i++){
        if(arr[i]>max){
            max=arr[i]
        }
    }
    
    for(int i=0;i<4;i++){
        if(arr[i])
    }
}
