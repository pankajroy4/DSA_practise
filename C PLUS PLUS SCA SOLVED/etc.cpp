// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str;
//     cout<<"Enter your full name without space with capital letter to start name and sir name: "<<endl;
//     getline(cin,str);
//     int index;
//     for(int i=1;i<str.length();i++){
//         if (str[i]>=65 && str[i]<=90){
//                index=i;
//                break;
//         }
//     }
//     cout<<str.substr(0,index)<<endl;
//     cout<<str.substr(index)<<endl;
//     cout<<str.substr(0,index)<<" "<<str.substr(index)<<endl;
//     return 0;

// }

// -------------------------------------------------------------------------

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    string str;
    char arr[50];
    cout<<"Enter a string:"<<endl;
    getline(cin,str);
    const char *p=str.c_str();  //to convert string obj into c style string.
    strcpy(arr,p);
    for(int i=0;i<str.length();i++){
        if(arr[i]>=97 && arr[i]<=122){
              arr[i]=toupper(arr[i]);
        }
        else if(arr[i]>=65 && arr[i]<=90){
            arr[i]=tolower(arr[i]);
        }
    }
    cout<<arr<<endl;
    return 0;
}