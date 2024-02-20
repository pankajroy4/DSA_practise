#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int age;
    cout << "enter your age" << endl;
    cin >> age;

    if (age > 0 && age <= 3)
        printf("icket price: free.");
    else if (age > 3 && age <= 10)
        printf("ticket price: 150");
    else if (age > 10 && age <= 60)
        printf("ticket price: 250");
    else
        printf("ticket price: 200");

    return 0;
}
