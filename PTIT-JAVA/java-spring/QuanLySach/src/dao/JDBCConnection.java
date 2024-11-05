/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package dao;


import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
/**
 *
 * @author nguye
 */
public class JDBCConnection {

    private static String DB_URL = "jdbc:sqlserver://javis:1433;databaseName=HelloDB;encrypt=true;trustServerCertificate=true";
    private static String USER_NAME = "sa";
    private static String PASSWORD = "123456789";

    public static void main(String args[]) {
        try {
            Connection connect = getConnection(DB_URL, USER_NAME, PASSWORD);
            Statement statement = connect.createStatement();

//            statement.executeUpdate("INSERT INTO student(id, ten, dia_chi) " + "VALUES (12, 'Hoang',  'Bac Ninh')");

            ResultSet rs = statement.executeQuery("SELECT * FROM Book");

            while (rs.next()) {
                System.out.println(rs.getInt(1) + " \t " + rs.getString(2)
                        + " \t " + rs.getString(3));
            }
            // close connection
            connect.close();
        } catch (Exception e) {
            e.printStackTrace();
        }

    }

    public static Connection getConnection(String dbURL, String userName,
            String password) {
        Connection connect = null;
        try {
            Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
            connect = DriverManager.getConnection(dbURL, userName, password);
            System.out.println("connect successfully!");
        } catch (Exception ex) {
            System.out.println("connect failure!");
            ex.printStackTrace();
        }
        return connect;
    }

}
