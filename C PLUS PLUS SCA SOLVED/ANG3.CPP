#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class emp
{
 int age;
 char name[20];
 float sallery;
 public:
 void set(int,char *,float);
 void show();
};
void emp::set(int a,char *p,float sal)
{
  age=a;
  strcpy(name,p);
  sallery=sal;
}
void emp::show()
{
  cout<<"age is "<<age<<","<<"name is "<<name<<","<<"sallery is "<<sallery<<endl;
}
int main()
{
 
  emp e,f;
  e.set(23,"mohan",24000.0);
  f.set(24,"rahul",25000.0);
  e.show();
  f.show();
  return 0;
}