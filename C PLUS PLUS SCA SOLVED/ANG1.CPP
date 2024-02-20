#include <iostream>
using namespace std;
class student
{
 int roll;
 char grade;
 float per;
 public:
 void get();
 void show();
};
void student::get()
{
 cout<<"enter roll,grade,percentage: ";
 cin>>roll>>grade>>per;
}
void student::show()
{
  cout<<"roll is "<<roll<<","<<"grade is "<<grade<<","<<"percentage is "<<per<<endl;
}
int main()
{
  student s;
  s.get();
  s.show();
  return 0;
}