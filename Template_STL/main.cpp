#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={5,6,2,3,4,1,7,8,9}; 
    int row_max=0,column_max=0,row=0,column=0,all=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            all+=arr[i][j];
            row+=arr[i][j];
            column+=arr[j][i];
        }
        if(row>row_max)
            row_max=row;
        if(column>column_max)
            column_max=column; 
        row=column=0;        
    }
    cout<<"Sum of all Matrix is "<<all<<endl;
    cout<<"Maxium sum in all row is "<<row_max<<endl;
    cout<<"Maximum sum in column is "<<column_max<<endl;
    return 0;
}
