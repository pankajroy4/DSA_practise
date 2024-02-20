#include<iostream.h>
#include<conio.h>
class a
{
  public:
  a()
  {
   cout<<"constructor of a called."<<endl;
  }
  ~a()
  {
   cout<<"destructor of a called."<<endl;
  }
};
class b:public a
{
  public:
  b()
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
   b x;
  }
  getch();
 return 0;
}