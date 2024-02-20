

// // *****************************THIS CODE IS WRITTEN BY PANKAJ ROY**********************

//NOTE :-> PLEASE USE GCC COMPILER. THERE WILL BE ERROR WHEN TC(turbo compiler) WILL USED. 

// //***************************** CPP REVISION ******************************

// //                     **************DECIMAL PRECISION *******************

// #include<iostream>
// using namespace std;
// int main(){
//     float a=1.5;
//     cout<<a;
//     return 0;
// }

// //                     ****************************************

// #include<iostream>
// using namespace std;
// int main(){
//     float a=1.500;
//     cout<<fixed<<a;
//     return 0;
// }
                    
// //                    *****************************************

// #include<iostream>
// using namespace std;
// int main(){
//     float a=1.5;
//     cout.precision(3);
//     cout<<fixed<<a;
//     return 0;
// }

// //********************************************************************************

// #include<iostream>
// using namespace std;

// class student
// {
//     int roll;
//     char grade;
//     float per;
//     public:
//     void get();
//     void show();

// };

// void student :: get(){
//     cout<<"Enter roll,grade,per: ";
//     cin>>roll>>grade>>per;
// }

// void student :: show(){
//     cout<<"Roll is "<<roll<<","<<" Grade is "<<grade<<" and "<<"Percentage is "<<per<<endl;
// }

// int main(){
//     student s;
//     s.get();
//     s.show();
//     return 0;
// }


// //*******************************************************************************

// #include<iostream>
// #include<cstring>
// using namespace std;
// class EMP{
//     int age;
//     char name[10];
//     float sal;
//     public:
//     void set(int ,char *,float);
//     void show();
// };

// void EMP :: set(int a,char *p,float c){
//     age=a;
//     strcpy(name,p);
//     sal=c;
// };

// void EMP:: show(){
//     cout<<age<<" ,"<<name<<" ,"<<sal<<endl;
// };

// int main(){
//     EMP E1,E2;
//     E1.set(24,"Rahul",2300.0);
//     E2.set(22,"Pankaj",192334.3);
//     E1.show();
//     E2.show();
//     return 0;
// }

// //********* Above programm using c++ string header file(Also run on TC)*****************

// #include<iostream>
// #include<string>
// using namespace std;
// class EMP{
//     int age;
//     string name;
//     float sal;
//     public:
//     void set(int ,string,float);
//     void show();
// };

// void EMP :: set(int a,string p,float c){
//     age=a;
//     name=p;
//     sal=c;
// };

// void EMP:: show(){
//     cout<<age<<" ,"<<name<<" ,"<<sal<<endl;
// };

// int main(){
//     EMP E1,E2;
//     E1.set(24,"Rahul",2300.0);
//     E2.set(22,"Pankaj",192334.3);
//     E1.show();
//     E2.show();
//     return 0;
// }

// //****************************************************************

// #include<iostream>
// using namespace std;
// class factorial{
//     int n;
//     int f;
//     public:
//     void initialize();
//     void get();
//     void calculate();
//     void show();
// };
// void factorial::initialize(){
//     f=1;
// }

// void factorial::get(){
//     cout<<"Enter no to find it's factorial: ";
//     cin>>n;
// }

// void factorial :: calculate(){
//     for(int i=2;i<=n;i++)
//         f*=i;
// }
// void factorial ::show(){
//     cout<<"number is "<<n<<endl;
//     cout<<"factorial is "<<f<<endl;
// }

// int main(){
//     factorial f;
//     f.initialize();
//     f.get();
//     f.calculate();
//     f.show();
//     return 0;
// }

// //**********************************CONSTRUCTOR*****************************************

// #include<iostream>
// using namespace std;
// class factorial{
//     int n;
//     int f;
//     public:
//     factorial();    //constructor.
//     void get();
//     void calculate();
//     void show();
// };
//  factorial::factorial(){
//     f=1;
// }

// void factorial::get(){
//     cout<<"Enter no to find it's factorial: ";
//     cin>>n;
// }

// void factorial :: calculate(){
//     for(int i=2;i<=n;i++)
//         f*=i;
// }
// void factorial ::show(){
//     cout<<"number is "<<n<<endl;
//     cout<<"factorial is "<<f<<endl;
// }

// int main(){
//     factorial f;
//     f.get();
//     f.calculate();
//     f.show();
//     return 0;
// }

// //*******************parametroised constructor************************************

// #include<iostream>
// #include<string>
// using namespace std;
// class emp{
//     int age;
//     string name;
//     float sal;
//     public:
//     emp(int,string,float);
//     void show();
// };

// emp::emp(int a,string n,float s){
//     age=a;
//     name=n;
//     sal=s;
// }

// void emp::show(){
//     cout<<age<<","<<name<<","<<sal<<endl;
// }

// int main(){
//     emp E1(25,"Rahul",2300.89);
//     emp E2(27,"Mohan",1800.34);
//     E1.show();
//     E2.show();
//     return 0;
// }

// //****************parametroised constructor using c header file(TC)****************

// #include<iostream>
// #include<cstring>
// using namespace std;
// class emp{
//     int age;
//     char name[10];
//     float sal;
//     public:
//     emp(int,char *,float);
//     void show();
// };

// emp::emp(int a,char *n,float s){
//     age=a;
//     strcpy(name,n);  
//     sal=s;
// }

