#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a, i = 2;
    cout << "enter no between 1 to 20 to check whether it is prime or not" << endl;
    cin >> a;
    if (a > 20)
    {
        cout << " envalid no";
        return 0;
    }

    for (i = 2; i <= a - 1; i++)
    {
        if (a % i == 0)
        {
            printf(" not a prime.");
            break;
        }
    }
    if (i == a)
        printf("prime no.");

        return 0;
}