#include<iostream.h>
#include<conio.h>
class counter
{
  int count;
  public:
  counter();
  counter(int);
  void show();
  void operator++();
};
counter::counter()
{
 count=0;
}
counter::counter(int a)
{
  count=a;
}
void counter::show()
{
  cout<<count<<endl;
}
void counter::operator++()
{
   count=++count;
}
int main()
{
 clrscr();
 counter c1;
 counter c2(10);
 c1.show();
 c2.show();
 ++c2;
 c2.show();
 getch();
 return 0;

}