// void emp::show(){
//     cout<<age<<","<<name<<","<<sal<<endl;
// }

// int main(){
//     emp E1(25,"Rahul",2300.89);
//     emp E2(27,"Mohan",1800.34);
//     E1.show();
//     E2.show();
//     return 0;
// }

// //**************************Function Overloading*************************

// #include<iostream>
// using namespace std;
// void volume(int);
// void volume(int,int ,int);

// int main(){
//     int l,b,h;
//     int choice;
//     do{
//     cout<<"PLEASE SELECT FIGURE:"<<endl;
//     cout<<"1.CUBE "<<endl<<"2.CUBOID "<<endl;
//     cin>>choice;
//     switch(choice){
//         case 1:
//             cout<<"Please enter side length of cube: ";
//             cin>>l;
//             volume(l);
//             break;
//         case 2:
//             cout<<"Please enetr length ,breadth,height:";
//             cin>>l>>b>>h;
//             volume(l,b,h);
//             break;
//         default:
//             cout<<"Wrong Choice! Try Again."<<endl;       

//     }
//     }while(choice !=1 && choice !=2);

//     return 0;
// }

// void volume(int l){
//     cout<<"Volume of cube is "<<l*l*l<<endl;
// }
// void volume(int l,int b,int h){
//     cout<<"Volume of cuboid is "<<l*b*h<<endl;
// }

// //**********************CONSTRUCTOR OVERLOADING********************************

// #include<iostream>
// using namespace std;
// class box{
//     int l,b,h;
//     public:
//     box();
//     box(int);
//     box(int,int,int);
//     void show();
// };

// box::box(){
//     cout<<"Enter length,breadth and height:";
//     cin>>l>>b>>h;
// }

// box::box(int n){
//     l=b=h=n;
// }

// box::box(int a,int d,int c){
//     l=a;
//     b=d;
//     h=c;
// }

// void box:: show(){
//     cout<<l<<","<<b<<","<<h<<endl;
// }

// int main(){
//     box b1;
//     box b2(5);
//     box b3(2,6,9);
//     b1.show();
//     b2.show();
//     b3.show();
//     return 0;
// }

// //**************************COPY CONSTRUCTOR********************************

// #include<iostream>
// using namespace std;
// class box{
//     int l,b,h;
//     public:
//     box();
//     box(box &);
//     box(int);
//     box(int,int ,int);
//     void show();
// };

// box::box(){
//     cout<<"Enter length,breadth,height:";
//     cin>>l>>b>>h;
// }
// box::box(box &p){
//     l=p.l;
//     b=p.b;
//     h=p.h;    
// }

// box::box(int n){
//     l=b=h=n;
// }

// box::box(int x,int y,int z){
//     l=x;
//     b=y;
//     h=z;
// }

// void box::show(){
//     cout<<l<<","<<b<<","<<h<<endl;
// }

// int main(){
//     box b1;
//     box b2(5);
//     box b3(5,6,8);
//     box b4(b3);
//     b1.show();
//     b2.show();
//     b3.show();
//     b4.show();
//     return 0;
// }

// //********************* CONSTRUCTOR WITH DEFAULT ARGUMENTS ***************************

// #include<iostream>
// using namespace std;
// class student{
//     int roll;
//     char grade;
//     float per;
//     public:
//     student(int=10,char=' ',float=0.00);
//     void get();
//     void show();
// };

// student::student(int r,char c,float f){
//     roll=r;
//     grade=c;
//     per=f;
    
// }

// void student::get(){
//     cout<<"Enter roll ,grade ,percentage: ";
//     cin>>roll>>grade>>per;
// }

// void student ::show(){
//     cout<<roll<<","<<grade<<","<<per<<endl;
// }

// int main(){
//     student s(10,'A',98.5);
//     student p(0,' ',0.0);
//     p.get();
//     s.show();
//     p.show();
//     return 0;

// }

// //*************************STATIC VARIABLE************************************

// #include<iostream>
// using namespace std;
// void show();
// int main(){
//     show();
//     show();
//     show();
//     return 0;
// }

// void show(){
//     static int a;
//     cout<<a<<endl;
//     a++;
// }

// //*********************STATIC DATA MEMBER************************************

// #include<iostream>
// using namespace std;
// class demo{
//     public:
//     int a;
//     static int b;
//     void show();
// };

// int demo:: b;

// int main(){
//     demo d1;
//     demo d2;
//     demo d3;
//     d1.a=10;
//     d2.a=20;
//     d3.a=30;
//     cout<<d1.a<<endl<<d2.a<<endl<<d3.a<<endl<<endl;
//     d1.b=10;
//     d2.b=20;
//     d3.b=30;
//     cout<<d1.b<<endl<<d2.b<<endl<<d3.b<<endl;
//     return 0;
    
// }

// //*****************************DESTRUCTOR**********************************************

// #include<iostream>
// #include<cstring>
// #include<string>
// using namespace std;
// class emp{
//     int age;
//     string name;
//     static int count;
//     public:
//     emp(int,string);
//     ~emp();
//     void show();
//     void showcount();
// };
// int emp::count;
// emp::emp(int a,string n){
//     age=a;
//     name=n;
//     count++;
// }

