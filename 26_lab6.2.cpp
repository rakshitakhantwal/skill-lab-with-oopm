/*
  To perform Hierarchical Inheritance in C++.
  Create an Employee class with attributes EmpID and EmpSalary. 
  Also create necessary methods/constructors to accept these values from the user.
  Create classes permenantEmployee and TemporaryEmployee which will be derived classes of Employee.
  Mention hike attribute in these derived classes and calculate the total salary using generate_salary() method for respective types of employees. 
  Objects of the derived classes should be created and salaries for the permanent and temporary employees should be calculated and displayed on the screen.
*/

#include<iostream>
using namespace std;

class Employee{
public:
  int EmpID;
  char Employee_name[50];
  float EmpSalary;
  float DA;
  float IT;
  float Salary;

public:  
  void set_details()             
  {
    cout<<"Enter Employee ID"<<endl;
    cin>> EmpID ;
    cout<<"Enter Employee name "<<endl;
    cin>>Employee_name;
  }
public:
  int get_empid() {
    return this->EmpID;
  }
};


class PermanentEmployee : public Employee{
public:
  void calculate_details()     
  //basic salary for permanent employee= 30000  
  {
    DA=1.32*30000;
    IT=0.30*(30000+DA);
    Salary=(30000+DA)-IT;	
  }
public:
  void print_details()           
  {
    cout<<"Employ Basic Salary : "<<30000<<endl;
    cout<<"Employ DA : "<<DA<<endl;
    cout<<"Employ IT : "<<IT<<endl;
    cout<<"Employ Salary : "<<Salary<<endl;
  }
};
class TemperoryEmployee : public Employee{
  //basic salary for temperory employee= 20000;
public:
  void calculate_details()       
  {
    DA=1.32*20000;
    IT=0.30*(20000+DA);
    Salary=(20000+DA)-IT;	
  }

  void print_details()           
  {
    cout<<"Employ Basic Salary : "<<20000<<endl;
    cout<<"Employ DA : "<<DA<<endl;
    cout<<"Employ IT : "<<IT<<endl;
    cout<<"Employ Salary : "<<Salary<<endl;
  }
};

int main(){
  Employee e;
  e.set_details();
  int a = e.get_empid();
  if(a<=10) {
    PermanentEmployee pe;
    pe.calculate_details();
    pe.print_details();
    cout<<"permanent employee"<<endl;
  }
  else {
    TemperoryEmployee te;
    te.calculate_details();
    te.print_details();
    cout<<"temp employee"<<endl;
  }
  return 0;
}
