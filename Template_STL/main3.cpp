// Q.Convert one dimensional Array into 3*2 matrix.?

#include<iostream>
using namespace std;
int main(){
    int arr[3][2]; 
    int arr2[6]={51,16,32,63,48,71};
    int y=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            arr[i][j]=arr2[y];
            y+=1;
        }      
    }
    cout<<endl<<"1-D Array is:"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl<<"Converted 2-D matrix is:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
