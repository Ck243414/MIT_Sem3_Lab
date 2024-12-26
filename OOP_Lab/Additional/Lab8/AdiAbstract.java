import java.util.*;

abstract class Shape
{
    abstract double area();
}

class Square extends Shape
{
    double length;
    
    Square(double length)
    {
        this.length=length;
        
    }
    public double area()
    {
        return length*length;
    }
}

class Triangle extends Shape
{
    double height;
    double length;
    Triangle(double height,double length)
    {
        this.height=height;
	this.length=length;
    }
    public double area()
    {
        return (0.5)*height*length;
    }
}

class AdiAbstract{
    public static void main(String args[]){

        Scanner in = new Scanner(System.in);
        System.out.println("Enter Length of Square ");
        double length = in.nextDouble();
        Square R = new Square(length);
        System.out.println("Enter Height of Triangle: ");
        double height = in.nextDouble();
	System.out.println("Enter Length of Triangle: ");
        double length1 = in.nextDouble();        
	Triangle C = new Triangle(height,length1);
        Shape S;
        S = R;
        System.out.println("Area of Square: "+S.area());
        S = C;
        System.out.println("Area of Triangle: "+S.area());
        in.close();
    }
}