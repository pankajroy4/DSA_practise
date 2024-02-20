#include<iostream.h>
#include<conio.h>
class account
{
 int accountid;
 float balance;
 public:
 void get();
 void show();
 void transfer(account &);
};
void account::get()
{
 cout<<"enter account id and balance: "<<endl;
 cin>>accountid>>balance;
}
void account::show()
{
 cout<<"your account ID is "<<accountid<<" and Avl balance is "<<balance<<endl;
}
void account::transfer(account &p)
{
  int amount;
  cout<<"enter amount you want to tranfer from 1st account to 2nd account: "<<endl;
  cin>>amount;
  balance=balance-amount;
  p.balance=p.balance+amount;
}
int main()
{
  int amount;
  clrscr();
  account a1,a2;
  a1.get();
  a2.get();
  a1.show();
  a2.show();
  a1.transfer(a2);
  a1.show();
  a2.show();
  getch();
  return 0;
}