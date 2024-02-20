#include<iostream.h>
#include<conio.h>
class counter
{
  int count;
  public:
  counter();
  counter(int);
  void show();
  counter operator++(int);
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
counter counter::operator++(int)
{  counter temp;
   temp.count=count;
   count++;
   return temp;
}
int main()
{
 clrscr();
 counter c1(10);
 counter c2;
 c1.show();
 c2.show();
 c2=c1++;
 c1.show();
 c2.show();
 getch();
 return 0;
}





