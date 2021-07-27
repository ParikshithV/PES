import java.sql.*;
class JdbcDemo {
	public static void main(String[] args) throws ClassNotFoundException, SQLException {
		Class.forName("oracle.jdbc.driver.OracleDriver");

		// Establish the route - con object establishes the dedicated route
		Connection con=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","password");
		System.out.println("Connection is established");
		// System.out.println(con.getClass().getName());

		Statement st=con.createStatement(); // vehicle is created for the dedicated route

		// String createQuery="INSERT INTO emp VALUES ('check');";
		String query="select * from emp";

		// ResultSet createResult=st.executeQuery(createQuery);
		ResultSet result=st.executeQuery(query);
		// by default, cursor will be pointing to BoF and NOT the FIRST Record
		// To go to the FIRST record, call next() function
		//next() function will move the cursor to the next rocord in the resutlSet object
		while(result.next()){
			//System.out.println(result.getInt(1)+"--"+result.getString(2)+"--"+result.getString(3));
			System.out.println(result.getString(1));
		}

				//........
		con.close();
	}
}

// class T4CConnection implements Connection
