//Write a Java program to replace an entered word to all repeating characters.
import java.util.Scanner;
class Excercise2
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str=in.nextLine();
        System.out.print("Enter a substring to replace: ");
        String substr=in.nextLine();
        if(str.contains(substr))
        {
            System.out.print("Enter a character to replace with: ");
            char x = in.next().charAt(0);
            char s[] = new char[substr.length()];
            for(int i=0;i<substr.length();i++)
            {
                s[i]=x;
            }
            String charstr = new String(s);
            String newstr = str.replaceAll(substr,charstr);
            System.out.print("Replaced string: "+newstr);
        }
        else
        {
            System.out.println("Substring not present");
        }
        in.close();
    }
}
