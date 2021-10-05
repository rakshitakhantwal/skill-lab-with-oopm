/* Write a C++ program to

create an Employee class with data members: 

Employee number, Employee name, Basic, DA, IT, Net Salary

class has 3 methods, one method to get employee details for name, ID and basic salary

other method to calculate net salary using formula

	DA=1.32*basic;

	IT=0.30*(basic+DA);

	net_sal=(basic+DA)-IT; 

third method to print emp nam*/
#include<iostream>
using namespace std;

class Employee
{
	public:
	//Delaring attributes
	int Employee_number;
	string Employee_name;
	float Basic;
	float DA;
	float IT;
	float Salary;
	
	void get_details()             
	{
		cout<<"Enter Employee ID"<<endl;
		cin>>Employee_number;
		cout<<"Enter Employee name "<<endl;
		cin>>Employee_name;
		cout<<"Enter Employee Basic Salary"<<endl;
		cin>>Basic;
	}
	void calculate_details()       
	{
		DA=1.32*Basic;
		IT=0.30*(Basic+DA);
		Salary=(Basic+DA)-IT;	
	}
	void print_details()           
	{
		cout<<"Employ Id"<<Employee_number<<endl;
		cout<<"Employ name : "<<Employee_name<<endl;
		cout<<"Employ Basic Salary : "<<Basic<<endl;
		cout<<"Employ DA : "<<DA<<endl;
		cout<<"Employ IT : "<<IT<<endl;
		cout<<"Employ Salary : "<<Salary<<endl;
	}
};
   
    int main()
    {
    Employee E1[1];  //Creating array of objects
    for(int i=0 ; i<1; i++)
    {
    	cout<<"Enter details of Employee:"<<i+1<<endl;
    	E1[i].get_details();
    	E1[i].calculate_details();
        E1[i].print_details();
	}
    return 0;
}
