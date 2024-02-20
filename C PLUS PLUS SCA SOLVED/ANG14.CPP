/*compiler creat only one copy of static deta member in whole program*/
#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
  public:
  int a;
  static int b;
};
int demo::b;
int main()
{
 demo p,q,r;
 p.a=10;
 q.a=20;
 r.a=30;
 demo::b=10;
 demo::b=20;
 demo::b=30;
 cout<<p.a<<","<<q.a<<","<<r.a<<endl;
 cout<<demo::b<<","<<demo::b<<","<<demo::b;
 
 return 0;


}