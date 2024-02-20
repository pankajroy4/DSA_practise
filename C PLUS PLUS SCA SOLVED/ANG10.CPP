#include<iostream>
#include<conio.h>
using namespace std;
void volume(int,int,int);
void volume(int);
int main()
{
 int choice;
 cout<<"select figure to calculate it's area: 1.cube, 2.cuboid: "<<endl;
 cin>>choice;
 switch(choice)
 {
  case 1:
  int s;
  cout<<"enter side of cube: "<<endl;
  cin>>s;
  volume(s);
  break;
  case 2:
  int l,b,h;
  cout<<"enter length,breadth,height of cuboid: ";
  cin>>l>>b>>h;
  volume(l,b,h);
  break;
  default:
  cout<<"wrong choice!";
  }
  return 0;
}


void volume(int i)
{
  cout<<"volume of cube is "<<i*i*i;
}
void volume(int l,int b,int h)
{
 cout<<"volume of cuboid is "<<l*b*h;
}