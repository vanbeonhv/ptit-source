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
    public static Connection getConnection() {
        Connection connect = null;
        try {
            String DB_URL = "jdbc:sqlserver://javis:1433;databaseName=HelloDB;encrypt=true;trustServerCertificate=true";
            String USER_NAME = "sa";
            String PASSWORD = "123456789";
            Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
            connect = DriverManager.getConnection(DB_URL, USER_NAME, PASSWORD);
            System.out.println("connect successfully!");
        } catch (Exception ex) {
            System.out.println("connect failure!");
            ex.printStackTrace();
        }
        return connect;
    }

}
