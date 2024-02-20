#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val){
        this->data=val;
        this->next=NULL;
    }
};

void insert(node * &start,int val){
    node * p=new node(val);
    if(start==NULL){
        start=p;
        return;
    }
    node * temp=start;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=p;
}

void display(node* start){
    if(start==NULL){
        cout<<"Linked List is empty."<<endl;
        return;
    }
    node *temp=start;
    while(temp!=NULL){
         cout<<temp->data<<"->";
         temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node * start=NULL;
    insert(start,1);
    insert(start,5);
    insert(start,10);
    display(start);
    return 0;
}