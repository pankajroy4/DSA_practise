#include<iostream.h>
#include<conio.h>
class student
{
 int roll;
 char grade;
 float per;
 public:
 void get();
 friend void show(student &);
};
void student::get()
{
 cout<<"enter roll,grade,percentage of the student: "<<endl;
 cin>>roll>>grade>>per;
}
void show(student &p)
{
 cout<<"roll:"<<p.roll<<"  percentage:"<<p.per<<"  grade:"<<p.grade;
}
int main()
{
 clrscr();
 student s;
 s.get();
 show(s);
 getch();
 return 0;
}