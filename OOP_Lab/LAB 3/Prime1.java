import java.util.Scanner;

public class Prime1
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int a,b,i,j,flag;
        System.out.println("Enter lower bound: ");
        a = in.nextInt();
        System.out.println("Enter upper bound: ");
        b = in.nextInt();
        System.out.println("Prime numbers between " +a+ " and " +b+ " are: ");
        for(i=a;i<=b;i++)
        {
            if(i==1||i==0)
                continue;
            flag = 1;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
                System.out.println(i);
        }
    }
}