#include<iostream>

using namespace std;
void increment(int &p){
    p++;
}
int main(){
    int x;
    cout<<"Enter a number:";
    cin>>x;
    cout<<endl<<"Before increment ,Value is "<<x<<endl;
    increment(x);
    cout<<"After increment ,Value is "<<x<<endl;
    return 0;
}


// ----------------------------IN JAVA----------------------------------------
// package My.com;
// public class MyArray{
//    public static void main(String[] args) {
//        Integer x=10;
//        System.out.println("Before increment:"+x);
//        increment(x);
//        System.out.println("After increment:"+x);
//    }
//    public static void increment(Integer y){
//            y+=1;  //Pass by reference not supported in java.
//    }
// }