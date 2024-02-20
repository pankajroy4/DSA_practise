#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="",temp="";
    int n,i=1;
    cout<<"enter value of N:";
    cin>>n;
    cin.ignore();
    while(i<=n){
        cout<<endl<<"enter characters:";
        getline(cin,temp);
        str+=temp;
        i+=1;
    }
    cout<<str;
    return 0;
}