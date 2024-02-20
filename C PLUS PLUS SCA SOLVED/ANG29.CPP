#include<iostream.h>
#include<conio.h>
class distance
{
  int feet,inch;
  public:
  void get();
  void show();
  friend void add(distance&,distance&);
};
void distance::get()
{
 cout<<"enter feet and inchees: "<<endl;
 cin>>feet>>inch;
}
void distance::show()
{
 cout<<"you entered,"<<endl<<"feet: "<<feet<<","<<" inches: "<<inch<<endl;
}
void add(distance &a,distance &b)
{ int feet,inch;
  feet=a.feet+b.feet;
  inch=a.inch+b.inch;
  if(inch>=12)
  {
   feet=feet+inch/12;
   inch=inch%12;

  }
  cout<<"after addition,"<<endl<<"feet: "<<feet<<","<<" inches: "<<inch<<endl;
}
int main()
{
 clrscr();
 distance d1,d2;
 d1.get();
 d1.show();
 d2.get();
 d2.show();
 add(d1,d2);
 getch();
 return 0;
}