#include<iostream>
#include<string>
using namespace std;

class account{
    int accountid;
    float balance;
    public:
    void get(){
        cout<<"Enter accountid and balance:";
        cin>>accountid>>balance;
    }
    void show(){
        cout<<"Accound_ID is:"<<accountid<<" and Balance is:"<<balance<<endl;
    }
    void transfer(account &B,float amount){
        B.balance+=amount;
        this->balance-=amount;
    }
};
int main(){
    account A,B;
    A.get();
    B.get();
    cout<<"Before Transferring:"<<endl;
    A.show();
    B.show();
    float amount;
    cout<<"Enter amount to transfer from Fisrt person to Second Person:";
    cin>>amount;
    A.transfer(B,amount);
    cout<<"After Transferring:"<<endl;
    A.show();
    B.show();
}

