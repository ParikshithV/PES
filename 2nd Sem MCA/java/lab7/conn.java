import java.sql.*;
class JdbcDemo {
	public static void main(String[] args) throws ClassNotFoundException, SQLException {
		Class.forName("oracle.jdbc.driver.OracleDriver");

		Connection con=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","password");
		System.out.println("Connection is established");

		Statement st=con.createStatement();

		String query="select * from emp";

		ResultSet result=st.executeQuery(query);
    System.out.println("Names \n-------");

		while(result.next()){
			System.out.println(result.getString(1));
		}

		con.close();
	}
}
