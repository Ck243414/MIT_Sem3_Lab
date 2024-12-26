import java.util.Scanner;
abstract class Shape
{
    abstract double area();
}

class Rectangle extends Shape
{
    double length;
    double width;
    Rectangle(double length,double width)
    {
        this.length=length;
        this.width=width;
    }
    double area()
    {
        return width*length;
    }
}

class Circle extends Shape
{
    double radius;
    Circle(double radius)
    {
        this.radius=radius;
    }
    double area()
    {
        return 3.1416*radius*radius;
    }
}

class Square extends Shape
{
    double side;
    Square(double side)
    {
        this.side=side;
    }
    double area()
    {
        return side*side;
    }
}

class Triangle extends Shape
{
    double base;
    double height;
    Triangle(double base,double height)
    {
        this.base=base;
        this.height=height;
    }
    double area()
    {
        return 0.5*base*height;
    }
}

class AreaAbstract
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

        Shape Ref;
        Ref = R;
        System.out.println("Area of Rectangle: "+Ref.area());
        Ref = C;
        System.out.println("Area of Circle: "+Ref.area());
        Ref = S;
        System.out.println("Area of Square: "+Ref.area());
        Ref = T;
        System.out.println("Area of Traingle: "+Ref.area());
        in.close();
    }
}
