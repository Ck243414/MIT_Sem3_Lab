import java.util.Scanner;
class Symmetric
{
    public static void main(String args[])
    {
        int m,n,i,j;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter dimension of sq matrix: ");
        m = in.nextInt();
        n = in.nextInt();
        if(m!=n){
            System.out.println("Not a square matrix\nNot symmetric");
            System.exit(0);
        }
        int arr[][] = new int[m][n];
        System.out.println("Enter elements: ");
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                arr[i][j]= in.nextInt();
            }
        }

        int flag = 1;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(arr[i][j]!=arr[j][i]){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag==1)
            System.out.println("Symmetric Matrix");
        else
            System.out.println("Not Symmetric Matrix");
    }
}