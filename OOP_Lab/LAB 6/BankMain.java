import java.util.Scanner;

class Bank{
    int getRateOfInterest(){
        return 0;    
    }
    double Interest(double P,double R, double T)
    {
        return (P*R*T/100);
    }
}

class SBI extends Bank {
    int getRateOfInterest() {
        return 8;
    }
}

class ICICI extends Bank {
    int getRateOfInterest() {
        return 7;
    }
}

class AXIS extends Bank {
    int getRateOfInterest() {
        return 9;
    }
}  

public class BankMain
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter Principal Amount: "); double P = in.nextDouble();
        System.out.println("Enter Time in years: "); double T = in.nextDouble();
        SBI sbi = new SBI();
        ICICI icici = new ICICI();
        AXIS axis = new AXIS();
        System.out.println("Interest in SBI: " + sbi.Interest(P, sbi.getRateOfInterest(), T));
        System.out.println("Interest in ICICI: " + icici.Interest(P, icici.getRateOfInterest(), T));
        System.out.println("Interest in AXIS: " + axis.Interest(P, axis.getRateOfInterest(), T));
        in.close();
    }
}