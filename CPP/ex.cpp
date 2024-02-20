// #include<algorithm>
// #include<iostream>
// using namespace std;
// void binarySearch(int *p,int x){
//     int low=0,hi=9;
//     while((hi-low)>1){
//         int mid=(low+hi)/2;
//         if(p[mid]>x)
//             hi=mid-1;
//         else
//             low=mid;
//     }
//     if(p[low]==x)
//         cout<<"find at "<<low+1<<" position\n";
//     else if(p[hi]==x)
//         cout<<"find at "<<hi+1<<" position\n";
//     else
//         cout<<"Not found\n";
// }
// int main(){
//     int arr[10]={12,10,15,9,3,8,14,5,18,14};
//     sort(arr,arr+10);
//     for(int i=0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Enter no to find:";
//     int f;
//     cin>>f;
//     binarySearch(arr,f);
//     return 0;
// }

// Create a function to print Binary of a given Number.
#include<iostream>
using namespace std;
void printBinary(int x){
    for(int i=10;i>=0;i--){
        cout<<(1 & (x>>i));
    }
}
int main(){
    int x;
    cout<<"Enter numbber to print it's Binary:";
    cin>>x;
    printBinary(x);
    return 0;

}