// void emp::show(){
//     cout <<"Name :"<<name<<","<<"Age :"<<age<<endl;
// }
// void emp::showcount(){
//     cout<<"Total no. of employee currently working is :"<<count<<endl;
// }

// emp::~emp(){
//     count--;
// }

// int main(){
//     emp e1(22,"Ram");
//     emp e2(34,"Mohan");
//     emp e3(31,"Rakesh");
//     e1.show();
//     e2.show();
//     e3.show();
//     e1.showcount();
//     {
//     emp e4(32,"Geeta");
//     emp e5(20,"Aanya");
//     e4.show();
//     e5.show();
//     e5.showcount();
//     }
//     e3.showcount();
//     return 0;
// }


// //********************ABOVE PROGRAMM USING CSTRING HEADER FILE********************

// #include<iostream>
// #include<cstring>
// using namespace std;
// class emp{
//     int age;
//     char  name[10];
//     static int count;
//     public:
//     emp(int ,char *);
//     ~emp();
//     void show();
//     void showcount();
// };
// int emp::count;
// emp::emp(int a,char * n){
//     age=a;
//     strcpy(name,n);
//     count++;
// }

// void emp::show(){
//     cout <<"Name :"<<name<<","<<"Age :"<<age<<endl;
// }
// void emp::showcount(){
//     cout<<"Total no. of employee currently working is :"<<count<<endl;
// }

// emp::~emp(){
//     count--;
// }

// int main(){
//     emp e1(22,"Ram");
//     emp e2(34,"Mohan");
//     emp e3(31,"Rakesh");
//     e1.show();
//     e2.show();
//     e3.show();
//     e1.showcount();
//     {
//     emp e4(32,"Geeta");
//     emp e5(20,"Aanya");
//     e4.show();
//     e5.show();
//     e5.showcount();
//     }
//     e3.showcount();
//     return 0;
// }

// //****************************STATIC MEMBER FUNCTION****************************

// #include<iostream>
// #include<string>
// using namespace std;
// class emp{
//     int age;
//     string name;
//     static int count;
//     public:
//     emp(int,string);
//     ~emp();
//     void show();
//     static void showcount();
// };

// int emp::count;
// emp::emp(int a,string n){
//     age=a;
//     name=n;
//     count++;
// }

// void emp::show(){
//     cout<<"Name :"<<name<<","<<"Age :"<<age<<endl;
// }

// emp::~emp(){
//     count--;
// }

// void emp::showcount(){
//     cout<<"Total no of employee currently working is :"<<count<<endl;

// }

// int main(){
//     emp e1(21,"Mohan");
//     emp e2(25,"sita");
//     e1.show();
//     e2.show();
//     emp::showcount();
//     {
//       emp e3(34,"Ram");
//       emp e4(18,"Radhika");
//       e3.show();
//       e4.show();
//       emp::showcount();
//     }
//     emp::showcount();
//     return 0;
// }


// //****************************** THIS POINTER *********************************

// #include<iostream>
// #include<string>
// using namespace std;
// class emp{
//     int age;
//     char name[20];  // string name;
//     public:
//     void get();
//     void show();
// };

// void emp::get(){
//     cout<<"Enter age and name:";
//     cin>>this->age>>this->name;
// }

// void emp::show(){
//     cout<<"Name: "<<this->name<<","<<"Age: "<<this->age<<endl;
// }

// int main(){
//     emp e1;
//     emp e2;
//     e1.get();
//     e2.get();
//     e1.show();
//     e2.show();
//     return 0;
// }

// //****************THIS POINTER WITH CONSTRUCTOR AND COPY CONSTRUCTOR****************

// #include<iostream>
// using namespace std;
// class box{
//     int l,b,h;
//     public:
//     box(int ,int ,int);
//     box(box &);
//     void show();
// };

// box::box(int a,int b,int c){
//     this->l=a;
//     this->b=b;
//     this->h=c;
// }

// box::box(box &p){
//     *this=p;
// }

// void box::show(){
//     cout<<"Length is "<<this->l<<", breadth is "<<this->b<<",Height is "<<this->h<<endl;
//         // or
//     // cout<<l<<b<<h;
// }

// int main(){
//     box b1(12,24,67);
//     box b2(b1);
//     b1.show();
//     b2.show();
//     return 0;
// }

// //*****************PASSING OBJECT TO MEMBER FUNCTION***************************

// //                  ***********PASS BY VALUE****************

// #include<iostream>
// using namespace std;
// class box{
//     int l,b,h;
//     public:
//     void get(){
//         cout<<"Enter length, breadth and height: ";
//         cin>>l>>b>>h;
//     }
//     void show(){
//         cout<<"Length is "<<l<<",Breadth is "<<b<<" and height is "<<h<<endl;
//     }
//     int comparevol(box );
// };

// int box::comparevol(box p){
//     int x,y;
//     x=l*b*h;
//     y=p.l*p.b*p.h;
//     if(x>y)
//        return 1;
//     else if(x<y)
//        return -1;
//     else 
//        return 0;      
// }

// int main(){
//     int ans;
//     box b1;
//     box b2;
//     b1.get();
//     b2.get();
//     b1.show();
//     b2.show();
//     ans=b1.comparevol(b2);
//     if(ans==1)
//        cout<<"Volume of first cuboid is greater."<<endl;
//     else if(ans==-1)
//       cout<<"volume of second cuboid is greater."<<endl;
//     else 
//        cout<<"Both volume is equal."<<endl;
//     return 0;        
// }

