#include<iostream.h>
#include<conio.h>
class base
{
  public:
  virtual void show()
  {
   cout<<"in show of base."<<endl;
  }
};
class drv1:public base
{
  public:
  void show()
  {
   cout<<"in show of drv1."<<endl;
  }
};
class drv2:public drv1
{
 public:
 void show()
 {
  cout<<"in show of drv2."<<endl;
 }
};
int main()
{
  clrscr();
  base *p;
  base q;
  p=&q;
  p->show();
  drv1 v;
  p=&v;
  p->show();
  drv2 w;
  p=&w;
  p->show();


  getch();
  return 0;
}