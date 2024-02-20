#include<iostream>
#include<conio.h>
using namespace std;
class student
{
  int roll;
  char grade;
  float per;
  public:
  student(int=0,char='*',float=0.0);
  void show();
};
student::student(int r,char g,float p)
{
  roll=r;
  grade=g;
  per=p;
}
void student::show()
{
 cout<<"roll is "<<roll<<","<<"grade is "<<grade<<" and percentage is "<<per<<endl;
}
int main()
{

 student s1(21,'A',98.2);
 student s2(22);
 s1.show();
 s2.show();
 return 0;
}