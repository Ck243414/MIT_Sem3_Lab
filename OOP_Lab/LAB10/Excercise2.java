/* 2. Write a program that handles ArrayOverflowException. 
[ Hint: Consider the array size] */

import java.util.Scanner;
public class Excercise2
{
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = in.nextInt();
        int[] arr = new int[size];
        try
        {
            for (int i = 0; i < size + 1; i++) 
            {
                arr[i] = i;
            }
        } 
        catch (ArrayIndexOutOfBoundsException e) 
        {
            System.out.println("Array index out of bounds exception occurred.");
        }
        in.close();
    }
}

    