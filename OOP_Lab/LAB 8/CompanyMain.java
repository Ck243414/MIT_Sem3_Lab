import java.util.Scanner;

interface Sales
{
    int compute();
}

class Hardware implements Sales
{
    Scanner in=new Scanner(System.in);
    static int count=0;
    String category;
    String manufacturer;
    Hardware()
    {
        System.out.println("Hardware category: ");
        category=in.nextLine();
        System.out.println("Manufacturer: ");
        manufacturer=in.nextLine();        
        count++;
    } 
    public int compute(){
        return count;
    }
}

class Software implements Sales{
    Scanner in=new Scanner(System.in);
    static int count=0;
    String type;
    String OS;
    Software()
    {
        System.out.println("Software type: ");
        type=in.nextLine();
        System.out.println("Operating System: ");
        OS=in.nextLine(); 
        count++;
    } 
    public int compute(){
        return count;
    }
}

class CompanyMain
{
    public static void main(String args[])
    {
        int i=0,j=0,ch;
        Scanner in =new Scanner(System.in);
        Hardware h[]=new Hardware[50];
        Software s[]=new Software[50];
        do{
            System.out.println("1.Hardware\n2.Software\n3.Hardware_sales\n4.Software_sales\n5.Exit");
            ch=in.nextInt();
            switch(ch){
                case 1:
                    h[i++]=new Hardware();
                    break;
                case 2:
                    s[j++]=new Software();
                    break;
                case 3:
                    System.out.println("Total hardware sales: "+h[i-1].compute());
                    break;
                case 4:
                    System.out.println("Total software sales: "+s[j-1].compute());
                    break;
                case 5:
                    System.out.println("Exiting program");
                    break;
                default: System.out.println("Invalid input");
            }
        }while(ch!=5);
        in.close();
    }
}
