#include<iostream.h>
#include<conio.h>
class distance
{
  int feet,inch;
  public:
  void get();
  void show();
  distance add(distance&);
};
void distance::get()
{
 cout<<"enter feet and inchees: "<<endl;
 cin>>feet>>inch;
}
void distance::show()
{
 cout<<"feet: "<<feet<<","<<" inches: "<<inch<<endl;
}
distance distance::add(distance &a)
{
  distance d;
  d.feet=feet+a.feet;
  d.inch=inch+a.inch;
  if(d.inch>=12)
  {
  d.feet=d.feet+d.inch/12;
  d.inch=d.inch%12;
  }
  return d;

}
int main()
{
 clrscr();
 distance d1,d2,d3;
 d1.get();
 d1.show();
 d2.get();
 d2.show();
 d3=d1.add(d2);
 d3.show();
 getch();
 return 0;
}