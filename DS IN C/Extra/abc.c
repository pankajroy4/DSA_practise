// #include<stdio.h>
// int fact(int);
// int main(){
//     int i;
//     printf("enter no:");
//     scanf("%d",&i);
//     printf("factorial is %d",fact(i));              
//     return 0;
// }
// int fact(int x){
//     if(x>0)
//       return x*fact(x-1);
//     else 
//         return 1;
// }

//  //***********************************************************************

// #include<stdio.h>
// void fibo(int);
// int main(){
//   int f;
//   printf("how many no from fibonacci series you want:");
//   scanf("%d",&f);
//   fibo(f);
//   return 0;
// }

// void fibo(int x){
//   int a,b,c,i;
//   if(x==1)
//     printf(" 0 ");
//   else if(x==2) 
//     printf("0,1 ");  
//   else{
//     a=0;
//     b=1; 
//     printf("0,1 ");  
//     for(i=1;i<x-1;i++){
//       c=a+b;
//       printf(",%d",c);
//       a=b;
//       b=c;
//     }
//   }
// }

// //*********************************************************************

// #include<stdio.h>
// void fibo(int,int[]);
// int main(){
//   int f,i;
//   int arr[f];
//   printf("how many no from fibonacci series you want:");
//   scanf("%d",&f);
//   fibo(f,arr);
//   for(i=0;i<f;i++)
//      printf("%d,",arr[i]);
//   printf("\b ");   
//   return 0;
// }

// void fibo(int x,int arr[]){
//   int i;
//   if(x<=1){
//     arr[0]=0;
//     arr[1]=1;
//     return;
//   }
//   arr[0]=0;
//   arr[1]=1;
//   for(i=2;i<x;i++)
//       arr[i]=arr[i-1]+arr[i-2];
// }
// //**********************************************************************

// #include<stdio.h>
// int Bsearch(int [],int ,int);
// int main(){
//   int n,x,ans,i;
//   printf("\nHow many element you want to store in array: ");
//   scanf("%d",&n);
  
//   int arr[n];
//   printf("\nEnter  elements ,you can use spce to separate element:");
//   for(i=0;i<n;i++)
//     scanf("%d",&arr[i]);  
  
//   printf("\nEnter element to search in array:");
//   scanf("%d",&x);
//   ans=Bsearch(arr,n,x);  
//   if(ans!=-1)
//     printf("\nelemet is present at %d index.",ans);
//   else
//      printf("\nElement not found");
//   return 0;   
// }
//           //  ****** BINARY SEARCH ******

// int Bsearch(int arr[],int n,int x){
//   int low,mid,high;
//   low=0;
//   high=n-1;
//   while(low<=high){
//     mid=(low+high)/2;
//     if(x==arr[mid])
//       return mid;
//     if(x>arr[mid])
//       low=mid+1;
//     else
//        high=mid-1;  
//   }
//   return -1;
// }


//           //  ******* NORMAL SEARCH ******
// int Bsearch(int arr[],int n,int x){
//   int i,j;
//   for(i=0;i<n;i++){
//     if(arr[i]==x){
//       return i;
//     }
//   }
//   return -1;
// }

// //************************************************************************

// #include<stdio.h>
// void heap(int [],int,int);
// int main(){
//   int i,x;
//   int arr[6];
//   for(i=1;i<6;i++){
//     printf("\nEnter node:");
//     scanf("%d",&x);
//     heap(arr,x,i);
//   }
//   printf("\nHeap is:\n");
//   for(i=1;i<6;i++){
//     printf("\n%d ",arr[i]);
//   }
//   return 0;
// }
// void heap(int arr[],int x,int i){
//   int par;
//   int child;
//   child=i;
//   while(child>1){
//     par=child/2;
//     if(arr[par]>=x){
//       arr[child]=x;
//       return;
//     }
//     arr[child]=arr[par];
//     child=par;

//   }
//   arr[1]=x;

// }
// //***************************************************************

// #include<stdio.h>
// int main(){
//   int arr[11]={9,3,5,1,7,6,4,5,2,4,8};
//   int i,j,temp;
//   printf("\nBefore sorting Array is:\n");
//   for(i=0;i<11;i++)
//     printf("%d ",arr[i]);
  
//   for(i=0;i<11;i++){
//     for(j=i+1;j<11;j++){
//       if(arr[j]<arr[i]){
//         temp=arr[j];
//         arr[j]=arr[i];
//         arr[i]=temp;
//       }
//     }
//   }
//   printf("\nAfter sorting array is:\n");

//   for(i=0;i<11;i++)
//     printf("%d ",arr[i]);
//   return 0;

