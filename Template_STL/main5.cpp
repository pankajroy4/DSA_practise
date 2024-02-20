#include<iostream>
#include<cstring>
#include<string>
using namespace std;

template <typename T>
T max(T x,T y){
    if(x>y)
       return x;
    return y;      
}

class String{
    char str[20];
    public:
    String(const char *p=""){   //default function argument
        strcpy(str,p);
    }

    void show(){
        cout<<str<<endl;
    }

    bool  operator >(const String &p){
        if(strcmp(str,p.str)>0){
            return true;
        }
        return false; 
    }
};

int main(){
    int a=10;
    int b=20;
    int c;
    c=::max(a,b);
    cout<<"Max is "<<c<<endl;
    String s1("Good Morning"),s2("Good Evening"),s3;
    s1.show();
    s2.show();
    s3=::max(s1,s2);   //-----> s3=s1.max(s2)  .....converted by compiler.
    cout<<"Greater is ";
    s3.show();
    return 0;

}