import java.util.Scanner;
class Excercise2
{
	public static void main(String args[])
	{
		int pos=0,neg=0,zero=0,i,a;
		Scanner in = new Scanner(System.in);
		System.out.println("Enter 10 numbers: ");
		for(i=0;i<10;i++)
		{
			a = in.nextInt();
			if(a==0)
				zero++;
			else if(a>0)
				pos++;
			else 
				neg++;
		}
		System.out.println("Number of positive="+pos);
		System.out.println("Number of negative="+neg);
		System.out.println("Number of zeroes="+zero);
	}
}
				