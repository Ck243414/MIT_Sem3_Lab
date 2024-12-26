import java.util.Scanner;
class Account
{
    Scanner in = new Scanner(System.in);

    String name;
    int accno;
    String type;
    double balance = 0;

    void User()
    {
        System.out.println("Enter customers name:");
        name = in.nextLine();
        System.out.println("Enter type of account:");
        type = in.nextLine();
        System.out.println("Enter account number:");
        accno = in.nextInt();
    }

    void Deposit(double deposit)
    {
        balance = balance + deposit;
        System.out.println("Balance updated");
        Display();
    }

    void Display()
    {
        System.out.println("Balance = "+ balance);
    }
}

class Savings extends Account
{
    void Interest()
    {
        System.out.println("Enter rate of interest: ");
        float rate = in.nextFloat();
        System.out.println("Enter time in years: ");
        int time = in.nextInt();
        double interest = balance*rate*time/100;
        Deposit(interest);
    }

    void Withdraw()
    {
        System.out.println("Enter the amount to be withdrawn: ");
        double debit = in.nextDouble();
        if(balance>debit)
        {
            System.out.println("Ammount Withdrawn");
            balance -= debit;
        }
        else
        {
            System.out.println("Insufficient Balance");
        }
        Display();
    }
}

class Current extends Account
{
    double min = 1000;
    void Minimum()
    {
        if(balance < min)
        {
            System.out.println("Balance below minimum balance,Rs.100 service tax is imposed.");
            balance -=100;
            Display();
        }
    }
}

class AccountMain
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter details of Savings account");
        Savings a = new Savings();
        a.User();
        System.out.println("Enter deposit: ");
        double x=sc.nextDouble();
        a.Deposit(x); a.Interest(); a.Withdraw();

        System.out.println("Enter details of Current account");
        Current b = new Current();
        b.User();
        System.out.println("Enter deposit: ");
        double y=sc.nextDouble();
        b.Deposit(y); b.Minimum();
        sc.close();
    }
}