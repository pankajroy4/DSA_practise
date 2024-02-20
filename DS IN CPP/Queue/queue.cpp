#include<iostream>
using namespace std;

class queue{
    int front,rear;
    int arr[5];
    public:
    queue(){
        front=0;
        rear=-1;
    }
    void enqueue(int x){
        if(rear==4){
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[++rear]=x;
        cout<<"Element "<<x<<" inserted successfully."<<endl;
    }

    int dequeue(){
        if(rear<front){
            cout<<"Queue is empty."<<endl;
            return -1;
        }
        return arr[front++];
    }
};

int main(){
    queue q;
    int choice, input;
    do{
        cout<<"Select an option:"<<endl;
        cout<<"1.Enqueue:"<<endl<<"2.Dequeue:"<<endl<<"3.Exit:"<<endl;
        cin>>choice;
        switch (choice){
        case 1:
            cout<<"Enter element to insert: ";
            cin>>input;
            q.enqueue(input);
            break;
        case 2:
            input=q.dequeue();
            if (input!= -1)
                cout<<"Deleted element is "<<input<<endl;
            break;
        case 3:
            cout<<"Thank you!"<<endl;
            break;
        default:
            cout<<"wrong choice.Try again!"<<endl;
        }
    }while (choice != 3);
return 0;
}