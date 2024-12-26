/* 5. Write a program for validating matrix. [Hint: Square matrix ] */
import java.util.*;

class Excercise5
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
		try 
		{
			System.out.println("Enter dimensions of the Matrix");    	
			int m = in.nextInt();
			int n = in.nextInt();
			in.close();
			if(m!=n) 
				throw new MyException("Dimensions of the matrix aren't equal: Not a Square Matrix.");
		} 
		catch (MyException e) 
		{
			System.out.println(e);
		}
	}
}

class MyException extends Exception 
{
    public MyException(String errorMessage) 
	{
        super(errorMessage);
    }
}