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
  emp();
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
   cout<<"total no. of employ currently working is: 0."<<endl;
  {
   emp e(22,"amit");
   emp f(23,"mohan");
   e.show();
   f.show();
   f.showcount();
   cout<<"two employ has joined the company for internship."<<endl;
   {
   emp g(24,"rahul");
   emp h(22,"geeta");
   g.show();
   h.show();
   h.showcount();
   }
   cout<<"rahul and geeta has left the company."<<endl;
   f.showcount();
   }
   cout<<"total number of employ is 0, as all the employ has left the company.";
   getch();
   return 0;

}