import java.util.Scanner;
class Armstrong
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
		System.out.println("Enter a number: ");
		int n = in.nextInt();
		int digit,num = n, arm=0;
		while(n!=0)
		{	
			digit = n % 10;
			arm = arm + digit*digit*digit;
			n = n/10;
		}
		if(arm == num)
			System.out.println("Armstrong number");
		else
			System.out.println("Not an Armstrong number");
		in.close();
		}
}		