/*  Write a menu driven program to do the following:-
    a. To check whether a string is palindrome or not
    b. Write the string in an alphabetical order
    c. Reverse the string -> NOT WORKING
    d. Concatenate the original string and the reversed string -> NOT WORKING*/

import java.util.Scanner;
class Excercise3
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int option;
        int i,j;

        System.out.println("Enter string:");
        String str = in.nextLine();
        int n = str.length();
        char s[] = str.toCharArray();

        System.out.println("\n1. To check whether a string is palindrome or not");
        System.out.println("2. Write the string in an alphabetical order");
        System.out.println("3. Reverse the string");
        System.out.println("4. Concatenate the original string and the reversed string");
        System.out.println("5. Exit the program");
        
        while(true)
        {
            System.out.print("\nEnter option: ");
            option = in.nextInt();

            switch(option)
            {
                case 1:
                    //To check whether string is palindrome or not
                    int flag = 0;
                    for(i=0;i<n/2;i++)
                    {
                        if(s[i]!=s[n-i-1])
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if(flag!=1)
                        System.out.println("String is a palindrome.");
                    else
                        System.out.println("String is not a palindrome.");   
                    break;

                case 2:
                    //Write the string in an alphabetical order
                    char x[] = s;
                    char temp;
                    for(i=0;i<n-1;i++)
                    {
                        for(j=i+1;j<n;j++)
                        {
                            if(x[i]>x[j])
                            {
                                temp=x[i];
                                x[i]=x[j];
                                x[j]=temp;
                            }
                        }
                    }
                    String sortedstr = new String(x);
                    System.out.println("Sorted string: "+sortedstr);
                    break;

                case 3:
                    //Reverse the string
                    char y[]=s;
                    for(i=0;i<n/2;i++)
                    {
                        y[i]=y[n-i-1];
                    }
                    String strrev = new String(y);
                    System.out.println("Sorted string: "+strrev);
                    break;

                case 4:
                    //Concatenate the original string and the reversed string
                    char z[]=s;
                    for(i=0;i<n/2;i++)
                    {
                        z[i]=z[n-i-1];
                    }
                    String rev = new String(z);
                    System.out.println("Concatenated original string and reversed string: "+str.concat(rev));
                    break;

                case 5:
                    System.out.println("Exiting the program.");
                    System.exit(0);

                default:
                    System.out.println("Invalid Option.");
            }
        }
    }
}