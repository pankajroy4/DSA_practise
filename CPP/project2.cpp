#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("E:\\c++ files\\message.txt");
    string text;
    cout<<"type something:";
    getline(cin,text);
    for(char ch:text)
     {
         fout<<ch;
     }
     fout.close();
     cout<<"file closed succeessfully";
     return 0;

}