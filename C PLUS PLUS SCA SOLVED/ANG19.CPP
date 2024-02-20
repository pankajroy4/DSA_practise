#include<iostream.h>
#include<conio.h>
class box
{
 int l,b,h;
 public:
 box(int,int,int);
 box (box &);
 void show();
 };
box::box(int l,int b,int h)
{
  this->l=l;
  this->b=b;
  this->h=h;
}
box::box(box &p)
{
 *this=p;
}
void box::show()
{
 cout<<"length is "<<l<<","<<"breadth is "<<b<<","<<"height is "<<h<<endl;
}
int main()
{
  clrscr();
  box b1(6,7,9);
  box b2(b1);
  b1.show();
  b2.show();
  getch();
  return 0;
}