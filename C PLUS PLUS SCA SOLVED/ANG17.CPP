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
  void static showcount();
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
   emp::showcount();
  {
   emp e(22,"amit");
   emp f(23,"mohan");
   e.show();
   f.show();
   emp::showcount();
   cout<<"two employ has joined the company for internship."<<endl;
   {
   emp g(24,"rahul");
   emp h(22,"geeta");
   g.show();
   h.show();
   emp::showcount();
   }
   cout<<"rahul and geeta has left the company."<<endl;
   emp::showcount();
   }
   cout<<"all employ has left the company."<<endl;
   emp::showcount();
   getch();
   return 0;

}