// //                       ***********PASS BY ADDRESS***************

// #include<iostream> 
// using namespace std;
// class box{
//     int l,b,h;
//     public:
//     void get(){
//         cout<<"Enter length,breadth and height:";
//         cin>>l>>b>>h;
//     }
//     void show(){
//         cout<<l<<","<<b<<","<<h<<endl;
//     }
//     int comparevol(box *);
// };                   

// int box::comparevol(box *p){
//     int x,y;
//     x=l*b*h;
//     y=p->l*p->b*p->h;
//     if(x>y)
//       return 1;
//     else if(x<y)
//       return -1;
//     else
//       return 0;    
// }

// int main(){
//     int ans;
//     box b1;
//     box b2;
//     b1.get();
//     b2.get();
//     b1.show();
//     b2.show();
//     ans=b1.comparevol(&b2);
//     if(ans==1)
//       cout<<"Volume of first cuboid is greater."<<endl;
//     else if(ans==-1)
//       cout<<"Volume of 2nd cuboid is greater."<<endl;
//     else
//       cout<<"Both have equal volume."<<endl;
//     return 0;     
// }

// //                         ***********PASS BY REFERENCE***************

// #include<iostream> 
// using namespace std;
// class box{
//     int l,b,h;
//     public:
//     void get(){
//         cout<<"Enter length,breadth and height:";
//         cin>>l>>b>>h;
//     }
//     void show(){
//         cout<<l<<","<<b<<","<<h<<endl;
//     }
//     int comparevol(box &);
// };                   

// int box::comparevol(box &p){
//     int x,y;
//     x=l*b*h;
//     y=p.b*p.b*p.h;
//     if(x>y)
//       return 1;
//     else if(x<y)
//       return -1;
//     else
//       return 0;    
// }

// int main(){
//     int ans;
//     box b1;
//     box b2;
//     b1.get();
//     b2.get();
//     b1.show();
//     b2.show();
//     ans=b1.comparevol(b2);
//     if(ans==1)
//       cout<<"Volume of first cuboid is greater."<<endl;
//     else if(ans==-1)
//       cout<<"Volume of 2nd cuboid is greater."<<endl;
//     else
//       cout<<"Both have equal volume."<<endl;
//     return 0;     
// }


// //*********************************FRIEND FUNCTION***********************************

// #include<iostream>
// #include<string>
// using namespace std;
// class emp{
//     int age;
//     string name;
//     float sal;
//     public:
//     void get(){
//         cout<<"Enter age name and sallery: ";
//         cin>>age>>name>>sal;
//     }
//     friend void show(emp &);
// };

// void show(emp &p){
//     cout<<"Name is "<<p.name<<",Age is "<<p.age<<" and salary is "<<p.sal<<endl;
// };

// int main(){
//     emp e1;
//     e1.get();
//     show(e1);
//     return 0;
// }

// //*************FUNCTION BEING FRIEND OF TWO CLASSES (pass by reference)**************

// #include<iostream>
// #include<string>
// using namespace std;
// class beta;
// class alpha{
//    int a;
//    public:
//    void get();
//    friend void compare(alpha &,beta &);
// };

// void alpha::get(){
//     cout<<"Enter integer for Aplha : ";
//     cin>>a;
// }

// class beta{
//     int b;
//     public:
//     void set();
//     friend void compare(alpha &,beta &);
// };

// void beta::set(){
//     cout<<"Enter integer for beta: ";
//     cin>>b;
// }

// void compare(alpha &A,beta &B){
//     if(A.a>B.b)
//       cout<<"greater is "<<A.a<<endl;
//     else if(A.a<B.b)
//       cout<<"Greater is "<<B.b<<endl;
//     else
//      cout<<"Both is equal."<<endl;    
// }

// int main(){
//     alpha A1;
//     beta B1;
//     A1.get();
//     B1.set();
//     compare(A1,B1);
//     return 0;
// }


// //*****************ADDING TWO OBJECTS OF A CLASS*************************

// //                     ********SOLUTION 01************

// #include<iostream>
// using namespace std;
// class distanc{
//     int inches;
//     int feet;
//     public:
//     void get();
//     void show();
//     void add(distanc &,distanc &);
// };

// void distanc :: get(){
//     cout<<"Enter feet and inches: ";
//     cin>>feet>>inches;
// }

// void distanc ::show(){
//     cout<<"Feet: "<<feet<<" ,Inches: "<<inches<<endl;
// }

// void distanc:: add(distanc &p ,distanc &q){
//     feet=p.feet+q.feet;
//     inches=p.inches+q.inches;
//     if(inches>=12){
//         feet=feet+inches/12;
//         inches=inches%12;
//     }
// }

// int main(){
//     distanc d1,d2,d3;
//     d1.get();
//     d2.get();
//     d3.add(d1,d2);
//     d1.show();
//     d2.show();
//     d3.show();
//     return 0;
// }

// //                            *************SOLUTION 02****************

// #include<iostream>
// using namespace std;
// class distanc{
//     int inches;
//     int feet;
//     public:
//     void get();
//     void show();
//     distanc add(distanc &);
// };

