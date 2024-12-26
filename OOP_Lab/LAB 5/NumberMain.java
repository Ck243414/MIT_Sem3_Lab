import java.util.Scanner;

class Number{
    private double x;
    Number(double var){
        x = var;
    }
    boolean isZero(){
        if(x==0) return true;
        else return false;
    }
    boolean isPositive(){
        if(x>0) return true;
        else return false;
    }
    boolean isNegative(){
        if(x<0) return true;
        else return false;
    }
    boolean isOdd(){
        if(x % 2 != 0) return true;
        else return false;
    }
    boolean isEven(){
        if(x % 2 == 0) return true;
        else return false;
    }
    boolean isPrime(){
       if(x > 1){
            int i,flag=1; ;
            for(i=2;i<x;i++){
                if(x%i==0){
                    flag = 0;
                    break;
                }
            }
            if(flag==1) return true;
            else return false;
        }
        return false;
    }
    boolean isArmstrong(){
        int digit,arm=0,num=(int)x;
        while(num!=0)
        {
            digit=num%10;
            arm = arm + digit*digit*digit;
            num/=10;          
        }
        if(arm == x) return true;
        else return false;
    }
}
public class NumberMain {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        System.out.println("Enter number: ");
        double n = in.nextDouble();
        Number obj = new Number(n);
        System.out.println("isZero: "+obj.isZero());
        System.out.println("isPositive: "+obj.isPositive());
        System.out.println("isNegative: "+obj.isNegative());
        System.out.println("isOdd: "+obj.isOdd());
        System.out.println("isEven: "+obj.isEven());
        System.out.println("isPrime: "+obj.isPrime());
        System.out.println("isArmstrong: "+obj.isArmstrong());
        in.close();
    }
}
