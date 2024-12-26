import java.util.Scanner;
class Additional1
{
	public static void main(String args[])
	{
		int a,n,rd,rev=0;
		Scanner in= new Scanner(System.in);
		System.out.println("Enter a number: ");
		a = in.nextInt();
		n=a;
		while(n!=0)
		{
			rd=n%10;
			rev=rev*10+rd;
			n=n/10;
		}
		if(a==rev)
			System.out.println("Number is a palindrome");
		else
			System.out.println("Number is not a palindrome");
	}
}

