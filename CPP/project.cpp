#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("E:\\c++ files\\message.txt");
    char text[100];
    cout<<"type something:";
    cin.getline(text,100);
    for(int i=0;text[i]!='\0';i++)
     {
         fout<<text[i];
     }
     fout.close();
     cout<<"file closed succeessfully";
     return 0;

}