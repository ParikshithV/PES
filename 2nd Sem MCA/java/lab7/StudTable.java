import java.sql.*;
import java.util.*;
class StudTable {
	public static void main(String[] args) throws ClassNotFoundException, SQLException {
		Class.forName("oracle.jdbc.driver.OracleDriver");

		Connection con=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","password");
		System.out.println("Connection is established");

		Statement st=con.createStatement();

    String dropTable = "DROP TABLE student";
    st.executeQuery(dropTable);

    String TableCreate ="CREATE TABLE student (srn varchar(10), name varchar(10), course varchar(10), cgpa varchar(10))";
    st.executeQuery(TableCreate);

    String query="select * from student";

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

		ResultSet result=st.executeQuery(query);
    System.out.println("\nSRN\tName\tCourse\tCGPA");

    int i = 0;

		while(result.next()){
			System.out.println(result.getInt(1)+"\t"+result.getString(2)+"\t"+result.getString(3)+"\t"+result.getString(4));
		}

		con.close();
	}
}
