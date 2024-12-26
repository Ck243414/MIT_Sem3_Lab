import java.util.Scanner;
class NonDiagonal
{
    public static void main(String args[])
    {
        int m,n,i,j,sum=0;
        Scanner in = new Scanner(System.in);

        System.out.println("Enter rows of sq matrix: ");
        m = in.nextInt();

        System.out.println("Enter columns of sq matrix: ");
        n = in.nextInt();

        if(m!=n){
            System.out.print("Not a square matrix");
            System.exit(0);
        }

        int arr[][] = new int[m][n];
        System.out.println("Enter elements: ");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                arr[i][j]= in.nextInt();
            }
        }

        System.out.println("Non-diagonal elements: ");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(i!=j)
                {
                    System.out.println(arr[i][j]);
                    sum += arr[i][j];
                }
            }
        }
        System.out.println("Sum of non-diagonal elements: "+sum);
    }
}