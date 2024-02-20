#include<iostream>
#include<string>
#include<fstream>
#include "conio2.h"
using namespace std;
int main()
{
    fstream fobj;
    fobj.open("E:\\c++ files\\message.txt");
    string text;
    cout<<"type something:";
    getline(cin,text);
    for(char ch:text)
     {
         fobj<<ch;
     }
     
     cout<<endl<<"file saved successfully";
     getch();
     char ch;
     fobj.seekg(0);
     
     while(1)
     {   
     
         ch=fobj.get();
         if(fobj.eof())
         break;
         cout<<ch;
     }
     fobj.close();
     cout<<"file read succeessfully";
     return 0;

}
