// Q.Convert a 3*2 matrix in one dimensional Array?

#include<iostream>
using namespace std;
int main(){
    int arr[3][2]={5,6,2,3,4,1}; 
    int arr2[6];
    int x=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            arr2[x]=arr[i][j];
            x+=1;
        }       
    }
   cout<<endl<<"2-D matrix is:"<<endl;
   for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
   }
   cout<<"converted 1-D Array is:"<<endl;
   for(int i=0;i<6;i++){
        cout<<arr2[i]<<" ";
   }
   return 0;

}
