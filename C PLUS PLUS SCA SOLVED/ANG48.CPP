#include<iostream.h>
#include<conio.h>
class box
{
 int l,b,h;
 public:
 void get();
 void show();
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
int main()
{
 clrscr();
 box *p;
 p=new box;
 if(p==0)
 {
  return 1;
 }
 p->get();
 p->show();
 delete p;
 getch();
 return 0;
}