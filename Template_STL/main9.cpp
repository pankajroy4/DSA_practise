// #include<iostream>
// #include<list>
// #include<string>
// using namespace std;
// void display(const auto &p){
//     for(auto i:p){
//         cout<<i<<"  ";
//     }
// }
// bool mycomp(const double &x,const double &y){
//     return ((int)x==(int)y);
// }
// int main(){
//     list<double> mylist{2.6,1.8,11.4,12.7,1.9,2.7,12.7,11.4,11.9};
//     cout<<"Before removing duplicate:"<<endl;
//     mylist.sort();
//     display(mylist);
//     cout<<endl<<"After removing duplicate:"<<endl;
//     mylist.unique(mycomp);
//     display(mylist);
//     return 0;
// }

// -----------------------------------------------------------------------
// #include<iostream>
// #include<string>
// #include<deque>
// using namespace std;
// bool is_pelindrome(auto &p ){
//     while(p.empty()==0){
//         if(p.pop_front()==p.pop_back()){
//             continue;
//         }
//         return false;
//     }
// }
// int main(){
//     deque<string> d;
//     string s;
//     cout<<"Enter a string:";
//     cin>>s;
//     d.push_back(s);
//     if(is_pelindrome(d)==true)
//         cout<<endl<<"Given string is a pelindrome.";
//     else
//         cout<<endl<<"Not a pelindrome.";
//     return 0;
// }
// -------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int ans;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!=i+1)
//         {
//            cout<<"overridden number is "<<i+1;
//            break;
//         }
//     }
// }
// -----------------------------------------------------------------------------------
// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     set<int>s={12,2,33,45,3,9};
//     for(auto i:s){
//         cout<<i<<" ";
//     }
//     cout<<endl<<"After inserting:"<<endl;
//     auto p=s.insert(7);
//     for(auto i:s){
//         cout<<i<<" ";
//     }
//     cout<<endl<<"7 inserted? "<<p.second;
//  return 0;
// }
// ------------------------------------------------------------------------------------------
// #include<iostream>
// #include<string>
// #include<map>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string input;
//     map<char,int>m1;
//     cout<<"Enter a String:";
//     cin>>input;
//     string p="";
//     for(auto x:input){
//         // m1[x]=count(input.begin(),input.end(),x);
//         m1.insert({x,count(input.begin(),input.end(),x)});
//     }
//     for(auto x:m1){
//         cout<<x.first<<" : "<<x.second<<endl;
//     }
// }

// ---------------------------------------------------------------------------
// #include <iostream>
// #include <map>
// #include <string>
// using namespace std;
// int main()
// {
//     map<char, int> counter;
//     string data;
//     cout << "Type a string:";
//     getline(cin, data);
//     for (char ch : data)
//     {
//         counter[ch] = counter[ch] + 1;
//     }
//     cout << "Following is the frequency count:" << endl;
//     for (auto p : counter)
//     {
//         cout << p.first << "\t" << p.second << endl;
//     }
//     return 0;
// }
// ------------------------------------------------------------------
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// class Matrix{
    
