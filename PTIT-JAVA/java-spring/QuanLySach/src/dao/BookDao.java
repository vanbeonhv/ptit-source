package dao;


import dao.JDBCConnection;

import java.io.IOException;
import java.sql.SQLException;
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
 * @author nguye
 */
public class BookDao {
    private final String TABLE_NAME = "Book";

    public List<Book> getAllBook() {
        List<Book> books = new ArrayList<Book>();
        Connection connection = JDBCConnection.getConnection();
        String sql = "select * from " + TABLE_NAME + " order by 'id'";
        try {
            PreparedStatement preparedStatement = connection.prepareStatement(sql);
            ResultSet rs = preparedStatement.executeQuery();
            while (rs.next()) {
                var book = new Book();
                book.setId(rs.getInt("id"));
                book.setTenSach(rs.getString("tenSach"));
                book.setTacGia(rs.getString("tacGia"));
                book.setChuyenNganh(rs.getString("chuyenNganh"));
                book.setSoLuong(rs.getInt("soLuong"));
                books.add(book);
            }

            connection.close();

        } catch (Exception e) {
            e.printStackTrace();
        }
        return books;
    }

    public void addBook(Book book) {
        try {

            Connection connection = JDBCConnection.getConnection();
            String sql = "insert into " + TABLE_NAME + " (id, tenSach, tacGia, chuyenNganh, soLuong) values (?, ?, ?, ?, ?)";
            PreparedStatement preparedStatement = connection.prepareStatement(sql);
            preparedStatement.setString(1, Integer.toString(book.getId()));
            preparedStatement.setString(2, book.getTenSach());
            preparedStatement.setString(3, book.getTacGia());
            preparedStatement.setString(4, book.getChuyenNganh());
            preparedStatement.setString(5, Integer.toString(book.getSoLuong()));
            preparedStatement.executeUpdate();

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
    
    

}
