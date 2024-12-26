import java.util.Scanner;

public class Conversion
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);

		System.out.println("Enter an integer:");
		int a = in.nextInt();

		System.out.println("Enter a double:");
		double b = in.nextDouble();

		System.out.println("Enter a character:");
		char c = in.next().charAt(0);

		byte d = (byte) a;
		int e = c;
		byte f = (byte) b;
		int g = (int) b;
		
		System.out.println("int to byte: " + d);
		System.out.println("char to int: " + e);
		System.out.println("double to byte: " + f);
		System.out.println("double to int: " + g);

	}
}