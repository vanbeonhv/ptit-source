package dao;



import dao.JDBCConnection;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import model.Book;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author nguye
 */
public class BookDao {
    public List<Book> getAllBook(){
        List<Book> books = new ArrayList<Book>();
        Connection connection = JDBCConnection.getConnection();
        String sql = "select * from Book";
        try {
            PreparedStatement preparedStatement = connection.prepareStatement(sql);
            ResultSet rs = preparedStatement.executeQuery();
            while(rs.next()){
                var book = new Book();
                book.setId(rs.getInt("id"));
                book.setTenSach(rs.getString("tenSach"));
                book.setTacGia(rs.getString(3));
                book.setChuyenNganh(rs.getString(4));
                book.setSoLuong(rs.getInt(5));
                books.add(book);
            }
           
            connection.close();
                    
        } catch (Exception e) {
        }
        return books;
    }
    
}
