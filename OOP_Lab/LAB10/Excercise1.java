/* 1. Write a program that handles NumberFormatException. 
[ Hint: Invalid conversion of a string to a number] */

import java.util.Scanner;

class Excercise1
{
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter a number: ");
        String i = in.nextLine();
        try
        {
            int n = Integer.parseInt(i);
            System.out.println("The number is: "+n);
        }
        catch(NumberFormatException nfe)
        {
            System.out.println("Exception: ");
        }
        in.close();
    }
}
