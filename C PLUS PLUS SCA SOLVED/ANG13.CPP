#include<iostream>
#include<conio.h>
using namespace std;
class a
{
 int i;
 public:
 a(int);
 ~a();
};
a::a(int b)
{
  i=b;
  cout<<"object created...."<<i<<endl;
}
a::~a()
{
  cout<<"object destroyed...."<<i<<endl;
}
int main()
{
 {
  a a1(2);
  a a2(4);
  a a3(6);
 }
 return 0;
}