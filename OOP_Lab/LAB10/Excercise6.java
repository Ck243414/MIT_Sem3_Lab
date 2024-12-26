/* 6. Write a program for checking the negative root of a number. [Hint: Input negative number] */
import java.util.Scanner;

public class Excercise6 
{
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a number: ");
        double num = in.nextDouble();
        in.close();
        try 
        {
            if (num<0) 
                throw new Exception();
            double result = Math.sqrt(num);
            System.out.println("Square root of " + num + " is " + result);
        }
        catch(Exception e) 
        {
            System.out.println("Cannot get square root of negative number");
        }
    }
}