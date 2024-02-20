#include<iostream>
#include<conio.h>
using namespace std;
class num
{
  protected:
  int a,b;
  public:
  void get()
  {
    cout<<"enter two integer: "<<endl;
    cin>>a>>b;
  }
  void show()
  {
    cout<<a<<endl<<b<<endl;
  }
};
class addnum:public num
{

  int c;
  public:
  void set()
  {
    get();
  }
  void add()
  {
   c=a+b;
  }
  void print()
  {
    show();
    cout<<"addition is: "<<c<<endl;
  }
};
class difference:public addnum
{

  int d;
  public:
  void accept()
  {
    set();
  }
  void diff()
   {
     d=a-b;
   }
  void display()
   {
      print();
     cout<<"difference is: "<<d<<endl;
   }
};
int main()
{
  clrscr();
  difference d1;
  d1.accept();
  d1.add();
  d1.diff();
  d1.display();
  getch();
  return 0;
}








