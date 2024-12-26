import java.util.Scanner;
class AddMultiplyMatrix
{
    public static void main(String args[])
    {
        int m,n,p,q,i,j,k;
        Scanner in = new Scanner(System.in);

        System.out.println("Enter dimensions of matrix 1: ");
        m = in.nextInt();
        n = in.nextInt();

        System.out.println("Enter dimensions of matrix 2: ");
        p = in.nextInt();
        q = in.nextInt();

        if(m!=p || n!=q){
        System.out.println("Can not add and multiply");
        System.exit(0);}

        int a[][] = new int[m][n];
        System.out.println("Enter elements of mat 1: ");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                a[i][j]= in.nextInt();
            }
        }

        int b[][] = new int[p][q];
        System.out.println("Enter elements of mat 2: ");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                b[i][j]= in.nextInt();
            }
        }

        int c[][] = new int[m][q];
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                c[i][j]=0;
                for(k=0;k<n;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
    
        int d[][] = new int[m][n];
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                    d[i][j]=a[i][j]+b[i][j];
            }
        }

        System.out.println("\nResult of Addition: ");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++)
                System.out.print(d[i][j]+" ");
            System.out.println();
        }

        System.out.println("\nResult of Multiplication: ");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++)
                System.out.print(c[i][j]+" ");
            System.out.println();
        }
        
    }
}