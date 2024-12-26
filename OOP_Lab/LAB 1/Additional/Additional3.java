import java.util.Scanner;
class Additional3
{
	public static void main(String args[])
	{
		int a,i;
		Scanner in = new Scanner(System.in);
		System.out.println("Enter a number: ");
		a = in.nextInt();
		System.out.println("Multiplication table of number: ");
		for(i=1;i<=10;i++)
		{
			System.out.println(a + " * " + i + " = " + (a*i));
		}
	}
}