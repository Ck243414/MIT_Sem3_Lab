import java.util.Scanner;

class Box
{
    double width,height,depth;
    Box(double w,double h, double d)
    {
        width = w; height = h; depth = d;
    }
    double Volume()
    {
        return (width*height*depth);
    }
}

public class BoxMain
{
    public static void main(String args[])
    {
        double w,h,d,vol;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the width: ");
        w = in.nextDouble();
        System.out.println("Enter the height: ");
        h = in.nextDouble();
        System.out.println("Enter the depth: ");
        d = in.nextDouble();
        Box obj = new Box(w,h,d);
        vol = obj.Volume();
        System.out.println("Volume = " + vol);
        in.close();
    }
}