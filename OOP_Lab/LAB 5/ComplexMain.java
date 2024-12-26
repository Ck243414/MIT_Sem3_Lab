class Complex
{
    int real,imag;
    
    Complex() 
    {
        real = imag = 0;
    }

    Complex(int r, int i) 
    {
        real = r; imag = i;
    }

    void add(int n,Complex c)
    {
        real = n + c.real;
        imag = c.imag;
        System.out.println("The result is: "+real+"+i"+imag);
    }

    void add(Complex c1,Complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
        System.out.println("The result is: "+real+"+i"+imag);
    }
}

public class ComplexMain 
{
    public static void main(String args[])
    {
        Complex c1 = new Complex(1,2);
        Complex c2 = new Complex(2,1);
        Complex a1 = new Complex();
        Complex a2 = new Complex();
        a1.add(5,c1);
        a2.add(c1,c2);
    }
}
