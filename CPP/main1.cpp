#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    
      int i,j,x;
      cout<<"enter no upto which pascal traingle you want to display;"<<endl;
      cin>>x;
      for(i=1;i<=x;i++)
        {
         for(j=1;j<=i;j++)
         {
           cout<<j<<" ";
         }
           cout<<endl; 
        } 
        
        return 0;
}