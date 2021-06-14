import java.util.Scanner;

class Nprncr{
    public static int fact(int num)
    {
      int fact=1, i;
      for(i=1; i<=num; i++){
          fact = fact*i;
      }
      return fact;
    }
    public static void main(String args[]){
        int n, r;
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter Value of n : ");
        n = scan.nextInt();
        System.out.print("Enter Value of r : ");
        r = scan.nextInt();

        System.out.println("permutation  =  " +(fact(n)/(fact(n-r))));
		System.out.println("combination = " +(fact(n)/(fact(n-r)*fact(r))));

    }
}
