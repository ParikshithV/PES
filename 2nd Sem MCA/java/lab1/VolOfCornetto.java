import java.util.Scanner;
class VolumeofCornetto
{
	public static void main (String[] args)
	{
		Scanner input= new Scanner(System.in);

    System.out.println("Enter hight of cone:");
    int h = input.nextInt();

    System.out.println("Enter radius of cone:");
    int r = input.nextInt();

		double PI=3.14,V;
		V=PI*(r*r)*h/3;
		System.out.println("Volume of the cone:" +V);

	}
}
