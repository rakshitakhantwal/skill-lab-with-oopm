package enheritence;

import java.util.Scanner;

class Person{
    Scanner in = new Scanner(System.in);
    String name;
    String address; 
    int age;
    Person()
    {
        name = "";
        address = "";
        age = 0;
    }
    void display()
    {
        System.out.println("Name : "+name);
        System.out.println("Age : "+age);
        System.out.println("Address : "+address);
    }
    void getDetails()
    {
        System.out.println("Enter name : ");
        name = in.nextLine();
        System.out.println("Enter address : ");
        address = in.nextLine();
        System.out.println("Enter age : ");
        age = in.nextInt();
    }
}
class Employee extends Person{
    int empID; double salary;
    Employee()
    {
        empID = 0;
        salary = 0.0;
    }
    void getDetails()
    {
        super.getDetails();
        System.out.println("Enter Employee ID : ");
        empID = in.nextInt();
        System.out.println("Enter base salary : ");
        salary = in.nextDouble();
    }
    void display()
    {
        super.display();
        System.out.println("Employee ID : "+empID);
        System.out.println("Base Salary : Rs."+salary);
    }
}
public class Programmer extends Employee
{
    double hike; String skills;
    Programmer()
    {
        hike = 0;
        skills = "";
    }
    void getDetails()
    {
        super.getDetails();
        System.out.println("Enter salary hike : ");
        hike = in.nextDouble();
        System.out.println("Enter technical skills : ");
        in.nextLine();
        skills = in.nextLine();
       
    }
    void display()
    {
        super.display();
        System.out.println("Salary Hike : Rs."+hike);
        System.out.println("Total salary : Rs."+(salary+hike));
        System.out.println("Technical skills : "+skills);
    }

    public static void main(String args[])
    {
        System.out.println("Enter details for 1st programmer");
        Programmer obj1 = new Programmer();
        obj1.getDetails();
       
        System.out.println("Enter details for 2nd programmer");
        Programmer obj2 = new Programmer();
        obj2.getDetails();
        ;
        System.out.println("Enter details for 3rd programmer");
        Programmer obj3 = new Programmer();
        obj3.getDetails();
        
        System.out.println("\nDetails of 1st programmer");
        obj1.display();
        System.out.println("\nDetails of 2nd programmer");
        obj2.display();
        System.out.println("\nDetails of 3rd programmer");
        obj3.display();
    }
}
