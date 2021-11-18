import java.util.Scanner;

interface Management
{
	public void selectCandidate();
}

interface Department
{
	public void allotSubject();
}
public class HOD implements Management,Department
{
	 public void selectCandidate() 
	 {
		 System.out.println("Industrial");
	 }
		 
	 public void allotSubject()
	 {
	 System.out.println("Fluid mechanics");
	 }
	public static void main(String args[])
	{
	HOD obj = new HOD();
	obj.allotSubject();
	obj.selectCandidate();
    }
}
