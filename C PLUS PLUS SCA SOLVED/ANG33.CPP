#include<iostream.h>
#include<conio.h>
class counter
{
  int count;
  public:
  counter();
  counter(int);
  void show();
  friend void operator++(counter &);
};
counter::counter()
{
  count=0;

}
counter::counter(int p)
{
  count=p;
}
void counter::show()
{
  cout<<count<<endl;
}
 void operator++(counter &a)
{
   a.count=a.count+1;
}
int main()
{
 clrscr();
 counter c1(10);
 counter c2;
 c1.show();
 c2.show();
 ++c1;
 c1.show();
 getch();
 return 0;
}





