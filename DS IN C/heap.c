#include<stdio.h>
void Heap(int [],int ,int);
void printheap(int [],int );
void del_root(int [],int*);
int main(){

    int arr[10];   //array size for 5 elemnt in heap.
    int n=sizeof(arr)/sizeof(arr[1])-1;   //calulating array size lefting zeroth cell empty.
    int i ,x;
    for(i=0;i<9;i++){
        printf("\nEnter element:");
        scanf("%d",&x);
        Heap(arr,x,i);
    }
    printf("\nBefore deletion Heap is :");
    printheap(arr,n);

    del_root(arr,&n);
    printf("\nBefore deletion Heap is :");
    printheap(arr,n);
    return 0;
}
void Heap(int arr[],int x,int i){
    int par,ptr;
    i++;
    ptr=i;
    while(ptr>1){
        par=ptr/2;
        if(arr[par]>=x){
             arr[ptr]=x;
             return;
        }
        arr[ptr]=arr[par];
        ptr=par;
    }
    arr[1]=x;
}

void printheap(int arr[],int x){
    int i;
    for (i=1;i<=x;i++)
        printf("\n%d",arr[i]);
}

void del_root(int arr[],int *n){            //Argument 1: arry, Argumrnt 2:Array Size.
    // int lastelement=arr[*n-1];              //Getting last element of array.
    // arr[1]=lastelement;                     
    // *n=*n-1; 
    // int par,ptr,left,right;    
    // ptr=1; 
    // if(arr[ptr]>arr[left] && arr[ptr]>arr[right])      
    //     return;         
         
    // while(arr[ptr]< arr[left] || arr[ptr] < arr[right]){  
    //     par=ptr/2;
    //     left=ptr*2;
    //     right=ptr*2+1;                                                       
    //     if(arr[ptr]>arr[left])      
    //          return;                                    
        
    // }


    return;
}







