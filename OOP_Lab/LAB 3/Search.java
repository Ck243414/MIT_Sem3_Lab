import java.util.Scanner;

public class Search
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int a[]={1,2,3,1,2,1,5,6,7},b,x=0;
        System.out.println("a[]={1,2,3,1,2,1,5,6,7}");
        System.out.println("Search Value: ");
        b=in.nextInt();
        System.out.println("The value is found at locations: ");
        for(int i : a)
        {
            if(i==b)
                System.out.println("a["+(x)+"]");
            x++;
        }
        in.close();
    }
}
