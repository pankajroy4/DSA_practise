#include<iostream.h>
#include<conio.h>
class a
{
  public:
  a(int x)
  {
   cout<<"constructor of a called....."<<x<<endl;
  }
  ~a()
  {
   cout<<"destructor of a called."<<endl;
  }
};
class b:public a
{
  public:
  b():a(4)
  {
    cout<<"constructor of b called."<<endl;
  }
  ~b()
  {
    cout<<"destructor of b called."<<endl;
  }
};
int main()
{
 clrscr();
  {
   b y;
  }
  getch();
 return 0;
}