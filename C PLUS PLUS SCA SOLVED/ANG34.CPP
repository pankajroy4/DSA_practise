#include<iostream.h>
#include<conio.h>
class counter
{
  int count;
  public:
  counter();
  counter(int);
  void show();
  friend counter operator++(counter &);
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
 counter operator++(counter &a)
{  counter temp;
   temp.count=a.count+1;
   return temp;
}
int main()
{
 clrscr();
 counter c1(10);
 counter c2;
 c1.show();
 c2.show();
 c2=++c1;
 c2.show();
 getch();
 return 0;
}





