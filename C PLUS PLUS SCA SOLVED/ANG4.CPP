#include<iostream>
#include<conio.h>
using namespace std;
class date
{
 int d,m,y;
 public:
 void setdate(int,int,int);
 void showdate();
};
void date::setdate(int dd,int mm,int yy)
{
  d=dd;
  m=mm;
  y=yy;
}
void date::showdate()
{
 cout<<d<<"/"<<m<<"/"<<y<<endl;
}
int main()
{
  date d1,d2;
  d1.setdate(24,5,2021);
  d2.setdate(1,1,2001);
  d1.showdate();
  d2.showdate();
  return 0;
}