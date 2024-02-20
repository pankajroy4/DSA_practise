#include<iostream>
#include<conio.h>
using namespace std;
class box
{
 int l,b,h;
 public:
 box();
 box(int);
 box(int,int,int);
 void show();
};
box::box()
{
 cout<<"enter length,breadth and height of box: "<<endl;
 cin>>l>>b>>h;
}
box::box(int i)
{
 l=b=h=i;
}
box::box(int p,int q,int r)
{
  l=p;
  b=q;
  h=r;
}
void box::show()
{
 cout<<"length is "<<l<<","<<"breadth is "<<b<<","<<"height is "<<h<<endl;
}
int main()
{
  box b1;
  box b2(5);
  box b3(6,7,9);
  b1.show();
  b2.show();
  b3.show();
  return 0;
}