// #include<iostream>
// using namespace std;
// void print(int *p,int n){
//     for(int i=0;i<n;i++)
//         cout<<*(p+i)<<" ";
//     cout<<endl;    
// }

// bool compare(int x, int y){
//     return x>y;
// }
// int main(){
//     int arr[]={10,2,15,11,6};
//     int i,j,temp;
//     cout<<"Before sorting:"<<endl;
//     print(arr,sizeof(arr)/sizeof(int));
//     for(i=0;i<4;i++){
//         for(j=i+1;j<5;j++){
//             if(compare(arr[i],arr[j])==true)
//             {
//                  temp=arr[i];
//                  arr[i]=arr[j];
//                  arr[j]=temp;
//             }
//         }
//     }
//     cout<<"After sorting:"<<endl;
//     print(arr,sizeof(arr)/sizeof(int));
//     return 0;
// }

// // -------------------------------------------------------------------------------
// #include<iostream>
// #include<algorithm>
// using namespace std;
// void print(int *p,int n){
//     for(int i=0;i<n;i++)
//         cout<<*(p+i)<<" ";
//     cout<<endl;    
// }

// bool compare(int x, int y){
//     return x>y;
// }
// int main(){
//     int arr[]={10,2,15,11,6};
//     cout<<"Before sorting:"<<endl;
//     print(arr,sizeof(arr)/sizeof(int));
//     sort(arr,arr+5,compare);
//     cout<<"After sorting:"<<endl;
//     print(arr,sizeof(arr)/sizeof(int));
//     return 0;
// }

// // -----------------------------------------------------------------------------------

#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
void print(auto &p){
    for(auto start=p.begin();start!=p.end();start++)
        cout<<*(start)<<" ";
    cout<<endl;    
}

bool compare(int x, int y){
    return x>y;
}
int main(){
    array<int,5> arr={10,2,15,11,6};
    cout<<"Before sorting:"<<endl;
    print(arr);
    sort(arr.begin(),arr.end(),compare);
    cout<<"After sorting:"<<endl;
    print(arr);
    return 0;
}

