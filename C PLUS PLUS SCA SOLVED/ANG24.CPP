#include<iostream.h>
#include<conio.h>
class beta;
class alpha
{
 int a;
 public:
 void get();
 friend void compare(alpha&,beta&);
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
  friend void compare(alpha&,beta&);
};
 void beta::set()
 {
  cout<<"enter an integer: "<<endl;
  cin>>b;
 }
 void compare(alpha &p,beta &r)
{
  if(p.a>r.b)
   cout<<p.a<<" is greater."<<endl;
  else if(r.b>p.a)
  cout<<r.b<<" is greater."<<endl;
  else
  cout<<"both are equal.";
}

 int main()
 {
  clrscr();
  alpha x;
  beta y;
  x.get();
  y.set();
  compare(x,y);
  getch();
  return 0;
 }