#include <iostream>
#include <conio.h>
using namespace std;
void volume(int, int, int);
void volume(int);
int main()
{
  int l, b, h, s, choice;
  cout << "select figure to calculate it's area: 1.cube, 2.cuboid: " << endl;
  cin >> choice;
  switch (choice)
  {
  case 1:
    cout << "enter lenght,breadth,height of cube: " << endl;
    cin >> l >> b >> h;
    s = l = b = h;
    volume(s);
    break;
  case 2:
    cout << "enter length,breadth,height of cuboid: ";
    cin >> l >> b >> h;
    volume(l, b, h);
    break;
  default:
    cout << "wrong choice!";
  }
  return 0;
}
void volume(int i)
{
  cout << "volume of cube is " << i * i * i;
}
void volume(int l, int b, int h)
{
  cout << "volume of cuboid is " << l * b * h;
}