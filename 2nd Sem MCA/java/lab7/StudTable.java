import java.sql.*;
import java.util.*;
class StudTable {
	public static void main(String[] args) throws ClassNotFoundException, SQLException {
		Class.forName("oracle.jdbc.driver.OracleDriver");

		Connection con=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","password");
		System.out.println("Connection is established");

		Statement st=con.createStatement();

    String dropTable = "DROP TABLE student";
    //st.executeQuery(dropTable);

    String TableCreate ="CREATE TABLE student (srn varchar(10), name varchar(10), course varchar(10), cgpa varchar(10))";
    //st.executeQuery(TableCreate);

    String query="select * from student";
    String query1="select * from student where cgpa > 8";
    String query2="select * from student where cgpa < 5";

    Scanner sc = new Scanner(System.in);

    char c = 'y';
    System.out.print("Do you want to input values? (y/n) :  ");
    c= sc.nextLine().charAt(0);

    while(c=='y') {
      System.out.print("Enter SRN: ");
      String srn= sc.nextLine();

      System.out.print("Enter Name: ");
      String name= sc.nextLine();

      System.out.print("Enter Course: ");
      String course= sc.nextLine();

      System.out.print("Enter cgpa: ");
      String cgpa= sc.nextLine();

      String InsQuery="insert into student values ('"+srn+"', '"+name+"', '"+course+"', '"+cgpa+"')";
      ResultSet insResult=st.executeQuery(InsQuery);

      System.out.print("Do you want to input more values? (y/n) :  ");
      c= sc.nextLine().charAt(0);
    }


    System.out.println("Original table:\nSRN\tName\tCourse\tCGPA");
    ResultSet result=st.executeQuery(query);
		while(result.next()){
			System.out.println(result.getInt(1)+"\t"+result.getString(2)+"\t"+result.getString(3)+"\t"+result.getString(4));
		}

    System.out.println("\nCGPA > 8:\nSRN\tName\tCourse\tCGPA");
    ResultSet result1=st.executeQuery(query1);
		while(result1.next()){
			System.out.println(result1.getInt(1)+"\t"+result1.getString(2)+"\t"+result1.getString(3)+"\t"+result1.getString(4));
		}

    System.out.println("\nCGPA < 5:\nSRN\tName\tCourse\tCGPA");
    ResultSet result2=st.executeQuery(query2);
    while(result2.next()){
      System.out.println(result2.getInt(1)+"\t"+result2.getString(2)+"\t"+result2.getString(3)+"\t"+result2.getString(4));
    }

		con.close();
	}
}
