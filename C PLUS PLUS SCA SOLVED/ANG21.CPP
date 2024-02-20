/*call by reference/address using pointer*/
#include<iostream>
#include<conio.h>
using namespace std;
class box
{
 int l,b,h;
 public:
 void get();
 void show();
 int comparevol(box *);
};
void box::get()
{
  cout<<"enter l,b,h of the box: "<<endl;
  cin>>l>>b>>h;
}
void box::show()
{
 cout<<"lenght is "<<l<<","<<"breadth is "<<b<<" and height is "<<h<<endl;
}
int box::comparevol(box *p)
{
  int x,y;
  x=l*b*h;
  y=p->l*p->b*p->h;
  if(x>y)
  return 1;
  else if(x<y)
  return 0;
  else
  return -1;
}
int main()
{
 int a;
 box b1,b2;
 b1.get();
 b1.show();
 b2.get();
 b2.show();
 a=b1.comparevol(&b2);
 if(a==1)
 {
  cout<<"volume of 1st box is greater."<<endl;
 }
 if(a==0)
 {
   cout<<"volume of 2nd box is greater."<<endl;
 }
 if(a==-1)
 {
 cout<<"both are equal.";
 }
 return 0;
}