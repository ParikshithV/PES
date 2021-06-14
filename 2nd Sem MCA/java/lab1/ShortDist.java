import java.util.Scanner;
class ShortDist
{
	public static void main (String[] args)
	{
    Scanner input= new Scanner(System.in);

    System.out.println("Enter value of x1:");
    int x1 = input.nextInt();

    System.out.println("Enter value of x2:");
    int x2 = input.nextInt();

    System.out.println("Enter value of y1:");
    int y1 = input.nextInt();

    System.out.println("Enter value of y2:");
    int y2 = input.nextInt();

    System.out.println("Shortest distance:");
    System.out.println(Math.sqrt((x2 - x1) * (x2 - x1)+(y2 - y1) * (y2 - y1)));
  }
}
