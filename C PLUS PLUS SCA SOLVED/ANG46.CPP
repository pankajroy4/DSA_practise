#include<iostream.h>
#include<conio.h>
class shape
{
  protected:
  int dim1,dim2;
  public:
  void get()
  {
    cout<<"enter dimension 1 and 2: "<<endl;
    cin>>dim1>>dim2;
  }
  void show()
  {
    cout<<"dimensions are: "<<dim1<<","<<dim2<<endl;
  }
};
class rectangle:public shape
{
  public:
  void area()
  {
    cout<<"area of rectangle is "<<dim1*dim2<<endl;
  }
};
class triangle:public shape
{
  public:
  void area()
  {
  cout<<"area of triangle is "<<0.5*dim1*dim2<<endl;
  }
};
int main()
{
  clrscr();
  triangle t;
  rectangle r;
  r.get();
  r.show();
  r.area();
  t.get();
  t.show();
  t.area();
  getch();
  return 0;
}