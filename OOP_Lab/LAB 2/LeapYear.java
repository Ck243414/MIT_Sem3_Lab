import java.util.Scanner;
public class LeapYear
{
	public static void main(String args[])
	{	
		Scanner in = new Scanner(System.in);
		boolean leap = false;
		System.out.println("Enter year:");
		int year = in.nextInt();
	
		if ( year % 4 == 0 )
		{
			if ( year % 100 == 0 )
			{
				if ( year % 400 == 0 )
					leap = true ;
				else
					leap = false;
			}
			else 
				leap = true;
		}
	
		if ( leap == true )
			System.out.println("Leap year");
		else 
			System.out.println("Not leap year");
	}
}