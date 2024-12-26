import java.util.Scanner;
class Principal
{
    public static void main(String args[])
    {
        int m,i,j,sum=0;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter dimension of sq matrix: ");
        m = in.nextInt();
        int arr[][] = new int[m][m];
        System.out.println("Enter elements: ");
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                arr[i][j]= in.nextInt();
            }
        }
        System.out.println("Diagonal elements: ");
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                if(i==j)
                {
                    System.out.println(arr[i][j]);
                    sum += arr[i][j];
                }
            }
        }
        System.out.println("Sum of Diagonal elements: "+sum);
    }
}