// void distanc :: get(){
//     cout<<"Enter feet and inches: ";
//     cin>>feet>>inches;
// }

// void distanc ::show(){
//     cout<<"Feet: "<<feet<<" ,Inches: "<<inches<<endl;
// }

// distanc distanc:: add(distanc &p){
//     distanc temp;
//     temp.feet=p.feet+feet;
//     temp.inches=p.inches+inches;
//     if(temp.inches>=12){
//         temp.feet=temp.feet+temp.inches/12;
//         temp.inches=temp.inches%12;
//     }
//     return temp;
// }

// int main(){
//     distanc d1,d2,d3;
//     d1.get();
//     d2.get();
//     d3=d1.add(d2);
//     d1.show();
//     d2.show();
//     d3.show();
//     return 0;
// }

// //                        ***********SOLUTION 03**********

// #include<iostream>
// using namespace std;
// class distanc{
//     int inches;
//     int feet;
//     public:
//     void get();
//     void show();
//     distanc adds(distanc &,distanc &);
// };

// void distanc :: get(){
//     cout<<"Enter feet and inches: ";
//     cin>>feet>>inches;
// }

// void distanc ::show(){
//     cout<<"Feet: "<<feet<<" ,Inches: "<<inches<<endl;
// }

// distanc distanc:: adds(distanc &p,distanc &q){
//     distanc temp;
//     temp.feet=p.feet+q.feet;
//     temp.inches=p.inches+q.inches;
//     if(temp.inches>=12){
//         temp.feet=temp.feet+temp.inches/12;
//         temp.inches=temp.inches%12;
//     }
//     return temp;
// }

// int main(){
//     distanc d1,d2,d3;
//     d1.get();
//     d2.get();
//     d3=d3.adds(d1,d2);
//     d1.show();
//     d2.show();
//     d3.show();
//     return 0;
// }


// //****************OPERATOR OVERLOADING AS MEMBER FUNCTION************************
 
// //               *********OVERLOADING PREINCREMENT OPERATOR***********

// #include<iostream>
// using namespace std;
// class counter{
//     int c;
//     public:
//     counter(){
//          c=0;
//     }
//     counter(int n){
//         c=n;
//     }
//     void show(){
//         cout<<c<<endl;
//     }
//     void operator ++();

// };

// void counter ::operator ++(){
//       ++c;
// }

// int main(){
//     counter c1(10);
//     c1.show();
//     ++c1;
//     c1.show();
//     return 0;
// }

// //                           ***************************

// #include<iostream>
// using namespace std;
// class counter{
//     int c;
//     public:
//     counter(){
//         c=0;
//     }
//     counter(int n){
//         c=n;
//     }
//     void show(){
//         cout<<c<<endl;
//     }
//     counter operator ++();
// };

// counter counter ::operator ++(){
//         counter temp;
//         ++c;
//         temp.c=c;
//         return temp;
// }

// int main(){
//     counter c1(10);
//     counter c2;
//     c1.show();
//     c2=++c1;
//     c2.show();
//     return 0;
// }


// //         *********OVERLOADING POSTINCREMENT OPERATOR***********

// #include<iostream>
// using namespace std;
// class counter{
//     int c;
//     public:
//     counter(){
//         c=0;
//     }
//     counter(int n){
//         c=n;
//     }
//     void show(){
//         cout <<c<<endl;
//     }
//     void operator++(int);  //int is not argument,it is a part of syntax for postincrement.
// };

// void counter::operator++(int){
//     c++;
// }

// int main(){
//     counter c1(10);
//     c1.show();
//     c1++;
//     c1.show();
//     return 0;
// }

// //                           ***************************

// #include<iostream>
// using namespace std;
// class counter{
//     int c;
//     public:
//     counter(){
//         c=0;
//     }
//     counter(int n){
//         c=n;
//     }
//     void show(){
//         cout<<c<<endl;
//     }
//     counter operator++(int);
// };

// counter counter::operator++(int){
//     counter temp;
//     temp.c=c++;
//     return temp;
// }

// int main(){
//     counter c1(10);
//     counter c2;
//     c1.show();
//     c2.show();
//     c2=c1++;
//     c1.show();
//     c2.show();
//     return 0;
// }

// //****************OPERATOR OVERLOADING AS FRIEND FUNCTION************************

//   //               ***********PREINCREMENT*********
//   //                   *****SOLUTION 01******

// #include<iostream>
// using namespace std;
// class counter{
//     int c;
//     public:
//     counter(){
//         c=0;
//     }
//     counter(int n){
//         c=n;
//     }
//     void show(){
//         cout<<c<<endl;
//     }
//     friend void operator++(counter &);
// };

// void operator++(counter &p){
//     p.c=++p.c;
// }

// int main(){
//     counter c1(10);
//     c1.show();
//     ++c1;
//     c1.show();
//     return 0;
// }

// //                        *****SOLUTION 02******

// #include<iostream>
// using namespace std;
// class counter{
//     int c;
//     public:
//     counter(){
//         c=0;
//     }
//     counter(int n){
//         c=n;
//     }
//     void show(){
//         cout<<c<<endl;
//     }
//     friend counter operator++(counter &);
// };

// counter operator++(counter &p){
//    counter temp;
//     temp.c=++p.c;
//     return temp;
// }
 
