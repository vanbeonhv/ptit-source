/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package service;

import dao.BookDao;

import java.sql.SQLException;
import java.util.List;

import model.Book;

/**
 * @author nguye
 */
public class BookService {

    private BookDao bookDao;

    public BookService() {
        bookDao = new BookDao();
    }

    public List<Book> getAllBook() {
        return bookDao.getAllBook();
    }

    public void addBook(Book book) {
        bookDao.addBook(book);
    }

}
