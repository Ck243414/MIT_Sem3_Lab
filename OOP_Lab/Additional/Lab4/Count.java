import java.util.*;

class Count{

public static void main(String args[]) {


Scanner sc= new Scanner(System.in);
System.out.println("Enter order number ");
int m=sc.nextInt();
int n=sc.nextInt();
int[][] arr=new int[50][50];
int count=0;

System.out.print("Enter Elements");
for(int i=0;i<m;i++) {
	for(int j=0;j<n;j++) {
		arr[i][j]=sc.nextInt();} }

System.out.print("Enter the element to count");
int ck=sc.nextInt();

for(int i=0;i<m;i++) {
	for(int j=0;j<n;j++) {
		if(arr[i][j]==ck) {count++;}
		System.out.print(+arr[i][j]+"\t");}
		System.out.print("\n");}


System.out.print("The number of times the element is repeated in the matrix "+count);

}}
	