// //    *****or*****
// // counter operator++(counter &p){
// //     return ++p.c;
// // }

// int main(){
//     counter c1(10);
//     counter c2;
//     c1.show();
//     c2.show();
//     c2=++c1;
//     c1.show();
//     c2.show();
//     return 0;
// }


// //**********************OVERLOADING BINARY PLUS OPERATOR******************************

// //                     *********AS A MEMBER FUNNCTION********

// #include<iostream>
// using namespace std;
// class distanc{
//     int feet;
//     int inches;
//     public:
//     void get(){
//         cout<<"Enter feet and inches:";
//         cin>>feet>>inches;
//     }
//     void show(){
//         cout<<feet<<", "<<inches<<endl;
//     }
//     distanc operator +(distanc &);
// };

// distanc distanc::operator +(distanc &p){
//     distanc temp;
//     temp.feet=feet+p.feet;
//     temp.inches=inches+p.inches;
//     if(temp.inches>=12){
//         temp.feet=temp.feet+temp.inches/12;
//         temp.inches=temp.inches%12;
//     }
//     return temp;
// }

// int main(){
//     distanc d1,d2,d3;
//     d1.get();
//     d2.get();
//     d1.show();
//     d2.show();
//     d3=d1+d2;
//     d3.show();
//     return 0;
// }


// //                     *********AS A FRIEND FUNNCTION********

// #include<iostream>
// using namespace std;
// class distanc{
//     int feet;
//     int inches;
//     public:
//     void get(){
//         cout<<"Enter feet and inches:";
//         cin>>feet>>inches;
//     }
//     void show(){
//         cout<<feet<<", "<<inches<<endl;
//     }
//     friend distanc operator +(distanc &,distanc &);
// };

// distanc operator +(distanc &p,distanc &q){
//     distanc temp;
//     temp.feet=q.feet+p.feet;
//     temp.inches=q.inches+p.inches;
//     if(temp.inches>=12){
//         temp.feet=temp.feet+temp.inches/12;
//         temp.inches=temp.inches%12;
//     }
//     return temp;
// }

// int main(){
//     distanc d1,d2,d3;
//     d1.get();
//     d2.get();
//     d1.show();
//     d2.show();
//     d3=d1+d2;
//     d3.show();
//     return 0;
// }


// //***********************************INHERITANCE**********************************

// //            *********SINGLE INHERITANCE(public mode)***************

// #include<iostream>
// using namespace std;
// class box{
//     int l,b,h;
//     public:
//     void get(){
//         cout<<"Enter length ,breadth and height: ";
//         cin>>l>>b>>h;
//     }
//     void show(){
//         cout<<l<<","<<b<<","<<h<<endl;
//     }
// };

// class carton :public box{
//     string name;
//     public:
//     void set(){
//         cout<<"Enter material name: ";
//         cin>>name;
//     }
//     void display(){
//         cout<<"Material is "<<name<<endl;
//     }
// };

// int main(){
//     carton b1;
//     b1.get();
//     b1.set();
//     b1.show();
//     b1.display();
//     return 0;

// }


// //                       *******OVERRIDING***********

// #include<iostream>
// #include<string>
// using namespace std;
// class box{
//     int l,b,h;
//     public:
//     void get(){
//         cout<<"Enter length ,breadth and height:";
//         cin>>l>>b>>h;
//     }
//     void show(){
//         cout<<l<<", "<<b<<", "<<h<<endl;
//     }
// };

// class carton :public box{
//     string name;
//     public:
//     void set(){
//         cout<<"Enter material name: ";
//         cin>>name;
//     }
//     void show(){
//         cout<<"Material is "<<name<<endl;
//     }
// };

// int main(){
//     carton c;
//     c.get();
//     c.set();
//     c.box::show();
//     c.show();
//     return 0;
// }


// //            *********SINGLE INHERITANCE(protected mode)***************

// #include<iostream>
// #include<string>
// using namespace std;
// class box{
//     int l,b,h;
//     public:
//     void get(){
//         cout<<"Enter length ,breadth and height:";
//         cin>>l>>b>>h;
//     }
//     void show(){
//         cout<<l<<", "<<b<<", "<<h<<endl;
//     }
// };

// class carton :protected box{
//     string name;
//     public:
//     void set(){
//         get();
//         cout<<"Enter matterial name: ";
//         cin>>name;
//     }
//     void display(){
//         show();
//         cout<<"Material is "<<name<<endl;
//     }
// };

// int main(){
//     carton c;
//     c.set();
//     c.display();
//     return 0;
// }

// //            *********SINGLE INHERITANCE(private mode)***************

// #include<iostream>
// #include<string>
// using namespace std;
// class box{
//     int l,b,h;
//     public:
//     void get(){
//         cout<<"Enter length ,breadth and height:";
//         cin>>l>>b>>h;
//     }
//     void show(){
//         cout<<l<<", "<<b<<", "<<h<<endl;
//     }
// };

// class carton :private box{
//     string name;
//     public:
//     void set(){
//         get();
//         cout<<"Enter matterial name: ";
//         cin>>name;
//     }
//     void display(){
//         show();
//         cout<<"Material is "<<name<<endl;
//     }
// };

// int main(){
//     carton c;
//     c.set();
//     c.display();
//     return 0;
// }


