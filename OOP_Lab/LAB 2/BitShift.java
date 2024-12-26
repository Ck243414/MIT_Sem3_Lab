import java.util.Scanner;

public class BitShift
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
		int a;
		System.out.println("Enter a number:");
		a = in.nextInt();
		System.out.println(a + " divided by 2 = " + (a >> 1));
		System.out.println(a + " multiplied by 2 = " + (a << 1));
	}
}
