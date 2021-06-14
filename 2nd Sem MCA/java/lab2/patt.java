import java.util.Scanner;

class Patt{
  public static void main(String args[])
  {
     int k=1, i, ulim, j;

     Scanner input= new Scanner(System.in);

     System.out.println("Enter upper limit for pattern:");
     ulim= input.nextInt();

     System.out.println("\nPattern:");
     for (i=1; i<=ulim; i++) {
       for (j=1; j<=i; j++) {
         System.out.print(k++ +" ");
       }
       System.out.println();
     }
  }
}
