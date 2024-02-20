
//BENEFITS OF INHERITANCE AND VIRTUAL FUNCTION

// #include<iostream>
// using namespace std;

// class Figure{
//     public:
//     virtual void draw()=0;   //->it becomes pure virtual
// };
// class Line:public Figure{
//     int x1,y1,x2,y2;
//     public:
//     Line(int x1,int y1,int x2,int y2){
//         this->x1=x1;
//         this->y1=y1;
//         this->x2=x2;
//         this->y2=y2;
//     }
//     virtual void draw(){
//         cout<<"Drawing A line."<<endl;
//     }
// };
// class Circle:public Figure{
//     int radius;
//     public:
//     Circle(int radius){
//         this->radius=radius;
//     }
//     void draw(){
//         cout<<"Drawing A circle."<<endl;
//     }
// };
// class Rectangle:public Figure{
//     int len,bd;
//     public:
//     Rectangle(int len,int bd){
//         this->len=len;
//         this->bd=bd;
//     }
//     void draw(){
//         cout<<"Drawing A Rectangle."<<endl;
//     }
// };

// int main(){
//     cout<<"Please select an option:"<<endl;
//     cout<<"1.Line"<<endl<<"2.Circle"<<endl<<"3.Rectangle"<<endl;
//     cout<<"Enter your option :";
//     int choice;
//     cin>>choice;
//     Figure *f;
//     switch(choice){
//         case 1:
//             cout<<"Enter four co-ordinate:";
//             int x1,y1,x2,y2;
//             cin>>x1,y1,x2,y2;
//             f=new Line(x1,y1,x2,y2);
//             f->draw();
//             delete f;
//             break;
//         case 2:
//             cout<<"Enter Radius:";
//             int radius;
//             cin>>radius;
//             f=new Circle(radius);
//             f->draw();
//             delete f;
//             break;
//         case 3:
//             cout<<"Enter Length and breadth:";
//             int len,bd;
//             cin>>len,bd;
//             f=new Rectangle(len,bd);
//             f->draw();
//             delete f;
//             break;
//         default:
//             cout<<"Wrong choice!";     
//     }

// }


// PURE VIRTUAL FUNCTION AND ABSTRACT CLASS

//A class containg a pure virtual function is called abstract class.

#include<iostream>
using namespace std;
class Figure{   //now this become abstract class because it contains pure virtual function. it is    used for acheiving run time polymorphism.
    protected:
    int dim1,dim2;
    public:
    void get(){
        cout<<"Enter dimension1 and dimension2:";
        cin>>dim1>>dim2;
    }
    void show(){
        cout<<"Dimensions are :"<<dim1<<","<<dim2<<endl;
    }
    virtual void area()=0;  
    //it is pure virtual function(in java, is is known as abstract method)
    //0 is the part of syntax for declaring pure virtual function
    //pure virtual function are those which do not have any body.
    //we can not create objects of abstract class, but we can create it's pointer. A abstarct calss can have pure virtual function , static member function,constructor ,normal member function etc;
};
class Square:public Figure{
    public:
    void area(){
        cout<<"Area is "<<dim1*dim1<<endl;
    }
};
class Rectangle:public Figure{
    public:
    void area(){
        cout<<"Area is "<<dim1*dim2<<endl;
    }
};
class Triangle:public Figure{
    public:
    void area(){
        cout<<"Area is "<<0.5*dim1*dim2<<endl;
    }
};
int main(){
    cout<<"Please select an option:"<<endl;
    cout<<"1.Square"<<endl<<"2.Rectangle"<<endl<<"3.Triangle"<<endl;
    int choice;
    Figure *f;
    do{
        cout<<"Enter your option :";
        cin>>choice;
        switch(choice){
            case 1:
                f=new Square;
                f->get();
                f->show();
                f->area();
                delete f;
                break;
            case 2:
                f=new Rectangle;
                f->get();
                f->show();
                f->area();
                delete f;
                break;
            case 3:
                f=new Triangle;
                f->get();
                f->show();
                f->area();
                delete f;
                break;
            default:
                cout<<"Wrong choice!Try Again!"<<endl;    
        }
    }while(choice !=1 || choice !=2 || choice !=3);
}

