#include<iostream>
#include<vector>
using namespace std;
class student
{
    int roll;
    char grade;
    float per;
    public:
    student(){
        cout<<"Non para const called..."<<endl;
        roll=0;
        grade='\0';
        per=0.0;
    }
    student(int roll,char grade,float per){
        cout<<"Triple para const called..."<<endl;
        this->roll=roll;
        this->grade=grade;
        this->per=per;
    }
    student(const student &p){
        cout<<"Copy constructor called..."<<endl;
        roll=p.roll;
        grade=p.grade;
        per=p.per;
    }
    void show(){
        cout<<"Roll="<<roll<<",Grade="<<grade<<",per="<<per<<endl;
    }
    ~student(){
        cout<<"Destructor called...."<<endl;
    }

};

int main(){
    vector <student> v(3);
    for(int i=0;i<v.size();i++){
        int r;
        char g;
        float p;
        cout<<"Enter roll,Grade and percentage:";
        cin>>r>>g>>p;
        student s(r,g,p);
        v[i]=s;
    }
    cout<<"=========Loop finished======="<<endl;

    v.push_back(student(104,'D',98.9));
    for(int i=0;i<v.size();i++){
        v[i].show();
    }
    return 0;
}
