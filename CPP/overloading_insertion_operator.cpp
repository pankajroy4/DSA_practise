#include<iostream>
#include<string>
using namespace std;
class Details{
    int age;
    string name;
    public:
    Details(int age,string name){
        this->age=age;
        this->name=name;
    }
    friend ostream& operator<<(ostream &out,Details s){
        out<<s.age<<endl;
        out<<s.name;
        return out;
    }
};


int main(){
    Details *s=new Details(21,"Pankaj");
    cout<<*s;
    return 0;
}

