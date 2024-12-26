import java.util.*;

class Trace{

public static void main(String args[]) {

Scanner sc= new Scanner(System.in);
System.out.println("Enter order number ");
int m=sc.nextInt();
int n=sc.nextInt();
int[][] arr=new int[50][50];
int sum=0,Norm=0;

System.out.print("Enter Elements");
for(int i=0;i<m;i++) {
	for(int j=0;j<n;j++) {
		arr[i][j]=sc.nextInt();} }

for(int i=0;i<m;i++) {
	for(int j=0;j<n;j++) {
		System.out.print(+arr[i][j]+"\t");}
		System.out.print("\n");}

for(int i=0;i<m;i++) {
	for(int j=0;j<n;j++) {
	Norm=Norm+arr[i][j]*arr[i][j];
	if(i+j==m-1) {
		sum=sum+arr[i][j];}}}

System.out.print("The Trace is "+sum+" Norm "+Norm);
}}
	