#include<iostream.h>
#include<conio.h>
class distance
{
  int feet,inch;
  public:
  void get();
  void show();
  distance operator+(distance&);
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
distance distance::operator+(distance &p)
{
  distance temp;
  temp.feet=feet+p.feet;
  temp.inch=inch+p.inch;
  if(temp.inch>=12)
  {
    temp.feet=temp.feet+temp.inch/12;
    temp.inch=temp.inch%12;
  }
  return temp;
}
int main()
{
  clrscr();
  distance d1,d2,d3;
  d1.get();
  d1.show();
  d2.get();
  d2.show();
  d3=d1+d2;
  d3.show();
  getch();
  return 0;
}




