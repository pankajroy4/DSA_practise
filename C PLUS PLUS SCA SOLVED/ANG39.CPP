#include<iostream>
using namespace std;
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
  void display()
  {
   cout<<"length is "<<l<<","<<"breadth is "<<b<<" and height is "<<h<<endl;
  }
};
class carton:protected box
{
  char mat[20];
  public:
  void set()
  {
    get();
   cout<<"enter the material name: "<<endl;
   cin>>mat;
  }
  void show()
  {
     display();
   cout<<"material is "<<mat<<endl;
  }
  void calculate()
  {
   cout<<"volume: "<<l*b*h<<endl;
  }
};
int main()
{
 
  carton c;
  c.set();
  c.show();
  c.calculate();
  return 0;
}





