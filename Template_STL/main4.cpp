
// ## Overloading the operator '<<' and '>>' as a friend function.

#include<iostream>
using namespace std;
class demo
{
    string name;
    public:
    friend ostream &  operator << (ostream &out,demo &p){
        out<<p.name;
        return out;
    }
    friend istream & operator >>(istream &in,demo &p){
        in>>p.name;
        return in;
    }
};

int main(){
    demo d1;
    cout<<"Enter a String: ";
    cin>>d1;
    cout<<d1;
    return 0;
}

