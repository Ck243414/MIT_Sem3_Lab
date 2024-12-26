/* 4. Create a user defined exception class which displays error message */
class Excercise4
{
	public static void main(String args[])
    {
        try
        {
                throw new MyException("This is my error message.");
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