// };


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     // int t;
//     // cin>>t;
//     int n,m,num;
//     cout<<"Enter n and m :";
//     cin>>n>>m;    
//     vector<vector<int>> v;
//     for(int i=0;i<n;i++){
//         vector<int>temp;
//         for(int j=0;j<n*m;j++){
//             cout<<endl<<"Enter num:";
//             cin>>num;
//             temp.push_back(num);
//         }
//         v.push_back(temp);
//         temp.clear();
//     }
    
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[i].size();j++){
            
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str;
//     string temp="";
//     cout<<"Enter a string:";
//     getline(cin,str);
//     for(char ch:str){
//         if(find(temp.begin(),temp.end(),ch)==temp.end()){
//             int x=count(str.begin(),str.end(),ch);
//             temp+=ch;
//             cout<<ch<<" : "<<x<<endl;
//         }
//     }
//     return 0;
// }



// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str;
//     string temp="";
//     cout<<"Enter a string:";
//     getline(cin,str);
//     for(auto ch:str){
//         if(temp.find(ch)==string::npos){
//             int x=count(str.begin(),str.end(),ch);
//             temp+=ch;
//             cout<<ch<<" : "<<x<<endl;
//         }
//     }
//     return 0;
// }
// -----------------------------------------------------------------------------
// #include<iostream>
// #include<array>
// using  namespace std;
// struct emp{
//     int age;
//     char name[20];
//     float sal;
// };
// void print(array<emp,3> mystaff){       //void print(auto mystaff)
//     for(auto x:mystaff){
//         cout<<x.age<<","<<x.name<<","<<x.sal<<endl;
//     }
// }
// int main(){
//     array<emp,3> staff={{{23,"Mohan",22200.0},{24,"Mukesh",34000.0},{27,"Rahul",28000.0}}};
//     print(staff);
//     return 0;
// }
// ---------------------------------------------------------------------------------------

// #include<iostream>
// #include<array>
// using  namespace std;
// struct emp{
//     int age;
//     char name[20];
//     float sal;
// };
// void print(auto mystaff){   
//     for(auto x:mystaff){
//         cout<<x.age<<","<<x.name<<","<<x.sal<<endl;
//     }
// }
// int main(){
//     array<emp,3> staff;
//     array<emp,3>::iterator it;
//     for(it=staff.begin();it!=staff.end();it++){
//         cout<<"Enter age name and salary:";
//         cin>>it->age>>it->name>>it->sal;
//     }
//     print(staff);
//     return 0;


// }

// --------------------------------------------------------------------------
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v1(5,3);
//     vector<int>v2(2,10);
//     cout<<endl<<" v1 before assignment:"<<endl;
//     for(auto it=v1.begin();it!=v1.end();it++){
//         cout<<*it<<"  ";
//     }
//     // cout<<endl<<"contents of v2:"<<endl;
//     // for(auto x:v2){
//     //     cout<<x<<"  ";
//     // }   
//     v1.assign(2,10);
//     cout<<endl<<"v1 after assignment:"<<endl;
//     for(auto &y:v1){
//         cout<<y<<"  ";
//     } 
//     return 0;     
// }

// ----------------------------------------------------------------------------

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v1(3,100);
//     cout<<v1.size()<<" ,"<<v1.capacity()<<endl;
//     vector<int>::iterator it;
//     it=v1.begin();
//     it=v1.insert(it,200);  //here "it" becomes invalid due to reallocation(capacity will be dobuled) as prev array will destroyed .but we received the new address returned by insert() as this version of insert returns the addrs where it insert.so "it" will point to new array.
//     cout<<v1.size()<<" ,"<<v1.capacity()<<endl;
//     v1.insert(it,2,300);
//     cout<<v1.size()<<" ,"<<v1.capacity()<<endl;
//     v1.insert(it,1,900);   //here "it" becomes invalid due to reallocation(capacity will be dobuled) as prev array will destroyed.But this version of insert() do not return anything.
//     cout<<v1.size()<<" ,"<<v1.capacity()<<endl;

//     it =v1.begin(); //so,we reinitialize the "it".

//     vector<int>v2(2,400);
//     v1.insert(it+2,v2.begin(),v2.end());

//     int arr[]={501,502,503};
//     v1.insert(v1.begin(),arr,arr+3);
//     cout<<"v1 contains:"<<endl;
//     for(auto x :v1){
//         cout<<x<<" ";
//     }
//     return 0;
// }

// ---------------------------------------------------------------------------------------

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v{12,23,34,12,12,56,78,12,12,20};
//     cout<<"vector before erase:"<<endl;
//     for(auto x:v){
//         cout<<x<<" ";
//     }
//     // v.erase(remove(v.begin(),v.end(),12));
//     v.erase(remove(v.begin(),v.end(),12),v.end());
//     cout<<endl<<"vector after erase:"<<endl;
//     for(auto x:v){
//         cout<<x<<" ";
//     }  
//     return 0;  
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=1;
//     cout<<"Enter number:";
//     cin>>n;
//     if(n==0){
//         cout<<endl<<"factorial is 1";
//         return 0;
//     }
//     while(n>0){
//         sum*=n;
//         n--;
//     }
//     cout<<endl<<"factorial is "<<sum<<endl;
//     return 0;
// }
