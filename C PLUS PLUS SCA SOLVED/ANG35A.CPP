#include<iostream.h>
#include<conio.h>
class distance
{
  int feet,inch;
  public:
  void get();
  void show();
  void operator+(distance&);
};
void distance::get()
{
 cout<<"enter feet and inches: "<<endl;
 cin>>feet>>inch;
}
void distance::show()
{
 cout<<"feet: "<<feet<<endl<<"inches: "<<inch<<endl;
}
void distance::operator+(distance &p)
{
  feet=feet+p.feet;
  inch=inch+p.inch;
  if(inch>=12)
  {
    feet=feet+inch/12;
    inch=inch%12;
  }

  cout<<"after addition,"<<endl<<"feet; "<<feet<<endl<<"inches: "<<inch<<endl;
}
int main()
{
  clrscr();
  distance d1,d2;
  d1.get();
  d1.show();
  d2.get();
  d2.show();
  d1+d2;
  getch();
  return 0;
}




