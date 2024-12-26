import java.util.Scanner;
class Student_Detail
{
    Scanner in = new Scanner(System.in);
    String name;
    int id;
    Student_Detail()
    {
        System.out.print("Enter name: ");
        name = in.nextLine();
        System.out.print("Enter student_ID: ");
        id = in.nextInt();
    }
    static String college_name = "MIT";
    
    void display_details()
    {
        System.out.println("Name: "+name);
        System.out.println("ID: "+id);
        System.out.println("College: "+college_name);
    }
}

public class StudentMain 
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter number of students: ");
        int n = in.nextInt();
        Student_Detail k[] = new Student_Detail[n];
        System.out.println("\nEnter details of students:");
        for(int i=0;i<n;i++)
        {
            System.out.println("\nStudent "+(i+1)+":");
            k[i] = new Student_Detail();
        }
        System.out.println("\nDetails of students:");
        for(int i=0;i<n;i++)
        {
            System.out.println("\nStudent "+(i+1)+":");
            k[i].display_details();
        }
    }
}