#include<iostream>
using namespace std;
class Student
{
	public:
	string name;
	int roll_no;
	string div;
	float cgpa;
	void getdata()
	{
		cout<<"Enter the name of the student:  "<<endl;
		cin>>name;
		cout<<"Enter the roll-no of the student: "<<endl;
		cin>>roll_no;
		cout<<"Enter the Division of the student: "<<endl;
		cin>>div;
		cout<<"Enter the cgpa of the student: "<<endl;
		cin>>cgpa;
	
	}
	/*int getdata(string n,int r,char d,float c)
	{
		name=n;
		roll_no=r;
		div=d;
		cgpa=c;
		return 0;
	}*/
	void printdata()
	{
		
		cout<<"Name of the student: "<<name<<endl;
		cout<<"Roll-no of the student: "<<roll_no<<endl;
		cout<<"Division of the student: "<<div<<endl;
		cout<<"The cgpa obtained by the student: "<<cgpa<<endl;
		
		
		
	}
};

		int main()
		{
		Student StudentTest;

		Student s1;
		s1.getdata();
		s1.printdata();
		Student s2;
		s2.name="Ram";
		s2.roll_no=25;
		s2.div="A";
		s2.cgpa=8.8;
	
		s2.printdata();
	
		return 0;
	}
