#include<iostream.h>
#include<conio.h>
class box
{
  protected:
  int l,b,h;
  public:
  void get()
  {
   cout<<"enter l,b,h of the box: "<<endl;
   cin>>l>>b>>h;
  }
  void show()
  {
   cout<<"length is "<<l<<","<<"breadth is "<<b<<" and height is "<<h<<endl;
  }
};
class carton:public box
{
  char mat[20];
  public:
  void set()
  {
   cout<<"enter the material name: "<<endl;
   cin>>mat;
  }
  void show()
  {
   cout<<"material is "<<mat<<endl;
  }
  void calculate()
  {
   cout<<"volume; "<<l*b*h<<endl;
  }
};
int main()
{
  clrscr();
  carton c;
  c.get();
  c.set();
  c.box::show();
  c.show();
  c.calculate();
  getch();
  return 0;
}





