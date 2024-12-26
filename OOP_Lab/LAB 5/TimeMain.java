class Time
{
    int hour,min,sec;
    Time()
    {
        hour=min=sec=0;
    }
    Time(int h,int m,int s)
    {
        hour = h; min = m; sec = s;
        display();
    }
    void display()
    {
        System.out.println("The time is: "+hour+":"+min+":"+sec);
    }
    void sum(Time t1,Time t2)
    {
        Time R = new Time();
        R.sec = t1.sec + t2.sec;
        R.min = t1.min + t2. min + (R.sec/60);
        R.sec %= 60;
        R.hour = t1.hour + t2.hour + (R.min/60);
        R.min %=60;
        R.display();
    }
}


public class TimeMain
{
    public static void main(String args[])
    {
        Time obj1 = new Time();
        Time obj2 = new Time(2,30,0);
        Time obj3 = new Time(3,20,50);
        obj1.sum(obj2,obj3);
    }
}
