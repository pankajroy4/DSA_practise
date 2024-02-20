#include<iostream.h>
#include<conio.h>
class beta;
class alpha
{
 int a;
 public:
 void get();
 friend void swap(alpha&,beta&);
};
void alpha::get()
{
 cout<<"enter an integer: "<<endl;
 cin>>a;
}

class beta
{
  int b;
  public:
  void set();
  friend void swap(alpha&,beta&);
};
 void beta::set()
 {
  cout<<"enter an integer: "<<endl;
  cin>>b;
 }
 void swap(alpha &p,beta &r)
{
  cout<<"before swapping: "<<p.a<<","<<r.b<<endl;
   int n;
   n=p.a;
   p.a=r.b;
   r.b=n;
   cout<<"after swapping: "<<p.a<<","<<r.b<<endl;
}

 int main()
 {
  clrscr();
  alpha x;
  beta y;
  x.get();
  y.set();
  swap(x,y);
  getch();
  return 0;
 }