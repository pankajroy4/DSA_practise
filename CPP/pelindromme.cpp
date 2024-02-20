#include<bits/stdc++.h>
using namespace std;
bool is_pelindrome(string s){
    int l=s.size();
    for(int i=0,j=l-1;i<l/2;i++,j--){
        if(s[i]!=s[j]){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    cout<<is_pelindrome(s)<<endl;
    return 0;
}