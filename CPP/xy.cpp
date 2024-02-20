#include <iostream>
#include <vector>
#include <utility>
#include <bits/stdc++.h>
using namespace std;
int main(){ 
    set<pair <char,int> > v;
    string s="naman";
    for (char ch:s){
          
          v.insert(make_pair(ch,count(s.begin(),s.end(),ch)));
    }
    for(auto s:v){
        cout<<s.first<<" : "<<s.second<<endl;
    }
    return 0;
}

