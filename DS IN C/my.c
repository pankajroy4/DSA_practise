#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 1;
    while (a < 3)
    {
        a = ++a + a;
        if (a == 4)
        {
            a++;
            printf("%d", a = a * a);
            continue;
        }

        else
            break;
    }
    return 0;
}
