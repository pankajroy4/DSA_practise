#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[10];
    int i,check;
     cout<<"enter  integer to store in array:"<<endl;
    for(i=0;i<10;i++)
    {
      
       cin>>arr[i];

    }
    
     cout<<"enter a number to find whether it is in array or not:"<<endl;
     cin>>check;
     for(i=0;i<10;i++)
     {
         if(arr[i]==check)
          {
              cout<<"number found"<<endl;
              cout<<"position is "<<i+1<<endl;
              return 0;
            
          }
          
     }
       if(10==i)
         {
           cout<<"number does not exist."<<endl;
         } 
     return 0;
}