// //            *********MULTILEVEL INHERITANCE(public mode)***************

// #include<iostream>
// using namespace std;
// class num{
//     protected:
//     int a,b;
//     public:
//     void get(){
//         cout<<"Enter two integer: ";
//         cin>>a>>b;
//     }
//     void show(){
//         cout<<a<<", "<<b<<endl;
//     }
// };

// class add:public num{
//     int c;
//     public:
//     void sum(){
//         c=a+b;
//     }
//     void display(){
//         cout<<"Sum is "<<c<<endl;
//     }
// };

// class difference :public add{
//     int d;
//     public:
//     void diff(){
//         d=a-b;
//     }
//     void print(){
//         cout<<"Difference is "<<d<<endl;
//     }
// };

// int main(){
//     difference obj;
//     obj.get();
//     obj.show();
//     obj.sum();
//     obj.display();
//     obj.diff();
//     obj.print();
//     return 0;

// }




// //            *********MULTILEVEL INHERITANCE(protected mode)***************


// #include<iostream>
// using namespace std;
// class num{
//     protected:
//     int a,b;
//     public:
//     void get(){
//         cout<<"Enter two integer: ";
//         cin>>a>>b;
//     }
//     void show(){
//         cout<<a<<", "<<b<<endl;
//     }
// };

// class add:protected num{
//     int c;
//     public:
//     void set(){
//         get();
//     }
//     void sum(){
//         c=a+b;
//     }
//     void display(){
//         show();
//         cout<<"Sum is "<<c<<endl;
//     }
// };

// class difference :protected add{
//     int d;
//     public:
//     void accept(){
//         set();
//     }
//     void diff(){
//         sum();
//         d=a-b;
//     }
//     void print(){
//         display();
//         cout<<"Difference is "<<d<<endl;
//     }
// };

// int main(){
//     difference obj;
//     obj.accept();
//     obj.diff();
//     obj.print();
//     return 0;

// }

// // ******************************MULTIPLE INHERITANCE *********************************

// #include<iostream>
// using namespace std;
// class figure{
//     protected:
//     int breadth,length;
//     public:
//     void get(){
//         cout<<"Enter length and breadth:";
//         cin>>length>>breadth;
//     }
//     void show(){
//         cout<<"length is "<<breadth<<" and Breadth is "<<length<<endl;
//     }
// };

// class printdeta{
//     public:
//     void print(int a){
//         cout<<"Area is "<<a<<endl;
//     }
// };

// class rectangle :public figure,public printdeta{
//     int area;
//     public:
//     void calculate(){
//         area=length *breadth;
//         print(area);
//     }
// };

// int main(){
//     rectangle r;
//     r.get();
//     r.show();
//     r.calculate();
//     return 0;
// }


// //*********************AMBIGUITY ERROR IN MULTIPLE INHERITANCE**************************

// #include<iostream>
// using namespace std;
// class figure{
//     protected:
//     int l,b;
//     public:
//     void get(){
//         cout<<"Enter length and breadth:";
//         cin>>l>>b;
//     }
//     void show(){
//         cout<<"Length is "<<l<<" and breadth is "<<b<<endl;
//     }
// };

// class printdeta{
//     public:
//     void show(int a){
//         cout<<"Area is "<<a<<endl;
//     }
// };

// class rectangle :public figure,public printdeta{
//     int area;
//     public:
//     int calculate(){
//         area=l*b;
//         return area;
//     }
// };

// int main(){
//     int x;
//     rectangle r;
//     r.get();
//     r.figure::show();
//     x=r.calculate();
//     r.printdeta::show(x);
//     return 0;

// }


// //*******************BEHAVIOUR OF CONSTRUCTOR AND DESTRUCTOR IN INHERITANCE***************

// #include<iostream>
// using namespace std;
// class A{
//     public:
//     A(){
//         cout<<"Constructor of base class A called."<<endl;
//     }
//     ~A(){
//         cout<<"Destructor of  base class A called."<<endl;
//     }
// };

// class B :public A{
//     public:
//     B():A(){
//         cout<<"Constructor of derived class B called."<<endl;
//     }
//     ~B(){
//         cout<<"Destructor of Derived class B called."<<endl;
//     }
// };

// int main(){
//     B obj;
//     return 0;
// }

// //***********************CALLING PARAMETROISED CONSTRUCTOR IN INHERITANCE*****************

// #include<iostream>
// using namespace std;
// class A{
//     public:
//     A(int i){
//         cout<<"Construtor of base class A called  i= "<<i<<endl;
//     }
//     ~A(){
//         cout<<"Destructor of base class A called."<<endl;
//     }
// };

// class B:public A{
//     public:
//     B():A(10){       //Constructor call
//         cout<<"Constructor of derived class B called."<<endl;
//     }
//     ~B(){
//         cout<<"Destructor of derived class B called."<<endl;
//     }
// };

// int main(){
//     B obj;
//     return 0;
// }

// *********************************HIRARECHICAL INHERITANCE************************

// #include<iostream>
// using namespace std;
// class shape{
//     protected:
//     int dim1,dim2;
//     public:
//     void get(){
//         cout<<"Enter dimensions: ";
//         cin>>dim1>>dim2;
//     }
//     void show(){
//         cout<<dim1<<","<<dim2<<endl;
//     }
// };

