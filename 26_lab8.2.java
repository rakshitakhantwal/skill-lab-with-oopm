import java.util.Scanner;

class employee1 {
    int EmpID;
    float salary;
    void setdetails()
    {
        Scanner t = new Scanner(System.in);
        System.out.println("Enter your ID =");
        EmpID= t.nextInt();
        System.out.println("Enter your Salary =");
        salary= t.nextFloat();
    }
}

class PermanentEmp extends employee1{
    double hike = 0.5;
    void generatesalary()
    {
        System.out.println("Salary of permanent employee is Rs." +(salary + (salary * hike)) ); 
    }
}

class TemperoryEmp extends employee1{
    double hike = 0.2;
    void generatesalary()
    {
        System.out.println("Salary of temporary employee is Rs." +(salary + (salary * hike)) );
    }
}

public class employee
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter 1 for Permanent Employee and 2 for Temporary Employee");
        int choice = in.nextInt();
        switch(choice)
        {
            case 1 :
            PermanentEmp p = new PermanentEmp();
            p.setdetails();
            p.generatesalary();
            break;
            case 2:
            TemperoryEmp t = new TemperoryEmp();
            t.setdetails();
            t.generatesalary();
            break;
            default:
            System.out.println("Invalid choice");
        }
        
    }
}