// }

// //****************************************************************

// #include<stdio.h>
// void bubble(int [],int);
// int main(){
//   int arr[11]={9,3,5,1,7,6,4,5,2,4,8};
//   printf("\nBefore sorting array is :\n");
//   for(int i=0;i<11;i++){
//     printf("%d ",arr[i]);
//   }
//   bubble(arr,11);
//   printf("\nAfter shorting array is :\n");
//   for(int i=0;i<11;i++){
//     printf("%d ",arr[i]);
//   }  
//   return 0;
// }

// void bubble(int arr[],int n){
//   int i,j,temp;
//   for(i=0;i<n-1;i++){
//     for(j=0;j<n-1-i;j++){
//       if(arr[j]>arr[j+1]){
//         temp=arr[j+1];
//         arr[j+1]=arr[j];
//         arr[j]=temp;
//       }
//     }
//   }
// }

// //********************************************************************

// #include<stdio.h>
// void selection(int [],int);
// int main(){
//   int arr[11]={9,3,5,1,7,6,4,5,2,4,8};
//   printf("\nBefore sorting array is :\n");
//   for(int i=0;i<11;i++){
//     printf("%d ",arr[i]);
//   }
//   selection(arr,11);
//   printf("\nAfter shorting array is :\n");
//   for(int i=0;i<11;i++){
//     printf("%d ",arr[i]);
//   }  
//   return 0;
// }
// void selection(int arr[],int n){
//   int i,j,min,temp;
//   for(i=0;i<n-1;i++){
//     min=i;
//     for(j=i+1;j<n;j++){
//       if(arr[j]<arr[min]){
//         min=j;
//       }
//     }
//     temp=arr[min];
//     arr[min]=arr[i];
//     arr[i]=temp;
//   }
// }
// //***************************************************************
// #include<stdio.h>
// void insertion(int[],int);
// int main(){
//     int arr[9]={99,12,45,33,78,54,66,20,15};
//     printf("\nBefore sorting array is :\n");
//     for(int i=0;i<9;i++)
//         printf("%d ",arr[i]);
//     insertion(arr,9);
//     printf("\nAfter sorting array is :\n");
//     for(int i=0;i<9;i++)
//         printf("%d ",arr[i]);
//     return 0;
// }

// void insertion(int arr[],int n){
//     int i,j,temp;
//     for(i=0;i<n-1;i++){
//         for(j=i+1;j>0;j--){
//             if(arr[j]<arr[j-1]){
//                 temp=arr[j];
//                 arr[j]=arr[j-1];
//                 arr[j-1]=temp;
//             }
//             else
//                 break;
//         }
//     }
// }

// //***************************************************************

// #include<stdio.h>
// void merge_sort(int [],int ,int);
// void merge(int [],int,int);

// int main(){
//     int arr[10]={20,44,56,33,11,67,89,45,34,32};
//     int i;
//     printf("\nBefore sorting Array is:\n");
//     for(i=0;i<10;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\nAfter  sorting Array is:\n");
//     merge_sort(arr,0,9);
//     for(i=0;i<10;i++){
//         printf("%d ",arr[i]);
//     }
// }
// void merge_sort(int arr[],int first,int last){
//     int mid;
//     if(first<last){
//         mid=(first+last)/2;
//         merge_sort(arr,first,mid);
//         merge_sort(arr,mid+1,last);
//         merge(arr,first,last);
//     }
// }

// void merge(int arr[],int first,int last){
//     int i,i1,i2,i3,mid;
//     int temp[20];
//     mid=(first+last)/2;
//     i1=0;
//     i2=first;
//     i3=mid+1;
//     while(i2<=mid && i3<=last){
//         if(arr[i2]<arr[i3]){
//              temp[i1]=arr[i2];
//              i2=i2+1;
//         } 
//         else{
//             temp[i1]=arr[i3];
//             i3=i3+1;
//         }
//         i1=i1+1;    
//     }


//     if(i2<=mid){
//         while(i2<=mid){
//             temp[i1]=arr[i2];
//             i2++;
//             i1++;
//         }
//     }
//     else{
//         while(i3<=last){
//             temp[i1]=arr[i3];
//             i1++;
//             i3++;
//         }
//     }
//    i=0;
//    while(i<i1){
//        arr[first+i]=temp[i];
//        i=i+1;
//    }

// }

// //***************************************************************
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s[]="RAm is a boy";
//     char *p;
//     p=strtok(s," ");
//     while(p!=NULL){
//         printf("\n%s",p);
//         p=strtok(NULL," ");
//     }
//     return 0;
// }
// ********************************************************************