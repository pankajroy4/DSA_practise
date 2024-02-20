#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<string,int> ArrayList;
    string input;
    for(int i=1;i<=5;i++){
        cout<<"Enter country name to add in ArrayList:";
        cin>>input;
        ArrayList.insert(make_pair(input,i));
    }
    cout<<endl<<"Enter Name of the Country to get it's Ranking:";
    cin>>input;
    auto found=ArrayList.find(input);
    if(found!=ArrayList.end())
        cout<<endl<<"Ranking is "<<found->second;
    else
       cout<<endl<<"Country Not found!";
    return 0;       
}