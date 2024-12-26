class Operations{

static int[] arr= new int[10];
static int size=0;
static void Input(int x) {
        arr[size]=x;
	size++;
        }

static void Display() {
        System.out.println("arr values:");
        for (int val : arr) {
            System.out.print(val + " ");}
        System.out.println(); }

static void Largest() {
        int max = arr[0];
        for (int i=1;i<10;i++) {
            if (arr[i]>max) {
                max=arr[i];}}
        System.out.println("The Max is "+max);}

static void Avg() {
        int sum = 0;
        for (int val : arr) {
            sum += val;}
        System.out.println("The Average is "+sum/10);}
	

static void Sort() {
int n=arr.length;  
int temp=0;  
for(int i=0;i<n;i++){  
	for(int j=1;j<(n-i);j++){  
		if(arr[j-1]>arr[j]){  
			temp=arr[j-1];  
			arr[j-1]=arr[j];  
			arr[j]=temp;}}}  
}
}


class MainOperations{
public static void main(String args[]){


Operations.Input(7);
Operations.Input(9);
Operations.Input(6);
Operations.Input(8);
Operations.Display();
Operations.Avg();
Operations.Largest();
Operations.Sort();
Operations.Display();
}
}



