import java.util.*;
import java.lang.Math;

class Series{
public static void main(String args[]) {

double sin=0,sum,fact=1,j=2,x=1;
Scanner sc= new Scanner(System.in);
System.out.println("Enter a number ");
double n=sc.nextDouble();

//Part A
for(int i=1;i<n;i++){
	fact=fact*i;
	sin=sin+(Math.pow(-1,j))*(Math.pow(x,i)/fact);
	j++;}
System.out.println(" "+sin);

//Part B
sum=n;

System.out.println(" "+sum);





}}