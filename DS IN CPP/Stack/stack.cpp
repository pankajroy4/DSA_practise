#include<iostream>
using namespace std;
class stack{
    int arr[5];
    int tos;
    public:
    stack(){
        tos=-1;
    }
    void push(int x){
        if(tos==4){
          cout<<"Stack Overflow."<<endl;
          return;
        }
        arr[++tos]=x;
        cout<<"Element "<<x<<" pushed successfully."<<endl;

    }
    int pop(){
        if(tos==-1){
           cout<<"Stack underflow."<<endl;
           return -1;
        }
        return arr[tos--];

    }
};

int main(){
    stack s;
    int choice;
    do{
        cout<<"Please select an option:"<<endl<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            int n;
            cout<<"Please enter element to push: ";
            cin>>n;
            cout<<endl;
            s.push(n);
            break;

            case 2:
            int ans;
            ans=s.pop();
            if(ans!=-1)
            cout<<"Popped element is "<<ans<<endl;
            break;

            case 3:
            cout<<"Thank You!"<<endl;
            break;

            default:
            cout<<"Wrong choice ! Please try Again."<<endl;
        
        }
    }while(choice !=3);
    return 0;

}