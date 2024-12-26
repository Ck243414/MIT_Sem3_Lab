import java.util.Scanner;

public class Additional2
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
		int a,b,c,s,l;
		System.out.println("Enter a, b and c: ");
		a = in.nextInt();
		b = in.nextInt();
		c = in.nextInt();
		l = (a>b) ? ( (a>c) ? a : c ) : ( (b>c) ? b : c ) ;
		s = (a<b) ? ( (a<c) ? a : c ) : ( (b<c) ? b : c ) ;
		System.out.println("Largest: " + l + "\nSmallest: " + s);

	}
}
	