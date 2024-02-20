//write a progrom to Check Prime Number.
//Downloaded From www.turboc8.com coded by Yogendra Singh.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,i=2,c=1;
std::cout<<"Enter a number ";
cin>>n;
for (i;i<n;i++)
{
if (n%i==0)
  c=0;
}
if (c)
cout<<"Prime number ";
else
cout<<"Not a prime number ";
return 0;
}



