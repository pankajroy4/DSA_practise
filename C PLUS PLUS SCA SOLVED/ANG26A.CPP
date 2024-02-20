#include<iostream.h>
#include<conio.h>
class account
{
  int accountid;
  float balance;
  public:
  void get();
  void show();
  friend void transfer(account&,account&);
};
void account::get()
{
 cout<<"enter account id and balance: "<<endl;
 cin>>accountid>>balance;
}
void account::show()
{
  cout<<"account ID: "<<accountid<<endl<<"balance :"<<balance<<endl;
}
void transfer(account &p,account &q)
{

  float a;
  cout<<"enter amount to transfer from 1st account to 2nd account :"<<endl;
  cin>>a;
  p.balance=p.balance-a;
  q.balance=q.balance+a;
  cout<<"balance in 1st account:"<<p.balance<<endl;
  cout<<"balance in 2nd account:"<<q.balance<<endl;
}
int main()
{
 clrscr();
 account a1,a2;
 a1.get();
 a1.show();
 a2.get();
 a2.show();
 transfer(a1,a2);
 getch();
 return 0;
}