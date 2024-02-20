#include<iostream>
#include<array>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    array<int,7> arr{10,2,5,16,7,3,9};
    array<int,7> ::iterator it;


    for(it=arr.begin();it!=arr.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto x:arr){
        cout<<x<<" ";
    }

    sort(arr.begin(),arr.end());
    cout<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
    int sum=0;
    sum=accumulate(arr.begin(),arr.end(),0);
    cout<<endl<<"Sum of all element of Array is "<<sum<<endl;;
    return 0;
}