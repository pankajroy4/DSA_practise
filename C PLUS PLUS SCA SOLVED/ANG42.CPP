#include<iostream>
using namespace std;
#include<conio.h>
class figure
{
   protected:
   int l,b;
   public:
   void get()
   {
     cout<<"enter length and breadth: "<<endl;
     cin>>l>>b;
   }
   void show()
   {
     cout<<"length is "<<l<<" and breadth is "<<b<<endl;
   }
};
class printdeta
{
  public:
  void print(int a)
  {
    cout<<"area is "<<a<<endl;
  }
};
class rectangle:public figure,public printdeta
{
   int area;
   public:
   void calculate()
   {
     area=l*b;
     print(area);
    }
};
int main()
{
  clrscr();
  rectangle r;
  r.get();
  r.show();
  r.calculate();
  getch();
  return 0;


}