import java.util.Scanner;
class Exceptions
{
    public static void main(String[] args)
    {
        try
        {
            int a,b;
            a=1;
            b=0;
            float result=a/b;
            System.out.println("The result of division is:"+result);
        }
        catch (ArithmeticException e)
        {
            System.out.println("Expected error occured.");
        }
        finally
        {
            System.out.println("Finally block executes anyway.");
        }

    }
}
