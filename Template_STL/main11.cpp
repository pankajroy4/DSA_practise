#include<iostream>
using namespace std;
int main(){  
    int arr[]={12,10,5,4,12,19};
    int num=0;
    int i=0,t=sizeof(arr)/sizeof(int);
    for(i;i<t-1;i++){
        int swap=0;
        for(int j=i+1;j<t;j++){
            if(arr[j]%2==0){
                int x=arr[i];
                arr[i]=arr[j];
                arr[j]=x;
                swap=1;
            }
        }
        if(swap==0)
            break;
    }
    cout<<"Data are:"<<endl;
    for (int i=0;i<t;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}








