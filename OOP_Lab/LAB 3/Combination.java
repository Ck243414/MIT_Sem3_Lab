public class Combination
{
    public static void main(String args[]) 
    {

        int a[]={1,2,3,4};
        System.out.println("Duplication allowed: ");
        for(int i: a)
        {
            for(int j: a)
            {
                for(int k: a)
                {
                    for(int l: a)
                    {
                        System.out.println(i+""+j+""+k+""+l+"\n");
                    }
                }
            }
        }
        System.out.println("Duplication not allowed: ");
        for(int i: a)
        {
            for(int j: a)
            {
                for(int k: a)
                {
                    for(int l: a)
                    {
                        if(!(i==j||i==k||i==l||j==k||j==l||k==l))
                        {
                        System.out.println(i+""+j+""+k+""+l+"\n");
                        }
                    }
                }
            }
        }
    }
}