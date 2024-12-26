import java.util.Scanner;
class NumArray
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int arr[] = new int[10];
        int k,pal_c=0,prime_c=0,odd_c=0;
        System.out.println("Enter 6 elements: ");
        for(k=0;k<6;k++)
        {
            arr[k]=in.nextInt();
        }
        for(int i : arr)
        {
            int j,flag,n,rd,rev=0;
            if(i%2!=0)
                odd_c ++;
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
                prime_c++;
            n=i;
            while(n!=0)
                {
                    rd=n%10;
                    rev=rev*10+rd;
                    n=n/10;
                }
            if(rev==i)
                    pal_c++;   
        }
        System.out.println("Palindrome count: "+pal_c);
        System.out.println("Prime count: "+prime_c);
        System.out.println("Odd count: "+odd_c);
    }
}
