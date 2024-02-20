#include<iostream>
#include<conio.h>
using namespace std;
class factorial
{
  int f,a;
  public:
  factorial();
  void get();
  void calculate();
  void show();
};
 factorial::factorial()
{
  f=1;
}
void factorial::get()
{
  cout<<"enter an integer to find it's factorial: "<<endl;
  cin>>a;
}
void factorial::calculate()
{
 int i;
 for(i=1;i<=a;i++)
 {
  f=f*i;
 }
}
void factorial::show()
{
 cout<<"factorial is: "<<f;
}
int main()
{
  factorial f1;
  f1.get();
  f1.calculate();
  f1.show();
  return 0;
}