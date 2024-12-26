import java.util.Scanner;

class Student
{
    Scanner in = new Scanner(System.in);
    int RegNo, age;
    String name;
    Student()
    {
        System.out.println("Enter Name: "); String N = in.nextLine();
        System.out.println("Enter Registration number: "); int R = in.nextInt();
        System.out.println("Enter Age: "); int A = in.nextInt();
        RegNo = R; age = A; name = N; 
    }
}

class UG extends Student
{
    Scanner in = new Scanner(System.in);
    int Sem, fees;
    UG()
    {
        System.out.println("Enter Semester: "); int S = in.nextInt();
        System.out.println("Enter fees: "); int F = in.nextInt();
        Sem = S; fees = F;
    }
    void Display()
    {
        System.out.println("Registration No.: " + RegNo);
        System.out.println("Age: "+ age);
        System.out.println("Name: "+ name);
        System.out.println("Semester: "+ Sem);
        System.out.println("Fees: "+ fees);
    }
}

class PG extends Student
{
    Scanner in = new Scanner(System.in);
    int Sem, fees;
    PG()
    {
        System.out.println("Enter Semester: "); int S = in.nextInt();
        System.out.println("Enter fees: "); int F = in.nextInt();
        Sem = S; fees = F;
    }
    void Display()
    {
        System.out.println("Registration No.: " + RegNo);
        System.out.println("Age: "+ age);
        System.out.println("Name: "+ name);
        System.out.println("Semester: "+ Sem);
        System.out.println("Fees: "+ fees);
    }
}

public class StudentMain
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int u=0,p=0,choice,cont=1;
        UG x[]=new UG[10];
        PG y[]=new PG[10];
        while(cont != 0)
        {
            System.out.println("UG/PG (1/0)?");
            choice = in.nextInt();
            if (choice == 1)
            {
                x[u] = new UG();
                u++;
            } 
            else
            {
                y[p] = new PG();
                p++;
            } 
            System.out.println("Continue (1/0)?");
            cont = in.nextInt();
        }

        System.out.println("Number of UG students: "+ u);
        if (u!=0)
        {
            System.out.println("Details of UG students: ");
            for(int i=0;i<u;i++)
            {
                System.out.println("Student "+(i+1)+":");
                x[i].Display();
            }
        }

        System.out.println("Number of PG students: "+ p);
        if (p!=0)
        {
            System.out.println("Details of PG students: ");
            for(int j=0;j<p;j++)
            {
                System.out.println("Student "+(j+1)+":");
                y[j].Display();
            }
        }
    }
}