/* 3. Write a program to enter student’s Name, Roll Number and Marks in three
subjects and find the percentage, grade and handle NumberFormatException. */

import java.util.Scanner;

public class Excercise3
{
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        String name;
        int rno;
        float marks1, marks2, marks3;
        float totalMarks, percentage;

        try 
        {
            System.out.print("Enter student's name: ");
            name = in.nextLine();
            System.out.print("Enter student's roll number: ");
            rno = Integer.parseInt(in.nextLine());
            System.out.print("Enter marks in subject 1,2,3: ");
            marks1 = in.nextInt();
            marks2 = in.nextInt();
            marks3 = in.nextInt();

            totalMarks = marks1 + marks2 + marks3;
            percentage = (totalMarks / 300) * 100;

            System.out.println("Name: " + name);
            System.out.println("Roll Number: " + rno);
            System.out.println("Total Marks: " + totalMarks);
            System.out.println("Percentage: " + percentage + "%");
            System.out.println("Grade: " + (percentage/10));

        } 
        catch (NumberFormatException e) 
        {
            System.out.println("Exception: Entered Roll Number is not an Integer");
        }
        in.close();
    }
}
