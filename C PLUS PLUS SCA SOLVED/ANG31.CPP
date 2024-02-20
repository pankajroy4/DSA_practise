#include<iostream.h>
#include<conio.h>
class counter
{
  int count;
  public:
  counter();
  counter(int);
  void show();
  counter operator++();
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
counter counter::operator++()
{
   count=++count;
   return count;
}
int main()
{
 clrscr();
 counter c1;
 counter c2(10);
 c1.show();
 c2.show();
 c2=++c2;
 c2.show();
 getch();
 return 0;
}





