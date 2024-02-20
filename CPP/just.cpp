#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j,len;
    string str="DORAEMON";
    len=str.length();
    for(i=0;i<len;i++)
    {
        for(j=i;j<len;j++)
        {
            cout<<" ";
        }
        
          for(j=0;j<=i;j++)
        {
            cout<<str[j];
            cout<<" ";
        }

         cout<<endl;
        
    }
    
}