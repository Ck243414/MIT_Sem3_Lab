import java.util.Scanner;
interface Shape
{
    double area();
}

class Rectangle implements Shape
{
    double length;
    double width;
    Rectangle(double length,double width)
    {
        this.length=length;
        this.width=width;
    }
    public double area()
    {
        return width*length;
    }
}

class Circle implements Shape
{
    double radius;
    Circle(double radius)
    {
        this.radius=radius;
    }
    public double area()
    {
        return 3.1416*radius*radius;
    }
}

class Square implements Shape
{
    double side;
    Square(double side)
    {
        this.side=side;
    }
    public double area()
    {
        return side*side;
    }
}

class Triangle implements Shape
{
    double base;
    double height;
    Triangle(double base,double height)
    {
        this.base=base;
        this.height=height;
    }
    public double area()
    {
        return 0.5*base*height;
    }
}

public class AreaInterface
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter Length of Rectangle: ");
        double length = in.nextDouble();
        System.out.println("Enter Width of Rectangle: ");
        double width = in.nextDouble();
        Rectangle R = new Rectangle(length,width);

        System.out.println("Enter Radius of Circle: ");
        double radius = in.nextDouble();
        Circle C = new Circle(radius);

        System.out.println("Enter Side of Square: ");
        double side = in.nextDouble();
        Square S = new Square(side);

        System.out.println("Enter Base of Traingle: ");
        double base = in.nextDouble();
        System.out.println("Enter Height of Traingle: ");
        double height = in.nextDouble();
        Triangle T = new Triangle(base,height);

        System.out.println("Area of Rectangle: "+R.area());
        System.out.println("Area of Circle: "+C.area());
        System.out.println("Area of Square: "+S.area());
        System.out.println("Area of Triangle: "+T.area());
        in.close();
    }
}

