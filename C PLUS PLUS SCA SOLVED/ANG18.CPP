#include<iostream.h>
#include<conio.h>
class emp
{
  int age;
  char name[20];
  float sallery;
  public:
  void get();
  void show();
};
void emp::get()
{
 cout<<"enter age, name and sallery of the employ: "<<endl;
 cin>>this->age>>this->name>>this->sallery;
}
void emp::show()
{
 cout<<"age is "<<this->age<<","<<"name is "<<this->name<<" and sallery is "<<this->sallery;
}
int main()
{
  clrscr();
  emp e;
  e.get();
  e.show();
  getch();
  return 0;
}