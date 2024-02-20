
#include <iostream>
using namespace std;
class A{
    public :
    A(){
        cout<<"Non parametrized constructor of A called."<<endl;
    }
    A(string message):A(){                //constructor chaining
        cout<<"Message is "<<message<<endl;
    }
    A(int x,string message):A(message){      //constructor chaining
        cout<<"Parametrized constructor. of A called "<<x<<endl;
    }
};
class B :public A{
    public:
    B(int x,string message):A(x,message){  //constructor chaining
        cout<<"constructor of B called."<<endl;
    }
};
int main(){
    B obj(10,"Learning c++");
    return 0;
}
//In inheritance, first parent's constructor is called and then child's. But
//if the parent class constructor is non parametrized then only compiler exetue the const. of parent.
// if parent's class constructor is parametrized then we explicitly have to call it  at the child class constructor( constructor chaining )
// if there is both (parametrized & non parametrized ) constructor is present in parent class, then we have to constructor chaining(at parent class constructor also )






