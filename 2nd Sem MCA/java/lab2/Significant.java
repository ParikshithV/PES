import java.util.Scanner;

class Shifting {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number:");

        String num = sc.nextLine();
        String rest = num.substring(1);
        String first = num.substring(0, 1);
        String addingString = rest + first;

        System.out.println(Integer.parseInt(addingString.trim()));

    }
}