// class rectangle:public shape{
//     public:
//     void area(){
//         cout<<"Area of rectangle is "<<dim1*dim2<<endl;
//     }
// };

// class triangle: public shape{
//     public:
//     void area(){
//         cout<<"Area of triangle is "<<0.5*dim1*dim2<<endl;
//     }
// };

// int main(){
//     rectangle r;
//     triangle t;
//     r.get();
//     t.get();
//     r.show();
//     r.area();
//     t.show();
//     t.area();
//     return 0;
// }

// //****************************HYBRID / VIRTUAL INHERITANCE*************************** 

// //              ****************RESOLVING DIAMOND PROBLEM************* 

// #include<iostream>
// using namespace std;
// class base{
//     public:
//     int a;
// };

// class drv1:virtual public base{
//     public:
//     int b;
// };

// class drv2: virtual public base{
//     public:
//     int c;
// };

// class drv3 :public drv1,public drv2{
//     public:
//     int d;
// };

// int main(){
//     drv3 obj;
//     obj.a=10;
//     obj.b=20;
//     obj.c=30;
//     obj.d=obj.a+obj.b+obj.c;
//     cout<<obj.c<<endl;
// }


// //****************************DYNAMIC MEMORY ALLOCATION**************************

// #include<iostream>
// using namespace std;
// class box{
//     int l,b,h;
//     public:
//     void get(){
//         cout<<"Enter length ,breadth and height: ";
//         cin>>l>>b>>h;
//     }
//     void show(){
//         cout<<"Lenght is "<<l<<", Breadth is "<<b<<" and height is "<<h<<endl;
//     }
// };

// int main(){
//     box *p=new box;
//     // p=new box;
//     p->get();
//     p->show();
//     delete p;
//     return 0;
// }


// //**********************************RUN TIME POLYMORPHISM******************************

// #include<iostream>
// using namespace std;
// class base{
//     public:
//     virtual void show(){
//         cout<<"In show of base."<<endl;
//     }
// };

// class drv :public base{
//     public:
//     void show(){
//         cout<<"In show of derive."<<endl;
//     }
// };

// int main(){
//     base *p;
//     base b;
//     drv d;
//     p=&b;
//     p->show();
//     p=&d;
//     p->show();
//     return 0;
// }

// //********************VIRTUAL FUNCTION AND MULTILEVEL INHERITENCE*********************


// #include<iostream>
// using namespace std;
// class base{
//     public:
//     virtual void show(){
//         cout<<"In show of base class."<<endl;
//     }
// };

// class drv1:public base{
//     public:
//     void show(){
//         cout<<"In show of drv1 class."<<endl;
//     }
// };

// class drv2:public drv1{
//     public:
//     void show(){
//         cout<<"In show of drv2 class."<<endl;
//     }
// };

// int main(){
//     base *p;
//     base b;
//     drv1 d1;
//     drv2 d2;
//     p=&b;
//     p->show();
//     p=&d1;
//     p->show();
//     p=&d2;
//     p->show();
//     return 0;
// }

                    
// //***********************BENIFITS OF RUN TIME POLYMORPHISM*************************
// //***********************BENIFITS OF VITUAL FUNCTION*******************************
// //***********************OPTIMUM MEMORY UTILIZATION********************************

// #include<iostream>
// using namespace std;

// class figure_2D{
//     protected:
//     int dim1,dim2;
//     public:
//     void get(){                                  // early binding;
//         cout<<"Enter dimensions: ";
//         cin>>dim1>>dim2;
//     }
//     void show(){                                 // early binding;
//         cout<<"Dimensions are :"<<dim1<<" and "<<dim2<<endl;
//     }
//     virtual void area()=0;           //late binding;  pure virtual function/abstract method
// };                                                         //Abstract class

// class rectangle:public figure_2D{
//     public:
//     void area(){
//         cout<<"Area of rectangle is "<<dim1*dim2<<endl;
//     }
// };

// class triangle:public figure_2D{
//     public:
//     void area(){
//         cout<<"Area of triangle is "<<0.5*dim1*dim2<<endl;        
//     }
// };

// int main(){
//     figure_2D *p;
//     int choice;
//     do{
//     cout<<"Please select figure:"<<endl;
//     cout<<"1.Rectangle "<<endl<<"2.Triangle."<<endl;
//     cin>>choice;
//     switch(choice){
//         case 1:
//         p=new rectangle;    //memory will allocated at run time.
//         p->get();
//         p->show();
//         p->area();          //Runtime polymorphism
//         delete p;
//         break;

//         case 2:
//         p=new triangle;    //memory will allocated at run time.
//         p->get();
//         p->show();
//         p->area();         //Runtime polymorphism
//         delete p;
//         break;

//         default:
//         cout<<"Wrong choice! Try again."<<endl;

//     }
//     }while(choice !=1 && choice !=2);
//     return 0;

// }


// // we can not create object for abstract class.



// //                    ********************* END *************************
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,rem=0,x,anurag;
//     int a[]={1,2,5,10,50,100};
//     cout<<"enter your number:";
//     cin>>n;
//     for(i=5;i>=0;i--){
//         x=a[i];
//         rem=rem+(n/x);
//         anurag=n%x;
//         n=anurag;

//     }
//     cout<<"Least no of notes is: "<<rem;
//     return 0;

// }
