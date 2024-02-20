#include<iostream.h>
#include<conio.h>
#include<string.h>
class emp
{
  int age;
  static int count;
  char name[20];
  public:
 ~emp();
  emp(int,char *);
  void show();
  void showcount();
};
emp::~emp()
{
  count--;
}
int emp::count;
emp::emp(int a,char *p)
{
 age=a;
 strcpy(name,p);
 count++;
}
void emp::show()
{
  cout<<"name is "<<name<<","<<"age is "<<age<<endl;
}
void emp::showcount()
{
 cout<<"total no. of employ currently working is:"<<count<<endl;
}
 int main()
 {
   clrscr();
  {
   emp e(22,"amit");
   emp f(23,"mohan");
   e.show();
   f.show();
   f.showcount();
   {
    emp g(24,"rahul");
    emp h(25,"geeta");
    g.show();
    h.show();
    h.showcount();
   }
   f.showcount();
  }
    getch();
   return 0;

}