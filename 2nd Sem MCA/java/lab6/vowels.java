import java.util.Scanner;
class Consonents
{
    public static void main(String[] args)
    {
      modstr("SANTOSH");
      modstr("UNIVERSITY");
      modstr("MASTERCARD");
    }

    static void modstr(String str)
    {
        String con=str;
        String newstr=con.replaceAll("[AEIOUaeiou]","");
        System.out.println(newstr);
    }
}
