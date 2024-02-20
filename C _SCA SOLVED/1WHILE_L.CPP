// #include<stdio.h>
// #include<conio.h>
// void main()
//  {
//  int i,a;
//  clrscr();
//  printf("Enter a number: ");
//  scanf("%d",&a);
//  i=1;
//  while(i<=a)
//    {
//     printf("%d\n",i);
//     i= i+1;
//     }
//  getch();
//  };


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i;
    int arr[n];
    cout<<"enter no. of integer:";
    cin>>n;
    cout<<"enter numbers:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(i=n-1;i>=0;i--)
     {
         cout<<arr[i]<<" ";
     }
    return 0;
}

