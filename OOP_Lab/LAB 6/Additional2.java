class Bike
{
    int speedlimit = 100;
    void run()
    {
        System.out.println("Speedlimit in Bike: "+speedlimit);
    }
}

class Splendar extends Bike
{
    int speedlimit = 150;
    void run()
    {
        System.out.println("Speedlimit in Splendar: "+speedlimit);
    }
}

public class Additional2 
{
    public static void main(String args[])
    {
        Bike bike = new Bike();
        Splendar splendar = new Splendar();
        bike.run();
        splendar.run();
    }
}
