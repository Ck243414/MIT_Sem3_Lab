import java.util.Scanner;
class Count
{
    static int x = 0;
    Count(){
        x++;
    }
}
class CounterMain
{
    public static void main(String args[])
    {
        Scanner in= new Scanner(System.in);
        Count arr[]=new Count[50];
        int ch,i=0;
        do{
            System.out.println("1. New object");
            System.out.println("2. Exit");
            ch=in.nextInt();
            switch(ch){
                case 1:
                    arr[i++]=new Count();
                    break;
                case 2:
                    System.out.println("Exiting loop");
                    break;
                default: System.out.println("Invalid choice");
            }
        } while(ch!=2);
        System.out.println("Number of objects created = "+Count.x);
    }
}
