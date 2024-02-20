#include <iostream>
#include <fstream>
#include <string>
#include "conio2.h"
using namespace std;
int main(){

string source,dest;
cout<<"Enter source file path:";
getline(cin,source);
cout<<"Enter dest file path:";
getline(cin,dest);

ifstream fobj1;
fobj1.open(source);
if(!fobj1){
    cout<<"Cannot open the source file";
    getch();
    return 1;
}
fstream fobj2;
fobj2.open(dest,ios::out);

if(!fobj2){
    cout<<"Cannot open the dest file";
    getch();
    return 1;
}


char ch;
while(1){
    ch=fobj1.get();
    if(fobj1.eof())
        break;
    fobj2<<ch;
}
fobj1.close();
cout<<endl<<"File copied successfully.press any key to read it"<<endl;
getch();
fobj2.close();
fobj2.open(dest,ios::in);
fobj2.seekg(0);
while(1){
    ch=fobj2.get();
    if(fobj2.eof())
        break;
    cout<<ch;
}
cout<<endl<<"File displayed successfully";
fobj2.close();
return 0;
}