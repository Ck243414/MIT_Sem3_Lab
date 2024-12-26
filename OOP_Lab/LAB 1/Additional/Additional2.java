import java.util.Scanner;
class Additional2
{
	public static void main(String args[])
	{
		int a,i,fact=1;
		Scanner in = new Scanner(System.in);
		System.out.println("Enter a number: ");
		a = in.nextInt();
		for(i=1;i<=a;i++)
		{
			fact=fact*i;
		}
		System.out.println("Factorial of number: "+fact);
	}
}