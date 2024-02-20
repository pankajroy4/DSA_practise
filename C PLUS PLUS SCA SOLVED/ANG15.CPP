#include<iostream>
// #include<conio.h>
#include<cstring>
using namespace std;
class emp
{
  int age;
  static int count;
  char name[20];
  public:
  // emp();
  emp(int,char *);
  void show();
  void showcount();
};
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
   
   emp e(22,"amit");
   e.show();
   e.showcount();
   emp f(23,"mohan");
   f.show();
   f.showcount();
   emp g(24,"rahul");
   g.show();
   g.showcount();
   return 0;

}