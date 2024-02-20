#include<iostream>
class operator_overloading{
    int val;
    public:
    operator_overloading(int val=0){  //default argument
        this->val=val;
    }
    operator_overloading operator+(operator_overloading &b){
        operator_overloading temp;
        temp.val=this->val+b.val;
        return temp;
    }
    void show(){
        std::cout<<"Value is "<<val<<std::endl;
    }
};
int main(){
    operator_overloading A(10);
    operator_overloading B(20);
    operator_overloading C;
    A.show();
    B.show();
    C=A+B;
    C.show();
}