import java.util.Scanner;

class Employee
{
    double da,hra,salary;
    String name,city;
    void getdata()
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter employee name: ");
        name = in.nextLine();
        System.out.println("Enter name of city: ");
        city = in.nextLine();
        System.out.println("Enter salary: ");
        salary = in.nextDouble();
        System.out.println("Enter DA: ");
        da = in.nextDouble();
        System.out.println("Enter HRA: ");
        hra = in.nextDouble();
        in.close();
    }
    double calculate()
    {
        return salary+(salary*da/100)+(salary*hra/100);
    }
    void display()
    {
        System.out.println("Total salary = " + calculate());
    }
}

public class EmpMain
{
    public static void main(String args[])
    {
        Employee obj = new Employee();
        obj.getdata();
        obj.display();
    }
}
