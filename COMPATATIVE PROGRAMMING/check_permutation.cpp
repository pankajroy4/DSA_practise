// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;

// bool check_permutation(const string &s1,const string &s2){
//     int v1[256]={0};
//     if(s1.length()!=s2.length()){
//         return false;
//     }
//     char ch;
//     for(int i=0;i<s1.length();i++){
//         ch=s1[i];
//         v1[ch]+=1;
//         ch=s2[i];
//         v1[ch]+=-1;

//     }
//     for (int i=0;i<256;i++){
//         if(v1[i]!=0){

//             return false;
//         }
//     }
//     return true;
// }
// int main(){

//     cout<<check_permutation("abc","acb")<<endl;
//     return 0;

// }
#include<string>
#include<iostream>
using namespace std;
int main(){
    string str="abc";
    cout<<str.substr(1,2)<<endl;
    cout<<str.substr(1,3)<<endl;
    return 0; 
}