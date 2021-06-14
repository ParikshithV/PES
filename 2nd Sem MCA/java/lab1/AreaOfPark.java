import java.util.Scanner;
class AreaOfPark
{
   public static void main(String args[])
    {

     Scanner input= new Scanner(System.in);

     System.out.println("Enter length of 1st side:");
     int a= input.nextInt();

     System.out.println("Enter length of 2nd side:");
      int b= input.nextInt();

     System.out.println("Enter length of 3rd side:");
     int c= input.nextInt();
      if((a+b)>c && (a+c)>b && (b+c)>a)
        {
          int s=(a+b+c)/2;
          double  area=Math.sqrt(s*(s-a)*(s-b)*(s-c));
          double  speri=Math.sqrt((a+b+c)/2);
          System.out.println("Semi-perimeter of park is: " + speri);
           System.out.println("Area of park is: " + area);
         }
       else
         System.out.println("Invalid input");
   }
}
