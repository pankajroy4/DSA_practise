#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class emp
{
  int age;
  char name[20];
  float sallery;

public:
  emp(int, char *, float);
  void show();
};
emp::emp(int a, char *p, float sal)
{
  age = a;
  strcpy(name, p);
  sallery = sal;
}
void emp::show()
{
  cout << "age is " << age << ","
       << "name is " << name << ","
       << "sallery is " << sallery << endl;
}

int main()
{
  emp e(23, "mohan", 24000.0);
  emp f(24, "rahul", 25000.0);
  e.show();
  f.show();
  return 0;
}