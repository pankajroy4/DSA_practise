#include<iostream.h>
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
  void show(int a)
  {
    cout<<"area is "<<a<<endl;
  }
};
class rectangle:public figure,public printdeta
{
   int area;
   public:
   int calculate()
   {
     area=l*b;
     return area;
    }
};
int main()
{
  int x;
  clrscr();
  rectangle r;
  r.get();
  r.figure::show();
  x=r.calculate();
  r.printdeta::show(x);
  getch();
  return 0;


}