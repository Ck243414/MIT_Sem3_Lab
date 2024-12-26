import java.util.Scanner;
class MagicSq
{
    public static void main(String args[])
    {
        int m,n,i,j,pd=0,sd=0;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter dimension of magic sq: ");
        m = in.nextInt();
        n = in.nextInt();

        if(m!=n){
            System.out.print("Not a magic square");
            System.exit(0);
        }

        int a[][] = new int[m][n];
        System.out.println("Enter elements: ");
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                a[i][j]= in.nextInt();
            }
        }

        //Sum of principal diagonal
        for(i=0;i<m;i++){
            pd+=a[i][i];
        }

        //Sum of non-principal diagonal
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                if(i+j==m-1){
                    sd+=a[i][j];
                } 
            }
        }

        if(sd!=pd){
            System.out.print("Not a magic square");
            System.exit(0);
        }

        int rs[] = new int[m];
        for(i=0;i<m;i++)
        {
            rs[i]=0;
            for(j=0;j<n;j++)
            {
                rs[i]+=a[i][j];
            }
            if(rs[i]!=pd)
            {
                System.out.print("Not a magic square");
                System.exit(0);
            }
        }

        int cs[] = new int[m];
        for(i=0;i<n;i++)
        {
            cs[i]=0;
            for(j=0;j<m;j++)
            {
                cs[i]+=a[j][i];
            }
            if(cs[i]!=pd)
            {
                System.out.print("Not a magic square");
                System.exit(0);
            }
        }

        System.out.print("A magic square");
    }
}