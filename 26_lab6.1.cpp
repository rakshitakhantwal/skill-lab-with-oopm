/*
   To perform Multiple Inheritance in C++.
   Create a student class representing student roll number, name and branch and an exam class (derived class of student) 
   representing the scores of the student in various subjects (maths, physics and chemistry) and sports class representing the score in  sports. 
   The sports and exam class isinherited by a result class which adds the exam marks and sports score to generate the final result.
   */

#include<iostream>
#include<conio.h>
using namespace std;

class student {
    protected:	
        int rollno;
        char name[50];
        char branch[10];

    public:
        void getdata() 
        {
            cout << "Enter your roll no.";
            cin >>rollno;
            cout <<"Enter your name:";
            cin>>name;
            cout<<"Enter your branch:";
            cin>>branch;
        }
};

class exam : public student {
    public:
        int math, physics, chemistry;
    public:
        void getmarks() {
            cout<<"Enter marks in maths:";
            cin>>math;
            cout<<"Enter marks in physics:";
            cin>>physics;
            cout<<"Enter marks in chemistry:";
            cin>>chemistry;
        }
};

class sports {
    public:
        int sportscore;
    public: 	
        void getsportsmarks() {
            cout<<endl<<"Enter your sports marks:";
            cin>>sportscore;
        }
};

class result: public exam, public sports{
    float finalresult;
    public:
    void display(){
        finalresult = math+physics+chemistry+sportscore;
        cout<<"\n Final Result: "<< finalresult<<endl;
    }
};

int main(){
    student s1;
    s1.getdata();
    result obj;
    obj.getmarks();
    obj.getsportsmarks();
    obj.display();

    return 0;
}
