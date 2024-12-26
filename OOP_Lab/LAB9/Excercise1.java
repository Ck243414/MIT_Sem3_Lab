//Write a Java program to count and display the number of characters, words, lines, and vowels in a String.
import java.util.Scanner;
class Excercise1
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        String str;
        
        System.out.print("Enter a string: ");
        str = in.nextLine();
        char c[]=str.toCharArray();
        String word[] = str.split(" +");

        System.out.println("Number of characters: "+str.length());

        int words;
        words=word.length;
        if((str.length()==0)||(c[0]==' '))
            words--;
    
        System.out.println("Number of words: "+words);

        int vowels=0;
        str=str.toLowerCase();
        for(char x:c)
        {
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
                vowels++;
        }
        System.out.println("Number of vowels: "+vowels);
        in.close();
    }
}