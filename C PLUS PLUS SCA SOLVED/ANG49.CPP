#include<iostream.h>
#include<conio.h>
class base
{
  public:
  void show()
  {
   cout<<"in show of base."<<endl;
  }
};
class drv:public base
{
  public:
  void show()
  {
   cout<<"in show of drv."<<endl;
  }
};
int main()
{
  clrscr();
  base *p;
  p->show();
  drv v;
  p=&v;
  p->show();


  getch();
  return 0;
}