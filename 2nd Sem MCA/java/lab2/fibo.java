import java.util.Scanner;

class Fibo{
  public static void main(String args[])
  {
     int num1,num2=0,num3,i,ulim,llim;

     Scanner input= new Scanner(System.in);

     System.out.println("Enter lower limit for fibonacci series:");
     llim= input.nextInt();

     System.out.println("Enter upper limit for fibonacci series:");
     ulim= input.nextInt();

     if (ulim>llim) {
       System.out.println("Fibonacci series:");
       num1 = llim;
       for(i=llim;i<ulim;++i)
       {
          num3=num1+num2;
          if(num3<ulim)
            System.out.print(num3+", ");
          num1=num2;
          num2=num3;
       }
     }
     else
      System.out.println("Upper limit has to be lower than the lower limit");
  }
}
