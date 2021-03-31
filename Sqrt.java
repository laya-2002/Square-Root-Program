import java.util.Scanner;
class Sqrt
{
    public static void main(String args[])
    {
        /* 'a' is a variable which stores the positive integer, whose square root we are finding. */ 
        int a; 
        Scanner m=new Scanner(System.in);
        System.out.println("Enter any positive integer : ");
        a=m.nextInt();
        /* calling the square_root() function */
        square_root(a);
        m.close();
    }
    public static void square_root(int x)
    {
        int i,r;
        /* 'i' is variable of iteration. */
        /* 'r' is a variable which stores the square root of given value. */
        for(i=0;i<=x/2;i++)
        {
            if(i*i==x)
            {
                r=i;
                System.out.println("The square root of "+x+" is "+r+".");
            }
        }
    }
}
