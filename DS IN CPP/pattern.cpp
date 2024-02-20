#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str = "HRITHIK";
    int i,j;
    int len = str.length();
    for(i=1; i <= len; i++)
    {
        for(j=1; j <= len-i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << str[j-1]  << " ";
        }
        cout << endl;
    }
  return 0;  
}


