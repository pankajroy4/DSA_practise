#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arr[5];
   

    int i, j;
    int sum =0;

    for (i = 0; i < 5; i++)
    {
        cout << "enter number to store in array:" << endl;
        cin >> arr[i];
    }
    cout<<"distinct no's are:"<<endl;

    int count = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                
                break;
            }
        }
        if (i == j)
        {
            cout<<arr[i]<<endl;
            count++;
                       
        }
        if (i!=j)
        {
            sum = sum+arr[j];
        }
    }
    cout << " DISTINCTS NO'S ARE:" << count<<endl;
    cout<<"sum of duplicated no is  :"<<sum<<endl;

}