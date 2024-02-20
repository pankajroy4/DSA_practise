#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class student
{
  int roll;
  char name[20];
  float per;
  public:
  student(int=0,char[]="N/A",float=0.0);
  void show();
};
student::student(int r,char *g,float p)
{
  roll=r;
  strcpy(name,g);
  per=p;
}
void student::show()
{
 cout<<"roll is "<<roll<<","<<"name is "<<name<<" and percentage is "<<per<<endl;
}
int main()
{

 student s1(21,"mohit",98.2);
 student s2(22);
 s1.show();
 s2.show();
 return 0;
}