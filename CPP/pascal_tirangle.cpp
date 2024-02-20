#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of row:";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        arr[i][0]=1;
        arr[i][i]=1;
        for(int j=1;j<i;j++){
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int k=n-1;k>i;k--){
                cout<<"  ";
            }
        for(int j=0;j<=i;j++){
            cout<<arr[i][j]<<"  ";
            cout<<" ";
        }
        cout<<endl;
    }
}