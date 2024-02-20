#include<iostream>
#include<array>
using namespace std;

// int main(){
//     array<int,5> arr;
    
//     for(int i=0;i<arr.size();i++){
//         cout<<"Enter element "<<i+1<<":";
//         // cin>>arr[i]; or
//         cin>>arr.at(i);
//     }

//     cout<<"Values are :"<<endl;
//     for(int i:arr){
//         cout<<i<<endl;;
//     }
//     return 0;
// }

void print_array( array<int,5> &brr){
    cout<<"Values are:"<<endl;
    for(int i=0;i<brr.size();i++){
        brr[i]++;
        cout<<brr[i]<<endl;
    }
}
int main(){
    array<int,5>arr;
    for(int i=0;i<arr.size();i++){
        cout<<"Enter element "<<i+1<<":";
        cin>>arr[i]; 
    }    
    print_array(arr);
    return 0;

}