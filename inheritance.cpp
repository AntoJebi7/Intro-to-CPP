//
// Created by antoa on 14-02-2024.
//
#include <iostream>
#include<string>
using namespace std;

class student{
public:
    std::string name;
    long int rollno;
    int date;
    int month;
    int year;
    void details(){
        cout<<"Enter your name : "<<std::endl;
        cin>>name;
        cout<<"Enter your roll number : "<<std::endl;
        cin>>rollno;
        cout<<"enter your date of birth: date//month//year"<<std::endl;
        cin>>date>>month>>year;
    }
};
class marks:public student{
public:
    int mark = 560;
    void total(){
        cout<<"Total Marks Scored by "<<name<<" of roll number "<<rollno<<" is "<<std::endl;
        cout<<mark<<" out of 600"<<endl;
    }
};
class results:public marks{
public:

    void result(){
        void details();
        void marks();
        if(mark>=250){
            cout<<"PASS"<<std::endl;
        }else{
            cout<<"FAIL"<<std::endl;
        }
    }
};
class getresults:public results{
public:
    void getresult(){
        results r;
        r.details();
        r.total();
        r.result();
    }
};

int main(){
    getresults gr;
    gr.getresult();
    return 0;
}