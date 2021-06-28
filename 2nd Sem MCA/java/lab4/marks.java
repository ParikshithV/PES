import java.util.Scanner;

class Marks{
  public static void main(String args[])
  {
    Scanner input= new Scanner(System.in);

    int nStud = 2;  //number of students
    int student[][] = new int[nStud][];
    int totMark[] = new int[nStud];

    System.out.println("Enter marks of "+nStud+" students:");

    for (int i = 0; i < nStud; i++) {
      System.out.print("Enter no. of subjects for student "+i+" : ");
      int subs = input.nextInt();
      int total=0;
      for (int j=1; j <= subs; j++) {
        student[i]=new int[j-1];
        System.out.print("Enter marks of subject "+ j +" : ");
        int subMark = input.nextInt();
        total += subMark;
        student[i]=new int[subMark];
      }
      totMark[i] = total;
      System.out.println("Total marks : "+ totMark[i] +"\n");
    }
    int sum = 0;
    for (int k=0; k<nStud; k++) {
      sum += totMark[k];
    }
    int avg = sum/nStud;
    System.out.println("Average marks of "+nStud+" students : "+avg+"\n");
  }
}
