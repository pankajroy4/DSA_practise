#include<iostream.h>
#include<conio.h>
class box
{
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
  void display()
  {
   cout<<"material is "<<mat<<endl;
  }
};
int main()
{
  clrscr();
  carton c;
  c.get();
  c.set();
  c.show();
  c.display();
  getch();
  return 0;
}





