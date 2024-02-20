#include<iostream>
#include<conio.h>
using namespace std;
class base
{
  public:
  int a;
};
class drv1:virtual public base
{
  public:
  int b;
};
class drv2:virtual public base
{
  public:
  int c;
};
class drv3:public drv1,public drv2
{  public:
   int d;
};
int main()
{
  clrscr();
  drv3 x;
  x.a=1;
  x.b=2;
  x.c=3;
  x.d=x.a+x.b+x.c;
  cout<<x.d;
  getch();
  return 0;
}