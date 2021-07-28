import java.io.*;
class Unchecked
{
 public static void main(String[] args)
 {
     try
     {
        int a[] = { 2, 20, 11, 5 };
        System.out.println(a[5]);//throws ArrayIndexoutOfBoundException
     }
     finally
     {
        System.out.println("This is finally block.\n");
     }
 }
}
